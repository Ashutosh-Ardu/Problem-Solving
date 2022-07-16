#include "iostream"
#include "climits"
#include "algorithm"
typedef long long intl;
using namespace std;

void swap(string &a,string &b){
	string t=a;a=b;b=t;
}

void print(string *ar,intl n){
	for(intl i=0;i<n;i++)
		cout<<ar[i]<<"\n";
	// cout<<"\n";
}

void sort2(string *ar,intl n){
	intl min = 0;
	for(intl i=0;i<n-1;i++){
		min = i;
		for(intl j=i+1;j<n;j++){
			if(ar[min].length() == ar[j].length() && ar[min] > ar[j])
				min = j;
			else if(ar[min].length() > ar[j].length())
				min = j;
		}
		swap(ar[min],ar[i]);
	}
}

bool higher(string a,string b){
	intl x = a.length();
	intl y = b.length();

	if(x == y)
		return a < b;
	return x < y;
}

void solve(string ar,intl n){
	intl i = 0;
	while(i < n - 1){
		if(ar[i] == ar[i+1]){
			for(intl j=i+2;j<n;j++)
				ar[j-2] = ar[j];
			n -= 2;
			i = 0;
		}
		else
			i++;
	}

	if(n == 0)
		cout<<"Empty String\n";
	else{
		for(intl k=0;k<n;k++)
			cout<<ar[k];
		cout<<"\n";
	}
}


int main(){
	string t;
	cin>>t;

	solve(t,t.length());
}