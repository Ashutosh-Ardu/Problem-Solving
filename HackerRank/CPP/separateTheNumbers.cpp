/*
building up a test sequence string for each 
possible starting number and then
comparing to the original.
*/

#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

string stringParse(string &ar,intl &index){
	string out = "";

	for(intl i=0;i<index;i++)
		out += ar[i];
	return out;
}

void solve(string &ar,intl &n){
	intl first = -1,x;
	string temp;

	for(intl i=1;i<=n/2;i++){
		temp = stringParse(ar,i);
		// cout<<temp<<"\n";
		first = stoll(temp); // stoll for string -> long long
		x = first;

		while(temp.length() < n)
			temp += to_string(++x);

		// cout<<temp<<"<\n";

		if(temp == ar){
			cout<<"YES "<<first<<"\n";
			return;
		}
	}

	cout<<"NO\n";
}


int main(){
	intl t,n;
	cin>>t;


	string ar;

	for(intl i=0;i<t;i++){
		cin>>ar;
		n = ar.length();
		// cout<<ar<<" "<<n<<"\n";
		solve(ar,n);
	}

}