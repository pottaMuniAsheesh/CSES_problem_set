// To see the problem statement, visit, https://cses.fi/problemset/task/1618 

// To see the problem statement, visit, https://cses.fi/problemset/task/1618 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, temp = 5, res = 0;
    cin >> n;
    while(temp <= n){
        res += n/temp;
        temp *= 5;
    }
    cout << res;

    return 0;
}