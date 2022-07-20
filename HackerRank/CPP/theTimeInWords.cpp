#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void printTime(int n){
    if(n <= 1)
        cout<<"one";
    else if(n == 2)
        cout<<"two";
    else if(n == 3)
        cout<<"three";
    else if(n == 4)
        cout<<"four";
    else if(n == 5)
        cout<<"five";
    else if(n == 6)
        cout<<"six";
    else if(n == 7)
        cout<<"seven";
    else if(n == 8)
        cout<<"eight";
    else if(n == 9)
        cout<<"nine";
    else if(n == 10)
        cout<<"ten";
    else if(n == 11)
        cout<<"eleven";
    else if(n == 12)
        cout<<"twelve";
    else if(n == 13)
        cout<<"thirteen";
    else if(n == 14)
        cout<<"fourteen";
    else if(n == 15)
        cout<<"quarter";
    else if(n == 16)
        cout<<"sixteen";
    else if(n == 17)
        cout<<"seventeen";
    else if(n == 18)
        cout<<"eighteen";
    else if(n == 19)
        cout<<"nineteen";
    else if(n == 20)
        cout<<"twenty";
    else if(n == 30)
        cout<<"half";
    else{
        printTime(20);
        cout<<" ";
        printTime(n % 10);
    }
}

void solve(intl &t,intl &n){
    string a,b;

    if(n == 0){
        printTime(t);
        cout<<" o' clock";
    }
    else if(n <= 30){
        if(n == 1)
            a = " minute ";
        else if(n == 15 || n == 30)
            a = " ";
        else
            a = " minutes ";
        printTime(n);
        cout<<a<<"past ";
        printTime(t);
    }
    else{
        n = 60 - n;
        if(n == 1)
            a = " minute ";
        else if(n == 15 || n == 30)
            a = " ";
        else
            a = " minutes ";
        printTime(n);
        cout<<a<<"to ";
        printTime((t+1)%13);
    }
}    



int main(){
    intl t,n;
    cin>>t>>n;
    // cout<<t<<"\n";
    solve(t,n);
    // print(ar,n);
}
