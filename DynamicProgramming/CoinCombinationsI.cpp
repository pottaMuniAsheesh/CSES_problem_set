// To see the problem statement, visit, https://cses.fi/problemset/task/1635 

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
    for(int i = 0; i<=x; i+=1){
        a[i] = 0;
    }
    a[0] = 1;
    for(int i = 0; i<=x; i+=1){
        for(int j = 0; j<n; j+=1){
            if(i-c[j] >= 0){
                a[i] = (a[i-c[j]] + a[i]) % MOD;
            }
        }
    }
    cout << a[x] << endl;

}