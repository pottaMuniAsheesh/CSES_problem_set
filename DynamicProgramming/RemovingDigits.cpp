// To see the problem statement, visit, https://cses.fi/problemset/task/1637 

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
    a[0] = 0;
    for(int i = 1; i<=n; i++) a[i] = INT_MAX;
    for(int i = 1; i<=n; i++){
        int temp_min = INT_MAX, temp = i;
        while(temp>0){
            temp_min = min(temp_min, a[i - (temp%10)]);
            temp /= 10;
        }
        a[i] = temp_min + 1;
    }
    cout << a[n] << endl;

}