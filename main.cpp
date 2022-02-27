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
    
    int n, res = 0;
    cin >> n;
    int a[n];
    read_array<int>(a, n);
    int i = 0, j = 0;
    set<int> s;
    while(j<n){
        if(s.empty()){
            s.insert(a[j]);
            // cout << a[j] << " inserted" << endl;
            j += 1;
            res = max(j-i, res);
        }
        else if(s.count(a[j])){
            while(a[i] != a[j]){
                s.erase(s.find(a[i]));
                // cout << a[i] << " removed" << endl;
                i += 1;
            }
            s.erase(s.find(a[i]));
            // cout << a[i] << " removed" << endl;
            i += 1;
            s.insert(a[j]);
            // cout << a[j] << " inserted" << endl;
            j += 1;
            res = max(j-i, res);
        }
        else{
            s.insert(a[j]);
            // cout << a[j] << " inserted" << endl;
            j += 1;
            res = max(res, j-i);
        }
    }
    cout << res << endl;

}