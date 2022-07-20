// link : https://www.youtube.com/watch?v=5Mx_MhtiIGc
#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void solve(intl &n){
    intl out[2000] = {0};
    intl len = 0,carry = 0,k;
    out[len++] = 1;

    for(intl i=2;i<=n;i++){
        for(intl j=0;j<len;j++){
            k = out[j] * i + carry;
            out[j] = k % 10;
            carry = k / 10;
        }

        while(carry){
            out[len++] = carry % 10;
            carry /= 10;
        }
    }

    for(intl i=len-1;i>=0;i--)
        cout<<out[i];
    cout<<"\n";
}


int main(){
    intl t,n;
    cin>>t;

    solve(t);
}
