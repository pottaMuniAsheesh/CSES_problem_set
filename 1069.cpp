// To see the problem statement, visit, https://cses.fi/problemset/task/1069 

// To see the problem statement, visit, https://cses.fi/problemset/task/1069 

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size(), temp = 0, best = 0;
    char res = 'B', curr = res;
    for(int i = 0; i<n; i+=1){
        char c = s[i];
        if(c!=curr){
            temp = 1;
            curr = c;
        }
        else{
            temp += 1;
        }
        if(temp > best){
            best = temp;
            res = curr;
        }

    }
    cout << best;

    return 0;
}