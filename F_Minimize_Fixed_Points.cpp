#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(int tc) {
    int n; cin >> n;
    vector<vector<int>> v(n+1);
    vector<bool> isP(n+1,0);

    for(int i=2; i<=n; i++){
        if(!isP[i]){
            for(int j=i; j<=n; j+=i){
                v[i].push_back(j);
                isP[j]=1;
            }
            isP[i]=0;
        }
    }
    // for(auto i: v)for(auto j: i)cout << j << " ";
    vector<bool> vis(n+1,0), visi(n+10,0);
    vector<int> ans(n+20000,0);
    ans[1]=1;
    for(int i=n; i>=2; i--){
        if(!isP[i]){
            int k = i, l = i;
            int p=v[i].size()-1;
            for(int j=p; j>=0; j--){
                if(vis[v[i][j]])continue;
                int breakss=0;
                while(visi[k] and k<=n){
                    k+=l;
                    if(k>n)breakss=1;
                    // continue;
                }
                if(breakss)break;
                vis[v[i][j]]=1;
                visi[k]=1;
                ans[k]=v[i][j];
                k+=l;
            }
            // break;
        }
    }
    for(int i=2; i<=n; i++){
        if(ans[i]==i and isP[i]){
            if(2*i<=n){
                swap(ans[i], ans[i+i]);
            }
            else {
                for(int j=n; j>=2; j--){
                    if(i%j==0 and j!=i){
                        swap(ans[j], ans[i]);
                        break;
                    }   

                }

            }
        }
    }
    for(int i=1; i<=n; i++)cout << ans[i] << " ";
    cout << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    cin >> t;

    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}


/**
*  Problem Name: F_Minimize_Fixed_Points
*  Author: Hadis
*  Created: 2025-07-01, Tuesday (21:52:51)
**/

