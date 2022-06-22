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

struct custom_array{
private:
    vector<int> a;
    vector<int> pos;
    int res;
    int size;

public:
    custom_array(int array[], int n){
        a.push_back(0);
        pos.push_back(INT_MAX);
        for(int i = 0; i<n; i++){
            a.push_back(array[i]);
            pos.push_back(0);
        }
        pos.push_back(INT_MAX);
        for(int i = 1; i<=n; i++){
            pos[a[i]] = i;
        }
        res = 0;
        for(int i = 0; i<=n; i++){
            res += (pos[i]>pos[i+1] ? 1 : 0);
        }
        size = n;
        // cout << "Initially" << endl;
        // cout << "arr: ";
        // for(int i = 1; i<=size; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // cout << "pos: ";
        // for(int i = 1; i<=size; i++){
        //     cout << pos[i] << " ";
        // }
        // cout << endl;
        // cout << "res: " << res << endl;
    }

    void swap(int pos1, int pos2){
        int num1 = min(a[pos1], a[pos2]);
        int num2 = max(a[pos1], a[pos2]);
        if(num2-num1 == 1){
            res += (pos[num1-1]<pos[num1] && pos[num1-1]>pos[num2] ? 1 : 0);
            res += (pos[num1]<pos[num2] ? 1 : 0);
            res += (pos[num2]<pos[num2+1] && pos[num1]>pos[num2+1] ? 1 : 0);
            res -= (pos[num1-1]>pos[num1] && pos[num1-1]<pos[num2] ? 1 : 0);
            res -= (pos[num1]>pos[num2] ? 1 : 0);
            res -= (pos[num2]>pos[num2+1] && pos[num1]<pos[num2+1] ? 1 : 0);
        }
        else{
            res += (pos[num1-1]<pos[num1] && pos[num1-1]>pos[num2] ? 1 : 0);
            res += (pos[num1]<pos[num1+1] && pos[num2]>pos[num1+1] ? 1 : 0);
            res += (pos[num2-1]<pos[num2] && pos[num2-1]>pos[num1] ? 1 : 0);
            res += (pos[num2]<pos[num2+1] && pos[num1]>pos[num2+1] ? 1 : 0);
            res -= (pos[num1-1]>pos[num1] && pos[num1-1]<pos[num2] ? 1 : 0);
            res -= (pos[num1]>pos[num1+1] && pos[num2]<pos[num1+1] ? 1 : 0);
            res -= (pos[num2-1]>pos[num2] && pos[num2-1]<pos[num1] ? 1 : 0);
            res -= (pos[num2]>pos[num2+1] && pos[num1]<pos[num2+1] ? 1 : 0);
        }
        int temp = a[pos1];
        a[pos1] = a[pos2];
        a[pos2] = temp;
        temp = pos[num1];
        pos[num1] = pos[num2];
        pos[num2] = temp;
        // cout << "After swap" << endl;
        // cout << "arr: ";
        // for(int i = 1; i<=size; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // cout << "pos: ";
        // for(int i = 1; i<=size; i++){
        //     cout << pos[i] << " ";
        // }
        // cout << endl;

    }

    int get_res(){
        return res;
    }

};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    int a[n];
    read_array<int>(a, n);
    pair<int, int> swaps[m];
    for(int i = 0; i<m; i++){
        cin >> swaps[i].first >> swaps[i].second;
    }
    custom_array solver(a, n);
    for(int i = 0; i<m; i++){
        solver.swap(swaps[i].first, swaps[i].second);
        cout << solver.get_res() << endl;
    }

}