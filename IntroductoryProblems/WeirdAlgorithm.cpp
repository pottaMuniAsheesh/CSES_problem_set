// To see the problem statement, visit, https://cses.fi/problemset/task/1068 

// To see the problem statement, visit, https://cses.fi/problemset/task/1068 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << n << ' ';
    while(n!=1){
        if((n&1)==0){
            n = n/2;
            cout << n << ' ';
        }
        else{
            n = 3*n + 1;
            cout << n << ' ';
        }
    }

    return 0;
}