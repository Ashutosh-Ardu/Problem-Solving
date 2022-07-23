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

void solve(vector<intl> &ar,vector<intl> &ar2,intl &n){
	intl count1[1001] = {0},count2[1001] = {0};
	intl c = 0;

	for(intl i=0;i<n;i++){
		count1[ar[i]]++;
		count2[ar2[i]]++;
	}

	for(intl i=1;i<1001;i++){
		if(count1[i] && count2[i]){
			c += min(count1[i],count2[i]);
		}
	}
	if(c < n)
		cout<<c+1<<"\n";
	else
		cout<<c-1<<"\n";// here the solving b is also taken into account
}



int main(){
	intl t,n;
	cin>>t;


	vector<intl> ar,ar2;
	for(intl i=0;i<t;i++){
		cin>>n;
		ar.push_back(n);
	}

	for(intl i=0;i<t;i++){
		cin>>n;
		ar2.push_back(n);
	}

	solve(ar,ar2,t);
}