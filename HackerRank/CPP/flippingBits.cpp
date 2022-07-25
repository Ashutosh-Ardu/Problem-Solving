// link : https://www.geeksforgeeks.org/program-decimal-binary-conversion/
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

void solve(intl n){
	intl bits[33] = {0};
	intl i = 0;
	string final = "";
	
	while(n > 0){
		bits[i++] = n % 2;
		n = n / 2;
	}
	
	for(intl j = 31;j>=0;j--){
		if(bits[j] == 1)
			final += '0';
		else 
			final += '1';
	}
		// cout<<final<<"\n";
		cout<<stoll(final,0,2)<<"\n";
}



int main(){
	intl t,n;
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>n;
		solve(n);
	}
	
}
