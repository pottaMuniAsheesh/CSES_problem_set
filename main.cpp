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
    
    int n, temp = 0;
    cin >> n;
    int pos[n];
    for(int i = 0; i<n; i+=1){
        cin >> temp;
        pos[temp-1] = i;
    }
    int res = 1;
    for(int i = 0; i<n-1; i+=1){
        if(pos[i+1] < pos[i]){
            res += 1;
        }
    }
    cout << res << endl;

}