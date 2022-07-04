// To see the problem statement, visit, https://cses.fi/problemset/task/1158 

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
    
    int n, x;
    cin >> n >> x;
    int prices[n], pages[n], a[x+1];
    read_array<int>(prices, n);
    read_array<int>(pages, n);
    for(int i = 0; i<x+1; i++){
        a[i] = 0;
    }
    int res = 0;
    for(int i = 0; i<n; i++){
        if(x>=prices[i]){
            for(int j = x-prices[i]; j>=0; j--){
                a[j+prices[i]] = max(a[j+prices[i]], a[j]+pages[i]);
                res = max(res, a[j+prices[i]]);
            }
        }
    }
    cout << res << endl;

}