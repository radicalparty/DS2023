#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<ll, set<ll>> mp;
ll a[5] = {2, 3, 5, 7, 11};
ll p = 1e9 + 7, q;
void hash_code(ll mode){
    ll rt = 0, num;
    vector<ll> vec;
    cin >> num;
    while (num > 0){
        vec.emplace_back(num);
        cin >> num;
    }
    sort(begin(vec), end(vec), [](ll a, ll b){
        return a > b;
    });
    for (ll v: vec){
        rt = (rt * q + v) % p;
    }
    if (mode)   mp[rt].insert(num);
    else{
        if (mp.find(rt) != mp.end()){
            for (auto it = mp[rt].rbegin(); it != mp[rt].rend(); it++){
                cout << *it << " ";
            }
            cout << "\n";
        }
        else{
            cout << "None\n";
        }
    }
}
int main() {
    random_device rd; mt19937 gen(rd()); uniform_int_distribution<int> dis(0, 3);
    q = a[dis(gen)];
    string str; cin >> str;
    while (str != "$"){
        if (str == "R"){
            hash_code(1);
        }
        else{
            hash_code(0);
        }
        cin >> str;
    }
    return 0;
}
