//Ferris Wheel
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n, x; cin >> n >> x;
    vector<int> a(n+1), done(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a.begin()+1, a.end());
    int l=1, r=n, ans=0;
    while(l<r){
        if(done[l]){l++;continue;}
        while(l<r){
            if(a[l]+a[r]<=x){
                ans++;
                done[l]=1, done[r]=1;
                r--;
                break;
            }
            r--;
        }
        l++;
    }
    for(auto& i: done)if(!done[i])ans++;
    cout << ans-1 << nl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
