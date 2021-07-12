// To see the problem statement, visit, https://cses.fi/problemset/task/1754 

// To see the problem statement, visit, https://cses.fi/problemset/task/1754 

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
    while(t-- > 0){
        ll a, b;
        cin >> a >> b;
        if((2*a-b >= 0) && (2*b-a >= 0) && ((2*a-b)%3 == 0) && ((2*b-a)%3 == 0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}