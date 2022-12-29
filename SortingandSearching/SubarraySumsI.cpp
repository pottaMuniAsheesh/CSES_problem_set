// To see the problem statement, visit, https://cses.fi/problemset/task/1660 

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

struct second_priority_less{
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const {
        if(a.second < b.second){
            return true;
        }
        else if(a.second == b.second){
            return a.first < b.first;
        }
        return false;
    }
};

void print_pair(pair<int,int> &a){
    cout << '{' << a.first << ',' << a.second << '}';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    int a[n];
    read_array<int>(a, n);
    ll sum = 0, ans = 0;
    multiset<ll> freq;
    freq.insert(0);
    for(int i = 0; i<n; i++){
        sum += a[i];
        ans += freq.count(sum - x);
        freq.insert(sum);
    }
    cout << ans << endl;

}