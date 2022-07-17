#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void solve(string &ar,intl *q,intl &len,intl &n){
	set<intl> val;
	intl c = 1,k;
	for(intl i=0;i<n;i++){
		if(i != n - 1 && ar[i + 1] == ar[i])
			c++;
		else
			c = 1;
		k = ar[i] - 96;
		val.insert(c*k);
	}

	for(intl i=0;i<len;i++){
		if(val.find(q[i]) != val.end())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}


int main(){
	
	 string ar;
	 cin>>ar;

	 intl t,n;
	cin>>t;

	 n = ar.length();

	 intl q[t];

	for(intl i=0;i<t;i++){
		cin>>q[i];
	}

	solve(ar,q,t,n);
}