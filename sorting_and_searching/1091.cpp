//Concert Tickets

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(int tc) {
    int n, m; cin >> n >> m;
    multiset<int> a, b;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i=1; i<=m; i++){
        int x; cin >> x;
        auto it = a.upper_bound(x);
        if(it==a.begin() ){cout << -1 << nl; continue;}
        it--;
        if(*it<=x){cout << *it << nl; a.erase(it); continue;}
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;

    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
