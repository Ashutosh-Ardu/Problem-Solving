#include "iostream"
#include "climits"
typedef long long intl;
using namespace std;

int main(){
	intl n,count = 0;
	cin>>n;

	intl ar[n];

	for(int i=0;i<n;i++)
		cin>>ar[i];

	for(int i=0;i<n-1;i++){
		if(ar[i] % 2 != 0){
			ar[i+1] += 1;
			count+=2;
		}
	}

	if(ar[n-1] % 2 != 0)
		cout<<"NO\n";
	else
		cout<<count<<"\n";
}