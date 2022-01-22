// To see the problem statement, visit, https://cses.fi/problemset/task/1640 

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
    
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for(int i = 0; i<n; i+=1){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b){return a.first < b.first;});
    int l = 0, r = n-1;
    bool flag = false;
    while(l<r){
        if(a[l].first+a[r].first < x){
            l += 1;
        }
        else if(a[l].first+a[r].first > x){
            r -= 1;
        }
        else{
            flag = true;
            break;
        }
    }
    if(flag){
        cout << a[l].second+1 << ' ' << a[r].second+1 << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

}