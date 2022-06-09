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
    
    int n;
    cin >> n;
    string grid[n];
    for(int i = 0; i<n; i++){
        cin >> grid[i];
    }
    int paths[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            paths[i][j] = 0;
        }
    }
    if(grid[0][0] == '.') paths[0][0] = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(grid[i][j] == '.'){
                if(j>=1) paths[i][j] = (paths[i][j] + paths[i][j-1])%MOD;
                if(i>=1) paths[i][j] = (paths[i][j] + paths[i-1][j])%MOD;
            }
        }
    }
    cout << paths[n-1][n-1] << endl;

}