// To see the problem statement, visit, https://cses.fi/problemset/task/1617 

// To see the problem statement, visit, https://cses.fi/problemset/task/1617 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll res = 1;
    for(int i = 0; i<n; i+=1){
        res = (res*2)%MOD;
    }
    cout << res;

    return 0;
}