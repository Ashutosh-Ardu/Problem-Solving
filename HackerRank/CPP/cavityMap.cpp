#include "iostream"
#include "climits"
typedef long long intl;
using namespace std;

void solve(string *ar,intl n){
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			if(ar[i][j] > ar[i][j-1] && ar[i][j] > ar[i-1][j] && ar[i][j] > ar[i+1][j] && ar[i][j] >ar[i][j+1])
				ar[i][j] = 'X';
		}
	}

	for(int i=0;i<n;i++){
		cout<<ar[i]<<"\n";
		// cout<<"\n";
	}
}

int main(){
	intl n;
	cin>>n;

	string ar[n];

	for(intl i=0;i<n;i++)
		cin>>ar[i];

	solve(ar,n);
}