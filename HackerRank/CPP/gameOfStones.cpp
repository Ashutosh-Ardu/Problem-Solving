/*
input%7 defines the choice that first player can have after a series of steps. if value is 0 or 1

then player 1 loses as he has no choice, else if it is

     2 then he will give 2,
     3 then he will give 3,
     4 then he will give 3,
     5 then he will give 5,
     6 then he will give 5.
Clearly mod 7 is between 0-7, mod 7 is taken because max is 5 and min is 2, so at the climax of game atmost 7 cards are left
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

void solve(intl n){
	if(n % 7 == 0 || n % 7 == 1)
		cout<<"Second\n";
	else
		cout<<"First\n";
}



int main(){
	intl t,n;
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>n;
		solve(n);
	}
}

