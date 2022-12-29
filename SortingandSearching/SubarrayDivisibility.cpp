// To see the problem statement, visit, https://cses.fi/problemset/task/1662 

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

    int n;
    cin >> n;
    int a[n];
    read_array<int>(a, n);
    vector<int> freq(n, 0);
    int sum = 0;
    ll ans = 0;
    freq[0] += 1;
    for(int i = 0; i<n; i++){
        sum = ((sum + a[i])%n + n)%n;
        ans += freq[sum];
        freq[sum] += 1;
    }
    cout << ans << endl;

}