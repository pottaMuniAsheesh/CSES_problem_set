// To see the problem statement, visit, https://cses.fi/problemset/task/1192 

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

void dfs(string a[], int i, int j, int n, int m){
    if(a[i][j]=='#') return;
    a[i][j] = '#';
    if(valid(i+1, j, n, m)){
        dfs(a, i+1, j, n, m);
    }
    if(valid(i-1, j, n, m)){
        dfs(a, i-1, j, n, m);
    }
    if(valid(i, j+1, n, m)){
        dfs(a, i, j+1, n, m);
    }
    if(valid(i, j-1, n, m)){
        dfs(a, i, j-1, n, m);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    string a[n];
    read_array<string>(a, n);
    int res = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j]=='.'){
                res += 1;
                dfs(a, i, j, n, m);
            }
        }
    }
    cout << res << endl;

}