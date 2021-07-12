// To see the problem statement, visit, https://cses.fi/problemset/task/1621 

// To see the problem statement, visit, https://cses.fi/problemset/task/1621 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

void read_array(int* a, int n){
    for(int i = 0; i<n; i+=1){
        cin >> a[i];
    }
    return;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    read_array(a, n);
    sort(a, a+n);
    int res = 1;
    for(int i = 1; i<n; i+=1){
        if(a[i]!=a[i-1]){
            res += 1;
        }
    }
    cout << res;

    return 0;
}