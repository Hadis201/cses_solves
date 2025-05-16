#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n; cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    int ans = 0;
    int l=1, r=1;
    while(r<=n){
        mp[a[r]]++;
        while(mp[a[r]]>=2){
            mp[a[l]]--;
            if(mp[a[l]]==0)mp.erase(a[l]);
            l++;
        }
        ans = max(ans, (int)mp.size());
        r++;
     }   
    cout << max(ans, (int)mp.size()) << nl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
 
 
/**
*  Problem Name: Playlist
*  Author: Hadis
*  Created: 2025-05-16, Friday (23:14:38)
**/
