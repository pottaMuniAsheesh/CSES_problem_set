// To see the problem statement, visit, https://cses.fi/problemset/task/1095 

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

long long binpow_mod(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        ll a, b;
        cin >> a >> b;
        cout << binpow_mod(a, b, MOD) << endl;
    }

}