#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n; cin >> n;
    multiset<pair<pair<int, int>, int>> ms;
    map<int, int> ans;
    for(int i=1; i<=n; i++){
        int x, y; cin >> x >> y;
        ms.insert({{x,y}, i});
    }
    int k=0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(auto& i: ms){
        int x = i.first.first;
        if(pq.size()==0){
            pq.push({i.first.second, ++k});
            ans[i.second]=k;
        }
        else {
            pair<int, int> p = pq.top();
            if(p.first<x){
                ans[i.second]=p.second;
                pq.push({i.first.second, p.second});
                pq.pop();
            }
            else {
                pq.push({i.first.second, ++k});
                ans[i.second]=k;
            }
        }
    }
    cout << k << nl;
    for(int i=1; i<=n; i++)cout << ans[i] << " ";
    

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
*  Problem Name: Room_Allocation
*  Author: Hadis
*  Created: 2025-05-26, Monday (01:43:57)
**/
