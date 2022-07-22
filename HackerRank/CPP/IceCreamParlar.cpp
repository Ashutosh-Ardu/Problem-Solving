#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "vector"
#include "utility"
#include "cstring"
typedef long long intl;
using namespace std;

intl search(intl *ar,intl index,intl val,intl &n){
	for(intl i=index+1;i<n;i++){
		if(ar[i] == val)
			return i;
	}
	return 0;
}

void solve(intl *ar,intl &t,intl &n){
	intl k,v;
	
	for(intl i=0;i<n-1;i++){
		if(ar[i] > t)
			continue;
		else{
			v = t - ar[i];
			// as x + y = t
			// for every x in ar
			// if there y i.e. t - x
			// then this is a valid pair
			k = search(ar,i,v,n);
			if(k){
				cout<<i+1<<" "<<k+1;
			}
		}
	}
	cout<<"\n";
}



int main(){
	intl t,n,key;
	cin>>t;

	for(intl i=0;i<t;i++){
		cin>>key>>n;
		intl ar[n];
		for(intl j=0;j<n;j++)
			cin>>ar[j];
		solve(ar,key,n);
	}
}