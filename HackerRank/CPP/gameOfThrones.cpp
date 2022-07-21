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

/*
3 cases :
-> all alphabets in the string are equal
	* then obviously its a palindrome no need to check its length
-> it has odd length
	* then we can afford to have one and only one alphabet to have odd freq
-> it has even length
	* no alphabet can have an odd freq
*/

void solve(string &ar,intl &n){
	intl count[26] = {0};
	intl o = 0;

	for(intl i=0;i<n;i++)
		count[ar[i] - 97]++;

	if(count[ar[0] - 97] == n){
		cout<<"YES\n";
		return;
	}

	if(n % 2 != 0){
		for(intl i=0;i<26;i++){
			if(count[i] && count[i] % 2 != 0){
				o++;
			}
		}

		if(o == 1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else{
		for(intl i=0;i<26;i++){
			if(count[i] && count[i] % 2 != 0){
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
	}
}



int main(){
	intl t,n;
	// cin>>t;
	
	string ar;

	// for(intl i=0;i<t;i++){
	// 	cin>>ar;n
	// 	n = ar.length();
	// 	solve(ar,n);
	// }

	cin>>ar;
	n = ar.length();
	solve(ar,n);

	// print(ar,n);
}