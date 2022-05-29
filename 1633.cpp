// To see the problem statement, visit, https://cses.fi/problemset/task/1633 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

template<typename T>
void read_array(T a[], int n){
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
    int a[n+1];
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i<=n; i+=1){
        a[i] = 0;
        for(int j = i-1; j>=0 && j>=i-6; j-=1){
            a[i] = (a[i] + a[j])%MOD;
        }
    }
    cout << a[n] << endl;

}