#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n; cin >> n;
    vector<int> a(n+1);
    map<int, int> mp;
    int ans = 0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(mp[a[i]-1]==0)ans++;
        mp[a[i]]=1;
    }
    cout << ans << nl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
// Collecting Numbers
