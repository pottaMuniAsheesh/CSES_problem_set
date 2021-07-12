// To see the problem statement, visit, https://cses.fi/problemset/task/1090 

// To see the problem statement, visit, https://cses.fi/problemset/task/1090 

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

int lb(int a[], int l, int r, int val){
    int mid = l + (r - l)/2;
    while(l < r){
        mid = l + (r - l)/2;
        if(a[mid] < val){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    return r;
}

int ub(int a[], int l, int r, int val){
    int mid = l + (r - l)/2;
    while(l < r){
        mid = l + (r - l)/2;
        if(a[mid] > val){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return r;
}

ll req_sum(int a[], int n, int comb){
    
    ll sum = 0;
    for(int i = 0; i<n; i+=1){
        if(comb&1){
            sum += a[i];
        }
        comb >>= 1;
    }
    return sum;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // int t;
    // cin >> t;
    // while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        read_array(a, n);
        sort(a, a+n);
        int i = 0, j = n-1;
        int res = 0;
        while(i<j){
            if( (ll)a[i] + a[j] > x) j -= 1;
            else{
                i += 1;
                j -= 1;
            }
            res += 1;
        }
        if(i==j) res += 1;
        cout << res << endl;
    // }

}
}