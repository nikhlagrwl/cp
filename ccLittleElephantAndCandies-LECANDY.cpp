#include <bits/stdc++.h>
using namespace std;

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
