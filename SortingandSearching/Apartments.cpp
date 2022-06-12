// To see the problem statement, visit, https://cses.fi/problemset/task/1084 

// To see the problem statement, visit, https://cses.fi/problemset/task/1084 

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

    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    read_array(a, n);
    read_array(b, m);
    sort(a, a+n);
    sort(b, b+m);
    int p = 0, res = 0;
    for(int i = 0; i<n && p<m; i+=1){
        while(b[p]<a[i]-k && (p<m)){
            p+=1;
        }
        if(p>=m || b[p]>a[i]+k){
            continue;
        }
        else{
            res += 1;
            p+=1;
        }
    }
    cout << res;

    return 0;
}