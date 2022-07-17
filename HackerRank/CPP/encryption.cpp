#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void solve(string &ar,intl &n){
	// cout<<n<<"\n";
	intl b = ceil(sqrt(n));
	// cout<<a<<" "<<b<<"\n";
	string word[b];

	for(intl i=0;i<b;i++)
			word[i] = "";

	intl index = 0;

	for(intl i=0;i<n;i++){
		word[index] += ar[i];
		// cout<<ar[i]<<"<\n";

		if(word[index].length() == b && i != n-1)
			index++;// i != n - 1 so that it doesnt move to a empty string 
	}	// as in the for loop we are looping it j <= index

	// for(intl i=0;i<=index;i++){
	// 	cout<<word[i]<<"\n";
	// 	cout<<word[i].length()<<"\n";
	// }

	for(intl i=0;i<b;i++){
		for(intl j=0;j<=index;j++){
			if(i < word[j].length())
				cout<<word[j][i];
		}
		cout<<" ";
	}
	
	cout<<"\n";
}	



int main(){
	intl t,n;
	string ar;

	cin>>ar;
	t = ar.length();
	// cout<<t<<"\n";
	solve(ar,t);
	// print(ar,n);
}