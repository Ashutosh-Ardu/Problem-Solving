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
	lt maxm = 0,minm = ar[0];

// finding minimum goal diff 
	for(lt i=0;i<n;i++){
		maxm = max(maxm,(ar[i] - minm));
		minm = min(minm,ar[i]);
	}

	if(maxm <= 0)
		cout<<"UNFIT\n";
	else
		cout<<maxm<<"\n";
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
