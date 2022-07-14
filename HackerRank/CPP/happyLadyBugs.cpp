/*
Dont bother swapping characters until you find a valid string. Here is the trick:

Happy Conditions:

= There are at least one empty cell and there is no Letter with count 1

OR

= There is no empty cell but the given string is happy
*/

#include "iostream"
#include "climits"
typedef long long intl;
using namespace std;

void solve(string ar,intl n){
	int b = 0;
	int count[26] = {0};
	for(int i=0;i<n;i++){
		if((i == 0 && ar[i] != ar[i+1]) || (ar[i] != ar[i-1] && ar[i] != ar[i+1]) || (i == n-1 && ar[i] != ar[i-1])){
			goto label;
		}
	}
	cout<<"YES\n";
	return;

	label:

	if(ar[n-1] == '_')
		b = 1;

	for(int i=0;i<n;i++){
		if(ar[i] == '_')
			b = 1;
		else
			count[ar[i] - 65]++;
	}
	// cout<<b<<"\n";
	if(b){
		for(int i=0;i<26;i++){
			if(count[i] == 1){
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
}

int main(){
	intl t;
	cin>>t;



	for(intl i=0;i<t;i++){
		intl n;
		string word;
		cin>>n>>word;
		solve(word,n);
	}
}