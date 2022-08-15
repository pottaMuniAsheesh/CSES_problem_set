// To see the problem statement, visit, https://cses.fi/problemset/task/1193 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

template<typename T>
void read_array(T a[], int n){
    for(int i = 0; i<n; i+=1){
        cin >> a[i];
    }
    return;
}

bool valid(int i, int j, int n, int m){
    return i>=0 && i<n && j>=0 && j<m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    char a[n][m];
    string res;
    pair<int, int> start, end;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j]=='B'){
                start = make_pair(i, j);
                a[i][j] = '.';
            }
            if(a[i][j] == 'A'){
                end = make_pair(i, j);
                a[i][j] = '.';
            }
        }
    }
    queue<pair<int,int>> q;
    int distances[n][m];
    for(int i = 0; i<n; i++){
        fill(distances[i], distances[i]+m, INT_MAX);
    }
    distances[start.first][start.second] = 0;
    a[start.first][start.second] = '#';
    q.push(start);
    int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
    char dir[] = {'D', 'U', 'R', 'L'};
    while(!q.empty()){
        pair<int, int> curr = q.front();
        q.pop();
        for(int i = 0; i<4; i++){
            if(valid(curr.first+di[i], curr.second+dj[i], n, m) && a[curr.first+di[i]][curr.second+dj[i]]=='.'){
                q.push(make_pair(curr.first+di[i], curr.second+dj[i]));
                distances[curr.first+di[i]][curr.second+dj[i]] = min(distances[curr.first+di[i]][curr.second+dj[i]], distances[curr.first][curr.second]+1);
                a[curr.first+di[i]][curr.second+dj[i]] = '#';
            }
        }
    }
    // cout << "BFS done" << endl;
    if(distances[end.first][end.second]==INT_MAX){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << distances[end.first][end.second] << endl;
        while(end!=start){
            for(int i = 0; i<4; i++){
                if(valid(end.first+di[i], end.second+dj[i], n, m) && distances[end.first+di[i]][end.second+dj[i]]== distances[end.first][end.second]-1){
                    res.push_back(dir[i]);
                    end.first += di[i];
                    end.second += dj[i];
                    break;
                }
            }
        }
        cout << res << endl;
        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         cout << distances[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

}