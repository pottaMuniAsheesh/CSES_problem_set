// To see the problem statement, visit, https://cses.fi/problemset/task/1668 

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
    int level[n+1];
    bool visited[n+1];
    queue<int> q;
    fill(level, level+n+1, -1);
    fill(visited, visited+n+1, false);
    for(int i = 1; i<=n; i++){
        if(visited[i]){
            continue;
        }
        q.push(i);
        visited[i] = true;
        level[i] = 0;
        while(!q.empty()){
            u = q.front();
            q.pop();
            for(int j = 0; j<adj[u].size(); j++){
                v = adj[u][j];
                if(visited[v]){
                    continue;
                }
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
    bool is_bipartite = true;
    for(int u = 1; u<=n; u++){
        for(int j = 0; j<adj[u].size(); j++){
            v = adj[u][j];
            if(level[u]==level[v]){
                is_bipartite = false;
            }
        }
        if(!is_bipartite){
            break;
        }
    }
    if(!is_bipartite){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        for(int i = 1; i<=n; i++){
            cout << (level[i]%2) + 1 << " ";
        }
        cout << endl;
    }
    

}