/*
	understanding the problem
	* Testcase 1
	* Input:
			5 2
			4 3 2 5 1

			Intermediate:
			After first swap (of 5 and 4): 5 3 2 4 1
			After second swap  (of 3 and 4): 5 4 2 3 1

			Output:
			5 4 2 3 1
	* Testcase 2
	* 5 2
			3 4 2 5 1

			Intermediate:
			After first swap (of 5 and 3): 5 4 2 3 1
			After second swap  (of 2 and 3): 5 4 3 2 1

			Output:
			5 4 3 2 1
			* link : https://www.youtube.com/watch?v=uoHMhHU2YgM&t=2s
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

void print(vector<intl> ar){
	for(int i=0;i<ar.size();i++)
		cout<<ar[i]<<" ";
	cout<<"\n";
}

void solve(vector<intl> ar,intl key,intl n){
	intl l = 0;
	intl pos[n+1];
	
	for(int i=0;i<n;i++)
		pos[ar[i]] = i;
	
	intl i = 0;
	
	while(i < n && key > 0){
		// if the current element is the max element
		if(ar[i] == n-i){
			i++;
			continue;
		}
		// exchange the max element with the cur element
		ar[pos[n-i]] = ar[i];
		// update the pos of older cur element
		pos[ar[i]] = pos[n-i];
		// insert the max element
		ar[i] = n-i;
		// update the max element's position
		pos[n-i] = i;
		key--;
		i++;
	}
	print(ar);
}



int main(){
	intl t,n,a,b;
	cin>>t>>n;

	vector<intl> ar;
	
	for(intl i=0;i<t;i++){
		cin>>a;
		ar.push_back(a);
	}
	solve(ar,n,t);
}


