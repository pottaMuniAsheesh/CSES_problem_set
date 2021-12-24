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
    
    multiset<int> s;
    int n, m, temp;
    cin >> n >> m;
    for(int i = 0; i<n; i+=1){
        cin >> temp;
        s.insert(temp);
    }
    for(int i = 0; i<m; i+=1){
        cin >> temp;
        auto it = s.lower_bound(temp);
        if((it == s.begin() && *it > temp) || s.empty()){
            cout << -1 << endl;
        }
        else if(*it > temp || it == s.end()){
            it--;
            cout << *it << endl;
            s.erase(it);
        }
        else{
            cout << *it <<endl;
            s.erase(it);
        }
    }

}