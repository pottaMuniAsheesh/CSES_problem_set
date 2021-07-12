// To see the problem statement, visit, https://cses.fi/problemset/task/1094 

// To see the problem statement, visit, https://cses.fi/problemset/task/1094 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, prev, curr, res = 0ll;
    cin >> n >> prev;
    for(ll i = 0ll; i<n-1; i+=1){
        cin >> curr;
        if(curr < prev){
            res += prev - curr;
            curr = prev;
        }
        prev = curr;
    }
    cout << res;

    return 0;
}