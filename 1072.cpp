// To see the problem statement, visit, https://cses.fi/problemset/task/1072 

// To see the problem statement, visit, https://cses.fi/problemset/task/1072 

#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i<=n; i+=1){
        ll res = (ll)(i*i)*(i*i-1)/2 - 4*(i-1)*(i-2);
        cout << res << endl;
    }

    return 0;
}