// To see the problem statement, visit, https://cses.fi/problemset/task/1083 

// To see the problem statement, visit, https://cses.fi/problemset/task/1083 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, sum = 0ll, temp;
    cin >> n;
    for(int i=0; i<n-1; i+=1){
        cin >> temp;
        sum ^= temp;
    }
    for(int i = 1; i<=n; i+=1){
        sum ^= i;
    }
    cout << sum;

    return 0;
}