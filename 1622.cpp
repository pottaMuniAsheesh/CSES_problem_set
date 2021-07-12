// To see the problem statement, visit, https://cses.fi/problemset/task/1622 

// To see the problem statement, visit, https://cses.fi/problemset/task/1622 

#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

using namespace std;

int perm_count(string s){
    int c = 0;
    int facts[9] = {1}, temp = 1, freq[26] = {0};
    for(int i = 1; i<9; i+=1){
        temp *= i;
        facts[i] = temp;
    }
    for(char x:s){
        freq[x-'a'] += 1;
    }
    c = facts[s.size()];
    for(int f: freq){
        c /= facts[f];
    }
    return c;

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<int> perm;
    set<string> str_set;
    for(int i=0; i<s.size(); i+=1){
        perm.push_back(i);
    }
    cout << perm_count(s) << endl;
    do{
        string res;
        for(int i = 0; i<s.size(); i+=1){
            res.push_back(s[perm[i]]);
        }
        if(str_set.count(res)==0){
            str_set.insert(res);
            cout << res << endl;
        }
    }while(next_permutation(perm.begin(),perm.end()));

    return 0;
}