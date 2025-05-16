//	Maximum Subarray Sum
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n; cin >> n;
    vector<int> a(n+1);
    int cnt = 0, maxx = LONG_LONG_MIN;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(a[i]<0)cnt++;
        maxx = max(a[i], maxx);
    }
    if(cnt==n){cout << maxx << nl; return;}
    int cur = 0;
    for(int i=1; i<=n; i++){
        cur+=a[i];
        if(cur<0)cur=0;
        maxx=max(cur, maxx);
    }
    cout << maxx << nl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
