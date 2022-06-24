// To see the problem statement, visit, https://cses.fi/problemset/task/1163 

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
    
    int x, n;
    cin >> x >> n;
    int p[n];
    read_array<int>(p, n);
    set<int> lights;
    lights.insert(0);
    lights.insert(x);
    multiset<int> segs;
    segs.insert(x);
    for(int i = 0; i<n; i++){
        auto it = lights.upper_bound(p[i]);
        int end = *it;
        it--;
        int start = *it;
        auto it2 = segs.find(end-start);
        segs.erase(it2);
        segs.insert(p[i]-start);
        segs.insert(end-p[i]);
        lights.insert(p[i]);
        it2 = segs.end();
        it2--;
        cout << *it2 << " ";
    }
    cout << endl;

}