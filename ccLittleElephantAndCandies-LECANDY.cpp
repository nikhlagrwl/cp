#include <bits/stdc++.h>
using namespace std;
/////////////////// To make the code run faster by not syncing cin, cout anf ios to stdio ////////////////////
static int __ = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	return 0;
}();
//////////////////// -------------------------------------------------------------------- ////////////////////
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            int k; cin>>k;
            c-=k;
        }
        if(c<0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }    
    return 0;
}
