// To see the problem statement, visit, https://cses.fi/problemset/task/1629 

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
    pair<int,int> a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    int res[n];
    for(int i = n-1; i>=0; i--){
        res[i] = 0;
        int temp = 0;
        auto it = lower_bound(a, a+n, make_pair(a[i].first+1,0)); // if you don't watch this movie.
        temp = (it == a+n ? 0 : res[it-a]);
        it = lower_bound(a, a+n, make_pair(a[i].second,0)); // if you watch this movie.
        res[i] = (it == a+n ? 1 : res[it-a]+1);
        // cout << "i=" << i << "dw=" << 
        res[i] = max(res[i], temp);
    }
    cout << res[0] << endl;

}