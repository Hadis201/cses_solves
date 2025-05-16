https://cses.fi/paste/27bfde4b1f43cc82c5118c/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n, x; cin >> n >> x;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)cin >> a[i];
    int l=1, r = 1, cursum=a[l], ans=0;
    while(r<=n){
        while(l<=r and cursum>x)cursum-=a[l], l++;
        if(cursum==x){
            ans++;
            cursum-=a[l];
            l++;
        }
        r++;
        if(r<=n)cursum+=a[r];
    }
    cout<<ans<<nl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
