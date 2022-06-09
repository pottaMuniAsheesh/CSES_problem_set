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
    
    int n, x;
    cin >> n >> x;
    int c[n];
    read_array<int>(c, n);
    sort(c, c+n);
    int a[x+1];
    for(int i = 0; i<=x; i++){
        a[i] = 0;
    }
    // for(int i = 0; i<n; i+=1){
    //     for(int j = 0; j<=x; j++){
    //         a[i][j] = (j == c[i]) ? 1 : 0;
    //     }
    // }
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<=x; j++){
            a[j] = (a[j] + ((j-c[i]>=0) ? a[j-c[i]] : 0) + ((j == c[i]) ? 1 : 0))%MOD;
        }
    }
    cout << a[x] << endl;

}