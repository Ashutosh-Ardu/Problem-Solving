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

void solve(string &ar,intl &n){
    intl count = 0;
    intl c1[26] = {0},c2[26] = {0};
    string left = "",right = "";

    if(n % 2 != 0){
        cout<<"-1\n";
        return;
    }

    for(intl i=0;i<n/2;i++)
        left += ar[i];

    for(intl i=0;i<n/2;i++)
        c1[left[i]-97]++;

    for(intl i=n/2;i<n;i++)
        right += ar[i];

    for(intl i=0;i<n/2;i++)
        c2[right[i]-97]++;

    for(intl i=0;i<26;i++){
        if(c1[i]  && c2[i])
            count+=min(c1[i],c2[i]);// repetition of the same character is also taken into consideration.
    }

    cout<<(n/2)-count<<"\n";
}



int main(){
    intl t,n;
    cin>>t;
    
    string ar;

    for(intl i=0;i<t;i++){
        cin>>ar;
        n = ar.length();
        solve(ar,n);
    }
}