#include "bits/stdc++.h"
using namespace std;

/*
input : Mg(OH)2
output : O-2 Mg-1 H-2 (alphabetical order)
*/


void solve(string ar){
  int i = ar.length();
  map <string,int> out;
  bool flag = false;
  string w = "";
  int num = 1;

  while(i >= 0){
    if(isalpha(ar[i])){
      if(isupper(ar[i])){
        w += ar[i];
        reverse(w.begin(),w.end());
        if(out.find(w) == out.end())
          out.insert({w,num});
        else
          out[w] += num;
        if(flag == false)
          num = 1;
        w = "";
        i--;
      }
      else{
        w += ar[i];
        i--;
      }
    }
    else if(isdigit(ar[i])){
      num = (ar[i] - 48);
      i--;
    }
    else if(ar[i] == ')'){
      flag = true;
      i--;
    }
    else{
      flag = false;
      num = 1;
      i--;
    }
  }

  for(auto it=out.begin();it!=out.end();it++){
    cout<<(*it).first<<(*it).second;
  }
}

int main(){
  string a;
  cin>>a;

  solve(a);
}