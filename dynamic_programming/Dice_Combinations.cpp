#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
const int Mod = 1e9+7;
const int N = 1e6+10;
int ans[N];

int f(int cur, int n){
    
    if(cur<0)return 0;
    if(ans[cur])return ans[cur]%Mod;
    for(int i=6; i>=1; i--){
        ans[cur]=(ans[cur]+f(cur-i, n))%Mod;
    }
    return ans[cur]%Mod;
}

void solve(int tc) {
    int n; cin >> n;
    ans[0]=1;
    cout << f(n,n);

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
*  Problem Name: Dice_Combinations
*  Author: Hadis
*  Created: 2025-07-11, Friday (22:42:57)
**/

