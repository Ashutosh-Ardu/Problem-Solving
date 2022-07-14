/*
	Problem :- Explaination Here is the gist: Compute the difference between a
	and b, start a while loop at lowest possible answer; a * n-1. Then add
	difference to this value & string. Then iterate until value = maxium
	output of b * n-1.

	Link :-
	https://www.youtube.com/watch?v=hrixY0RJnHo
*/

#include "iostream"
#include "climits"
typedef long long intl;
using namespace std;

void solve(intl A,intl B,intl n){
    if(A != B){
        intl a,b;
        a = min(A,B);
        b = max(A,B);
        for(int i=a*(n-1);i<=b*(n-1);i+=(b-a))
            cout<<i<<" ";
        cout<<"\n";
    }
    else
        cout<<A*(n-1)<<"\n";
}

int main(){
    intl t;
    cin>>t;



    for(intl i=0;i<t;i++){
        intl n,a,b;
        cin>>n>>a>>b;
        solve(a,b,n);
    }
}