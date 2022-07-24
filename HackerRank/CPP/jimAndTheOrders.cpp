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

void print1(vector<vector<intl>> ar,intl n){
	for(int i=0;i<n;i++)
		cout<<ar[i][2]<<" ";
	cout<<"\n";
}

bool higher(vector<intl> a,vector<intl> b){
	if(a[0] + a[1] == b[0] + b[1])
		return a[0] > b[0];
	return a[0] + a[1] < b[0] + b[1];
}

void solve(vector<vector<intl>> ar,intl n){
	sort(ar.begin(),ar.end(),higher);
	print1(ar,n);
}



int main(){
	intl t,n,a,b;
	cin>>t;

	vector<vector<intl>> ar;
	
	for(intl i=0;i<t;i++){
		cin>>a>>b;
		vector<intl> temp;
		temp.push_back(a);
		temp.push_back(b);
		temp.push_back(i+1);
		ar.push_back(temp);
	}
	solve(ar,t);
}
