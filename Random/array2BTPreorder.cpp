#include "bits/stdc++.h"
using namespace std;

/*

input:
     1
   2   3
  4 n n n
output:
  4 2 1 3 (preorder)

actual input:
1 2 3 4 n n n (string line)

output:
4 2 1 3(preorder)
3 1 2 4(reverse preorder)
*/

void preorder(int *ar,int cur,int n,vector<int> &out){
  if(cur < n){
    if((int) ar[cur] != 30){
      preorder(ar,cur*2+1,n,out);
      cout<<ar[cur]<<" ";
      out.push_back(ar[cur]);
      preorder(ar,cur*2+2,n,out);
    }
  }
}

void solve(string ar){
  int n = ar.length();
  vector<int> out; 
  int num[n],len = 0;

  for(int i=0;i<n;i++){
    if(ar[i] == ' ')
      continue;
    else{
      num[len++] = ar[i] - 48;
    }
  }

  preorder(num,0,len,out);
  cout<<"\n";
  reverse(out.begin(),out.end());

  for(int i=0;i<out.size();i++)
    cout<<out[i]<<" ";
  cout<<"\n";
}

int main(){
  string line;
  getline(cin,line);
  solve(line);
}