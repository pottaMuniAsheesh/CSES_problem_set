// To see the problem statement, visit, https://cses.fi/problemset/task/2205 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

string display(ll a, ll n){
    string s;
    for(int i = 0; i<n; i+=1){
        s.push_back('0'+(a&1));
        a >>= 1;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, res = 0;
    cin >> n;
    for(ll i = 0ll; i<(1<<n); i+=1ll){
        res = i^(i>>1);
        cout << display(res, n) << endl;
    }

    return 0;
}