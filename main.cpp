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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    

}