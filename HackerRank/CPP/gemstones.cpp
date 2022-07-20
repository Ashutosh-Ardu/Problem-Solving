#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void print2(intl count[][26],intl &n){
    for(intl i=0;i<n;i++){
        for(intl k=0;k<26;k++)
            cout<<count[i][k]<<" ";
        cout<<"\n";
    }
}

void solve(string ar[],intl &n){
    intl count[n][26] = {0};
    intl c = 0;
    bool flag ;

    for(intl i=0;i<n;i++){
        for(intl j=0;j<ar[i].length();j++){
            count[i][ar[i][j] - 97] = 1;
        }
    }    

    // print2(count,n);

    for(intl i=0;i<26;i++){
        for(intl j=0;j<n;j++){
            if(count[j][i] == 1)
                flag = true;
            else{
                flag = false;
                break;
            }
        }
        if(flag)
            c++;
    }

    cout<<c<<"\n";
}



int main(){
    intl t,n;
    cin>>t;
    
    string ar[t];

    for(intl i=0;i<t;i++)
        cin>>ar[i];

    solve(ar,t);
}
