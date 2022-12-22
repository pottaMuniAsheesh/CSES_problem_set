// To see the problem statement, visit, https://cses.fi/problemset/task/2169 

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

bool covers(pair<int,int> &a, pair<int,int> &b){
    return (a.first<=b.first && a.second>=b.second) || (b.first<=a.first && b.second>=a.second);
}

struct {
    bool operator()(pair<int,int> &a, pair<int,int> &b){
        if(a.second < b.second){
            return true;
        }
        else if(a.second == b.second){
            return a.first < b.first;
        }
        return false;
    }
} second_priority_less;

void print_pair(pair<int,int> &a){
    cout << '{' << a.first << ',' << a.second << '}';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    pair<int,int> ranges[n], sorted_ranges[n], temp_range;
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        ranges[i].first = a;
        ranges[i].second = b;
        sorted_ranges[i] = ranges[i];
    }
    sort(sorted_ranges, sorted_ranges+n, second_priority_less);
    set<pair<int,int>> doesnot_contain_any_range, no_other_range_contains_it;
    temp_range = sorted_ranges[0];
    for(int i = 1; i<n; i++){
        if(covers(temp_range, sorted_ranges[i])){
            temp_range.first = max(temp_range.first, sorted_ranges[i].first);
            temp_range.second = min(temp_range.second, sorted_ranges[i].second);
        }
        else{
            doesnot_contain_any_range.insert(temp_range);
            // print_pair(temp_range);
            // cout << endl;
            temp_range = sorted_ranges[i];
        }
    }
    doesnot_contain_any_range.insert(temp_range);
    // print_pair(temp_range);
    // cout << endl;
    sort(sorted_ranges, sorted_ranges+n);
    temp_range = sorted_ranges[0];
    for(int i = 1; i<n; i++){
        if(covers(temp_range, sorted_ranges[i])){
            temp_range.first = min(temp_range.first, sorted_ranges[i].first);
            temp_range.second = max(temp_range.second, sorted_ranges[i].second);
        }
        else{
            no_other_range_contains_it.insert(temp_range);
            temp_range = sorted_ranges[i];
        }
    }
    no_other_range_contains_it.insert(temp_range);
    for(int i = 0; i<n; i++){
        cout << (doesnot_contain_any_range.count(ranges[i]) ? 0 : 1) << " ";
    }
    cout << endl;
    for(int i = 0; i<n; i++){
        cout << (no_other_range_contains_it.count(ranges[i]) ? 0 : 1) << " ";
    }
    cout << endl;

}