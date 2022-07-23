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

void print5(intl n){
    for(intl i=1;i<=n;i++)
        cout<<"5";
}

void print3(intl n){
    for(intl i=1;i<=n;i++)
        cout<<"3";
}

void solve(intl &n){
    intl temp = n;
    
    
        while(temp % 3 != 0)
            temp -= 5;
    

    if(temp < 0)
        cout<<"-1\n";
    else{
        print5(temp);
        print3(n - temp);
        cout<<"\n";
    }
}



int main(){
    intl t,n;
    cin>>t;


    for(intl i=0;i<t;i++){
        cin>>n;
        solve(n);
    }
}