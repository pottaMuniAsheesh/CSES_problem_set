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
    a[0] = 0;
    if(x < c[0]){
        cout << -1 << endl;
    }
    else{
        for(int i = 0; i<n; i+=1){
            a[c[i]] = 1;
        }
        for(int i = 1; i<=x; i++){
            int mn = INT_MAX;
            for(int j = 0; j<n && i-c[j]>=0; j++){
                mn = min(mn, a[i-c[j]]);
            }
            if(mn == INT_MAX){
                a[i] = INT_MAX;
            }
            else{
                a[i] = mn + 1;
            }
        }
        cout << ((a[x] == INT_MAX) ? -1 : a[x]) << endl;
    }

}