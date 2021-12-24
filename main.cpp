#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

void read_array(int a[], int n){
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
    int a[n], b[n];
    for(int i = 0; i<n; i+=1){
        cin >> a[i] >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    int cur = 0, mx = -1;
    int i = 0, j = 0;
    while(i < n){
        if(a[i] < b[j]){
            cur += 1;
            i += 1;
        }
        else if(a[i] > b[j]){
            cur -= 1;
            j += 1;
        }
        mx = cur > mx ? cur : mx;
    }
    cout << mx << endl;

}