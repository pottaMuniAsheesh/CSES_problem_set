// To see the problem statement, visit, https://cses.fi/problemset/task/1623 

// To see the problem statement, visit, https://cses.fi/problemset/task/1623 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

void read_array(int* a, int n){
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
        int n;
        cin >> n;
        int a[n];
        read_array(a, n);
        int comb = 0;
        ll tot_sum = 0, min_diff, sum1, sum2;
        for(int x : a){
            tot_sum += x;
        }
        min_diff = LLONG_MAX;
        while(comb < (1<<n)){
            sum1 = req_sum(a, n, comb);
            sum2 = tot_sum - sum1;
            min_diff = min(min_diff, abs(sum1-sum2));
            comb += 1;
        }
        cout << min_diff << endl;
    // }

}
}