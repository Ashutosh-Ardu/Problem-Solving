/*
 * explanation
 * We can sort array A ascending and sort array B descending, and then because they are sorted we know that we are matching the highest possible from B with the lowest possible from A each time and if 1 of those fails then we know it is not possible. The reason we know this is true is because they are inversely sorted, so we have already made the optimal decision at each stage in terms of the amount of absolute difference we have 'wasted/extra' thus leaving us with the tightest bounding number to k for each index. Because it is the tightest bound number, there is no other permutation that will pass if 1 comparison fails. 
 */
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

void printv(vector<intl> ar){
	for(int i=0;i<ar.size();i++)
		cout<<ar[i]<<" ";
	cout<<"\n";
}	
	

void solve(vector<intl> ar,vector<intl> ar2,intl key,intl n){
	sort(ar.begin(),ar.end());
	sort(ar2.begin(),ar2.end(),greater<intl>());
	
	//printv(ar);
	//printv(ar2);
	
	for(int i=0;i<n;i++){
		if(ar[i] + ar2[i] < key){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}



int main(){
	intl t,n,a,b;
	cin>>t;

	while(t--){
		cin>>n>>b;
		vector<intl> ar;
		vector<intl> ar2;
		
		for(intl i=0;i<n;i++){
			cin>>a;
			ar.push_back(a);
		}
		
		for(intl i=0;i<n;i++){
			cin>>a;
			ar2.push_back(a);
		}
		solve(ar,ar2,b,n);
	}
}
