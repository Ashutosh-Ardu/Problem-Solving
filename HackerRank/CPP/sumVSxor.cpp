// link : https://www.youtube.com/watch?v=xICixw7K-WY&t=1s
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

void solve(intl n){
	intl count = 0;
	intl ar[100];
	intl len = 0;

	while(n > 0){
		ar[len++] = n % 2;
		n /= 2;
	}

	for(int i=0;i<len;i++){
		if(ar[i] == 0)
			count++;
	}
	cout<<(intl)pow(2,count)<<"\n";
}



int main(){
	intl t,n;
	cin>>t;

	solve2(t);
}
