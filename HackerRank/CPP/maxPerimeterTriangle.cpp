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


// check the required condition from the question
// question link : https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem
void solve(vector<intl> &ar,intl &n){
	sort(ar.begin(), ar.end());

	intl i = n - 3;

	while(i >= 0 && (ar[i] + ar[i+1] <= ar[i+2]))
		i--;

	if(i >= 0)
		cout<<ar[i]<<" "<<ar[i+1]<<" "<<ar[i+2];
	else
		cout<<"-1\n";
}



int main(){
	intl t,n;
	cin>>t;


	vector<intl> ar;
	for(intl i=0;i<t;i++){
		cin>>n;
		ar.push_back(n);
	}
	solve(ar,t);
}