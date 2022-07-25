// link : https://www.youtube.com/watch?v=jOxTTE3IkjE
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

void solve(intl n,intl m){
	if(m == 1 || n % 2 == 0)
		cout<<"2\n";
	else
		cout<<"1\n";
}



int main(){
	intl t,n,m;
	cin>>t;

	// solve2(t);

	for(int i=0;i<t;i++){
		cin>>n>>m;
		solve(n,m);
	}
	
}
