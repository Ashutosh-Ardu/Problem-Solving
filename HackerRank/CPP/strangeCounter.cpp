/*
from the given t value
we subtract each element from the series:
3,6,12,24,.... (gp ,r = 2)
until t > value at ith index of the series
thn value at tht time unit will be:
ith index series val - remaining t + 1
*/

#include "iostream"
#include "climits"
typedef long long intl;
using namespace std;

void solve(intl t){
	intl key = 3;

	while(t > key){
		t -= key;
		key *= 2;
	}

	cout<<key - t + 1<<"\n";
}

int main(){
	intl t;
	cin>>t;

	solve(t);
}