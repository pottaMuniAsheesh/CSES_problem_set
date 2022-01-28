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
    int a[n];
    read_array<int>(a, n);
    sort(a, a+n);
    ll res = 0;
    for(int i = 0; i<n; i+=1){
        res += abs(a[i]-a[n/2]);
    }
    cout << res << endl;

}