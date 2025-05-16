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
    sort(a.begin()+1, a.end());
    int k=0;
    for(int i=1; i<=n; i++){
        if(a[i]>k+1)break;
        k+=a[i];
        // cout << k << nl;
    }
    cout << k+1;
 
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
*  Problem Name: Missing_Coin_Sum
*  Author: Hadis
*  Created: 2025-05-16, Friday (23:54:52)
**/
 
