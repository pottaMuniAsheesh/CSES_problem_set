// To see the problem statement, visit, https://cses.fi/problemset/task/1667 

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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, u, v;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i<m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visited[n+1];
    fill(visited, visited+n+1, false);
    int distances[n+1];
    fill(distances, distances+n+1, INT_MAX);
    queue<int> q;
    visited[n] = true;
    distances[n] = 0;
    q.push(n);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                q.push(v);
                distances[v] = distances[u]+1;
                visited[v] = true;
            }
        }
    }
    if(!visited[1]){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << distances[1] +1 << endl;
        int curr = 1;
        while(curr != n){
            cout << curr << " ";
            for(int i = 0; i<adj[curr].size(); i++){
                if(distances[adj[curr][i]] == distances[curr]-1){
                    curr = adj[curr][i];
                    break;
                }
            }
        }
        cout << curr << endl;
    }

}