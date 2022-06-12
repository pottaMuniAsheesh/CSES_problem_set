// To see the problem statement, visit, https://cses.fi/problemset/task/1092 

// To see the problem statement, visit, https://cses.fi/problemset/task/1092 

#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if(n%4 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        int p = 1, q = n;
        for(int i = 0; i<n/4; i+=1){
            cout << p << ' ' << q << ' ';
            p += 1;
            q -= 1;
        }
        cout << endl << n/2 << endl;
        for(int i = 0; i<n/4; i+=1){
            cout << p << ' ' << q << ' ';
            p += 1;
            q -= 1;
        }
    }
    else if((n+1)%4 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        int p = 1, q = n-1;
        cout << n << ' ';
        for(int i = 0; i<n/4; i+=1){
            cout << p << ' ' << q << ' ';
            p += 1;
            q -= 1;
        }
        cout << endl << n-n/2 << endl;
        while(p<=q){
            cout << p << ' ';
            p += 1;
        }
    }
    else{
        cout << "NO";
    }

    return 0;
}