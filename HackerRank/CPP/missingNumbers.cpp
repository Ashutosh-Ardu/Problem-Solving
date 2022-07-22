// link : https://www.youtube.com/watch?v=1g3WmjMG2OM
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

void solve(intl *ar,intl *ar2,intl &n,intl &n2){
	vector<intl> out;
	intl count[10001] = {0};

	for(intl i=0;i<n2;i++)
		count[ar2[i]]++;

	for(intl i=0;i<n;i++)
		count[ar[i]]--;

	for(intl i=0;i<10001;i++){
		if(count[i] > 0)
			out.push_back(i);
	}

	print1(out);
}



int main(){
	intl t,n;
	cin>>t;
	intl ar[t];

	for(intl i=0;i<t;i++){
		cin>>ar[i];
	}

	cin>>n;
	intl ar2[n];

	for(intl i=0;i<n;i++){
		cin>>ar2[i];
	}

	solve(ar,ar2,t,n);
	// sort(ar,ar+t);
	// sort(ar2,ar2+n);

	// print(ar,t);
	// print(ar2,n);
}