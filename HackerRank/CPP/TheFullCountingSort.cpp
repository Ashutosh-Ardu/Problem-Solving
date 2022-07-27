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

// the int value can be used as an index to store our variable
// instead for sorting insert the elements into the index

void solve(string *ar,intl &n){
	for(int i=0;i<n/2;i++){
		int k;
		cin>>k;
		string temp;
		cin>>temp;

		ar[k] += "- ";
	}

	for(int i=n/2;i<n;i++){
		int k;
		cin>>k;

		string temp;
		cin>>temp;

		ar[k] += temp + " ";
	}

	for(int i=0;i<n;i++)
		cout<<ar[i];
	cout<<"\n";
}



int main(){
	intl t,n;
	cin>>t;

	string ar[t+1];
	
	solve(ar,t);
}
