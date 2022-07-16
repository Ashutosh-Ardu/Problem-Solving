/*
	link :- 
	https://www.youtube.com/watch?v=wG_sFhuYcnA
*/
#include "iostream"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void print(intl *ar,intl n){
	for(intl i=0;i<n;i++)
		cout<<ar[i]<<" ";
	cout<<"\n";
}

int valid(string &ar,char &a,char &b,intl &n){
	string strip = "";
	intl k = 0;

	for(int i=0;i<n;i++){
		if(ar[i] == a || ar[i] == b){
			strip += ar[i];
			k++;
		}
		if(k > 1 && strip[k-1] == strip[k-2])
			return 0;
	}
	// cout<<strip<<"\n";
	return strip.length();
}

void solve(string &ar,intl &n){
	intl count[26] = {0};
	string chars = "";


	for(int i=0;i<n;i++)
		count[ar[i] - 97]++;
	// print(count,26);
	for(int i=0;i<26;i++)
		if(count[i] > 0)
			chars += char(i+97);

	// cout<<chars<<"\n";

	int len = chars.length();
	int out = 0;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			out = max(out,valid(ar,chars[i],chars[j],n));
		}
	}
	cout<<out<<"\n";
}


int main(){
	intl t;
	cin>>t;
	
	string ar;
	cin>>ar;
	// for(int i=0;i<t;i++)
	// 	cin>>ar[i];

	
	solve(ar,t);
	// print(ar,n);
}