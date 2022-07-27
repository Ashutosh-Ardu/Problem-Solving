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

void solve(lt *ar,lt &n){
  // as ar[i] <= i hence if the max ar[i] valued
  // element will utilize max no of courses
  // of lower difficulty behind it as prequisites
  // hence n - max "ar[i]"
	sort(ar,ar+n);

	cout<<n - (ar[n-1])<<"\n";
}



int main(){
	lt t,n,key;
	cin>>t;

	while(t--){
		cin>>n;
		lt ar[n];

		for(lt i=0;i<n;i++)
			cin>>ar[i];
		
		solve(ar,n);
	}
}
