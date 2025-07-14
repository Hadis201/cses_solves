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
    int x = accumulate(a.begin()+1, a.end(), 0ll);
    int y = *max_element(a.begin(), a.end());
    cout << max(2*y, x);
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
*  Problem Name: Reading_Books
*  Author: Hadis
*  Created: 2025-07-11, Friday (21:41:43)
**/

