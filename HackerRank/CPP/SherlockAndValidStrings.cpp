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

void solve(string &ar){
	intl n = ar.length();
	intl count[26] = {0};
	intl comp = 0;
	bool flag = true;

	for(int i=0;i<n;i++)
		count[ar[i] - 97]++;
	
	for(int i=0;i<26;i++){
		if(count[i] > 0){
			if(comp == 0)
				comp = count[i];
			else if(flag == true && (count[i]-1 == comp || count[i] - 1 == 0))
				flag = false;
			else if(count[i] != comp){
				cout<<"NO\n";
				return;
			}
		}
	}

	cout<<"YES\n";
}

int main(){
	string ar;
	cin>>ar;

	solve(ar);
}
