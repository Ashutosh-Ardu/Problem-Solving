// link : https://www.youtube.com/watch?v=1bO0ylzROOo&t=223s
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

void swap(intl &a,intl &b){
	intl t=a;a=b;b=t;
}

void print(intl *ar,intl &n){
	for(intl i=0;i<n;i++)
		cout<<ar[i]<<" ";
	cout<<"\n";
}

void print1(intl *ar,intl &n){
	for(intl i=0;i<n;i++)
		cout<<ar[i]<<" ";
	// cout<<"\n";
}

void solve(string &ar,intl &n){
	// finding the first delete worthy index
	intl i = 0,j = n-1;
	intl a = i,b = j;
	bool flag = false;

	if(n >= 3){
		while(i <= j){
			if(ar[i] != ar[j]){
				// j must be the problem
				// as assuming i to be the 
				// and continuing still caused
				// another mismatch
				if(flag){
					cout<<b<<"\n";
					return;
				}
				// assuming the i to the problem
				// for it to be a palindrome
				flag = true;
				a = i;
				b = j;
				i++;
			}
			else{
				i++;j--;
			}
		}

		// our assumption i was right
		// hence after removing it
		// the complete while loop got executed
		if(flag){
			cout<<a<<"\n";
		}
		// no problems found
		else
			cout<<"-1\n";
	}
}



int main(){
	intl t,n;
	cin>>t;
	
	string ar;

	for(intl i=0;i<t;i++){
		cin>>ar;
		n = ar.length();
		solve(ar,n);
	}

	// print(ar,n);
}