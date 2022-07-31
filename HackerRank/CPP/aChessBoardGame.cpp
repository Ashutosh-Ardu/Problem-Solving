// link : https://www.youtube.com/watch?v=Fyol4uw5qhs
#include "iostream"
#include "set"
#include "cmath"
#include "climits"
#include "algorithm"
#include "vector"
#include "utility"
#include "map"
#include "cstring"
typedef long long lt;
using namespace std;

map<pair<int,int>,bool> dp;

bool compute_state(int x,int y){
	if(dp.count({x,y}))
		return dp[{x,y}];
	
	bool cur_state = false;

	// if the move made by the current player leads to a losing position
	// meaning the current state is the winning state
	if(x - 2 >= 0 && y + 1 < 15 && compute_state(x-2,y+1) == false)
		cur_state = true;
	if(x - 2 >= 0 && y - 1 >= 0 && compute_state(x-2,y-1) == false)
		cur_state = true;
	if(x + 1 < 15 && y - 2 >= 0 && compute_state(x+1,y-2) == false)
		cur_state = true;
	if(x - 1 >= 0 && y - 2 >= 0 && compute_state(x-1,y-2) == false)
		cur_state = true;
	
	return dp[{x,y}] = cur_state;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;

		cout<<(compute_state(a-1,b-1) ? "First" : "Second" )<< endl;
	}
}
