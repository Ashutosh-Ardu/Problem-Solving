#include "iostream"
#include "cmath"
#include "climits"
#include "algorithm"
#include "cstring"
typedef long long intl;
using namespace std;

void solve(string &ar,intl &key,intl &n){
	for(int i=0;i<n;i++){
		if(isalpha(ar[i])){
			if(islower(ar[i])){
				int k = (ar[i] + key) - 97; // scaling down 26 coded alphabets
					ar[i] = char(97 + (k % 26)); 
			}
			else if(isupper(ar[i])){
				int k = (ar[i] + key) - 65; // scaling down 26 coded alphabets
					ar[i] = char(65 + (k % 26)); 
			}
		}
	}
	cout<<ar<<"\n";
}


int main(){
	intl t,key;
	cin>>t;
	
	string ar;
	cin>>ar>>key;

	solve(ar,key,t);
}