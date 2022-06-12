// To see the problem statement, visit, https://cses.fi/problemset/task/1755 

// To see the problem statement, visit, https://cses.fi/problemset/task/1755 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, res;
    cin >> s;
    int a[26] = {0};
    bool flag = true;
    for(char c: s){
        a[c-'A'] += 1;
    }
    if(s.size()%2 == 0){
        for(int x : a){
            if(x%2 == 1){
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i = 0; i<26; i+=1){
                for(int j = 0; j<a[i]/2; j+=1){
                    res.push_back('A'+i);
                }
            }
            cout << res;
            reverse(res.begin(), res.end());
            cout << res;
        }
        else{
            cout << "NO SOLUTION";
        }
    }
    else{
        int odd_count = 0;
        char odd_char;
        for(int i = 0; i<26; i+=1){
            if(a[i]%2 == 1){
                odd_count += 1;
                odd_char = (char)'A'+i;
                if(odd_count>1){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            for(int i = 0; i<26; i+=1){
                for(int j = 0; j<a[i]/2; j+=1){
                    res.push_back('A'+i);
                }
            }
            cout << res << odd_char;
            reverse(res.begin(), res.end());
            cout << res;
        }
        else{
            cout << "NO SOLUTION";
        }
    }

    return 0;
}