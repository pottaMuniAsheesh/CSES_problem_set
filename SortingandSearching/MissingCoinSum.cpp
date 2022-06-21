// To see the problem statement, visit, https://cses.fi/problemset/task/2183 

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
    int a[n];
    read_array<int>(a, n);
    sort(a, a+n);
    ll pre_sum[n], sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
        pre_sum[i] = sum;
    }
    ll target = 1;
    for(int i = 0; i<n; i++){
        if(a[i]<=target){
            target = pre_sum[i] + 1;
        }
        else{
            break;
        }
    }
    cout << target << endl;

}