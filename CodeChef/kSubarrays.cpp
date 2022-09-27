// Question Link
// https://www.codechef.com/submit/KSUB?tab=statement
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    
    int g = 0; // cummulative gcd
    vector<int> ar;
    
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        g = __gcd(g,temp);
        ar.push_back(temp);
    }
    
    int cur = 0; // subarray's gcd
    int count = 0;
    
    for(int i=0;i<n;i++){
        cur = __gcd(cur,ar[i]); 
        if(cur == g){
            count++;
            cur = 0;
        }
    }
    
    if(count >= k)
        cout << "YES\n";
    else
        cout  << "NO\n";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    solve();
	}
	return 0;
}
