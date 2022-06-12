// To see the problem statement, visit, https://cses.fi/problemset/task/1071 

// To see the problem statement, visit, https://cses.fi/problemset/task/1071 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll r, c;
    int t;
    cin >> t;
    while(t-->0){
        cin >> r >> c;
        if(r>c){
            if((r&1)==0){
                cout << r*r-c+1 << '\n';
            }
            else{
                cout << (r-1)*(r-1)+c << '\n';
            }
        }
        else if(r<c){
            if((c&1)==1){
                cout << c*c-r+1 << '\n';
            }
            else{
                cout << (c-1)*(c-1)+r << '\n';
            }
        }
        else{
            cout << r*(r-1)+1 << '\n';
        }
    }

    return 0;
}