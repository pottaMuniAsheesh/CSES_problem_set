// To see the problem statement, visit, https://cses.fi/problemset/task/2165 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

void solve(int n, int a, int b, int c){
    if(n>0){
        solve(n-1,a,c,b);
        cout << a << ' ' << c << endl;
        solve(n-1,b,a,c);
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << (1<<n)-1 << endl;
    solve(n,1,2,3);

    return 0;
}