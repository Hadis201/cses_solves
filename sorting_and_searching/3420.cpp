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
    set<int> st;
    int l=1, r=1, ans =0;
    while(r<=n){
        while(st.count(a[r]))st.erase(a[l]),l++;
        st.insert(a[r]);
        ans+=r-l+1;
        r++;
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
 
 
/**
*  Problem Name: Distinct_Values_Subarrays
*  Author: Hadis
*  Created: 2025-05-16, Friday (23:54:52)
**/
