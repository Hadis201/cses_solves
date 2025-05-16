#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
 
void solve(int tc) {
    int n; cin >> n;
    int sum = 0;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin()+1, a.end());
    int x = a[n/2], y = a[n/2+1];
    int ans1=0, ans2=0;
    for(int i=1; i<=n; i++){
        ans1+=abs(x-a[i]);
        ans2+=abs(y-a[i]);
    }
    cout << min(ans1, ans2);
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
    
    int t = 1;      
    // cin >> t;
 
    for(int tc=1; tc<=t; tc++){
        solve(tc);
    }
}
