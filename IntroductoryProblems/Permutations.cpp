// To see the problem statement, visit, https://cses.fi/problemset/task/1070 

// To see the problem statement, visit, https://cses.fi/problemset/task/1070 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    cin >> n;
    if(n>3 || n==1){
        temp = n-1;
        while(temp>0){
            cout << temp << ' ';
            temp -= 2;
        }
        temp = n;
        while(temp>0){
            cout << temp << ' ';
            temp -= 2;
        }
    }
    else{
        cout << "NO SOLUTION";
    }

    return 0;
}