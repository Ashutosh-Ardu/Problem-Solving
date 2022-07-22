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

void solve(intl *ar,intl &n){
	intl sum = 0,left = 0;

	for(intl i=0;i<n;i++)
		sum += ar[i];

	for(intl i=0;i<n;i++){
		sum -= ar[i];

		if(sum == left){
			cout<<"YES\n";
			return;
		}
		left += ar[i];
	}
	cout<<"NO\n";
}

int main(){
	intl t,n;
	cin>>t;
	
	for(intl i=0;i<t;i++){
		cin>>n;
		intl ar[n];

		for(intl i=0;i<n;i++)
			cin>>ar[i];
		solve(ar,n);
	}
}