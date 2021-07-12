// To see the problem statement, visit, https://cses.fi/problemset/task/2164 

// To see the problem statement, visit, https://cses.fi/problemset/task/2164 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(k<=(n>>1)){
            cout << (k<<1) << endl;
        }
        else{
            k -= n/2;
            cout << (2*k+1)%n << endl;
        }
    }

    return 0;
}