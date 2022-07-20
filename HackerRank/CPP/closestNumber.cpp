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

void solve(intl *ar,intl &n){
    intl min = INT_MAX;
    vector<pair<intl,intl>> vect;
    sort(ar,ar+n);

    for(intl i=0;i<n-1;i++){
        if(ar[i+1] - ar[i] < min){
            min = ar[i+1] - ar[i];
            vect.clear();
            vect.push_back(make_pair(ar[i],ar[i+1]));
        }
        else if(ar[i+1] - ar[i] == min){
            vect.push_back(make_pair(ar[i],ar[i+1]));
        }
    }

    for(intl i=0;i<vect.size();i++)
        cout<<vect[i].first<<" "<<vect[i].second<<" ";


    // for( ;it1!= a.end();it1++){
    //     cout<<*(it1)<<" "<<*(it2)<<" ";
    //     it2++;
    // }
    cout<<"\n";
}



int main(){
    intl t,n;
    cin>>t;
    
    intl ar[t];

    for(intl i=0;i<t;i++){
        cin>>ar[i];
    }

    solve(ar,t);
}
