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

lt findMax(lt *ar,lt &n){
	lt ret = 0;

	for(lt i=1;i<n;i++){
		if(ar[i] > ar[ret])
			ret = i;
	}
	return ret;
}

void solve(lt *ar,lt &n){
	lt sum = 0,left = 0;

	for(lt i=0;i<n;i++)
		sum += ar[i];
	
  // max possible value
	lt minm = sum;
	
  // loop ends at n-1 cause i dont want to make 
  // minm as 0 which occurs at the last pair 
  // sumof(0,n-1) , 0
	for(lt i=0;i<n-1;i++){
		left += ar[i];
		sum -= ar[i];
		minm = min(minm,max(left,sum));
	}
	cout<<minm<<"\n";
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
