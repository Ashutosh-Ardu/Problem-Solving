#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "vector"
#include "utility"
#include "cstring"
typedef long long lt;
using namespace std;

void solve(lt *ar,lt &key,lt &n){
	if(n == 1){
		cout<<"YES\n";
		return;
	}

	sort(ar,ar+n);

  // if the max and min element in the array is <= key then 
  // other element's sum is automatically <= key
	if(ar[0] + ar[n-1] <= key)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}



int main(){
	lt t,n,key;
	cin>>t;

	while(t--){
		cin>>n>>key;
		lt ar[n];

		for(lt i=0;i<n;i++)
			cin>>ar[i];
		
		solve(ar,key,n);
	}
}
