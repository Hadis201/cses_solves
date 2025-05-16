#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(int tc) {
    int n, m, k; cin >> n >> m >> k;
    multiset<int> a, b;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i=1; i<=m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    int ans=0;
    for(auto x: a){
        auto it = b.lower_bound(x-k);
        if(it==b.end())continue;
 
        if(*it<=x+k)ans++, b.erase(it);
    }
    cout << ans;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
//	Apartments
