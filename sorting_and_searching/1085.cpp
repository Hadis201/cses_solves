#include <bits/stdc++.h>
using namespace std;
#define  pb          push_back
#define  int         long long int
#define  endl        '\n'
#define  vi          vector<int>
#define  mii         map<int,int>
#define  umi         unordered_map<int>
#define  pii         pair<int, int>
#define  vii         vector<pair<int,int>>
 
bool isValidDivision(const vector<int>& arr, int k, int mid){
	int subarrays = 1, currentSum = 0;
	for(int num: arr){
		if(currentSum+num > mid){
			subarrays++;
			currentSum = num;
			if(subarrays > k)
				return false;
		}
		else {
			currentSum += num;
		}
	}
	return true;
}
 
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n+1, 0);
    int l=0, r = 0;
    for (int i =1; i <= n; i++){
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }
    int ans = r;
    while(l <= r){
    	int mid = (l+r)/2;
    	if(isValidDivision(a, k, mid)){
    		ans = mid;
    		r = mid-1;
    	}
    	else{
    		l = mid+1;
    	}
    	
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
