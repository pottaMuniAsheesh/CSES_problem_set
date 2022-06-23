// To see the problem statement, visit, https://cses.fi/problemset/task/1073 

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
    vector<int> res;
    for(int i = 0; i<n; i++){
        auto it = upper_bound(res.begin(), res.end(), a[i]);
        if(it == res.end()){
            res.push_back(a[i]);
        }
        else{
            *it = a[i];
        }
    }
    cout << res.size() << endl;

}