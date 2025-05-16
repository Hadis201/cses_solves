/*"Perfection Is The Enemy Of Perfectly Adequate." --JMM */
 
#include <bits/stdc++.h>
using namespace std;
#define  pb          push_back
#define  ff          first
#define  ss          second
#define  PI          acos(-1.0)
#define  LCM(a,b)    a*b/__gcd(a,b)
#define  GCD(a,b)    __gcd(a,b)
#define  int         long long int
#define  endl        '\n'
#define  eps         1e-6
#define  vi          vector<int>
#define  mii         map<int,int>
#define  umi         unordered_map<int>
#define  pii         pair<int, int>
#define  vvi         vector <vector<int>>
 
void solve(){
    int n, k;
    cin >> n >> k;
    vi a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = 1e18;
    int ans;
    while(lo <= hi){
    	int mid = (lo+hi)/2;
    	int cnt = 0, breaks = 0;
    	for(int i = 1; i <= n; i++){
    		cnt += mid/a[i];
    		if(cnt>=k){
    			// cout << cnt << " " << ans << endl;
    			hi = mid-1;
    			ans = hi+1;
    			breaks = 1;
    			break;
    		}
    	}
    	if(!breaks)lo = mid+1;
 
 
    } 
    cout << ans;
 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t = 1; 
    // cin >> t;
    
    while(t--)solve();
    return 0;    
}

//machine factory
