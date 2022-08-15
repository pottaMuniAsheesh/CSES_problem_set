// To see the problem statement, visit, https://cses.fi/problemset/task/1666 

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

void dfs(int u, bool visited[], vector<int> adj[]){
    if(visited[u]) return;
    visited[u] = true;
    for(int v : adj[u]){
        dfs(v, visited, adj);
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
    int i = 1;
    vector<int> res;
    while(i<=n){
        res.push_back(i);
        dfs(i, visited, adj);
        while(i<=n && visited[i]){
            i++;
        }
    }
    cout << res.size()-1 << endl;
    for(i = 0; i<res.size()-1; i++){
        cout << res[i] << " " << res[i+1] << endl;
    }

}