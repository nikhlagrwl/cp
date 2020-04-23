// Dijkstra's Algorithm to find shortest path between a source and a destination vertex
// and also to print the path followed


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define w(x) int x; cin>>x; while(x--)
#define print(arr) for(auto x:arr) cout<<x<<" ";
#define vi vector<int>
#define pb push_back
#define MAX 1e18
#define vvpi vector<vector<pair<int,int>>>

void print_parent(vi &parent,int dst)
{
	vi ans;
	while(dst != -1)
	{
		ans.pb(dst);
		dst = parent[dst];
	}
	reverse(ans.begin(),ans.end());
	print(ans);
	
}

void apply_dijkstra(vvpi &gr, vi &dist, vi &parent,int src,int dst)
{
	set<pair<int,int>> weight;
	pair<int,int> pr;
	int temp,node,i,curr_nd,curr_dis;

	weight.insert({0,src});
	dist[src] = 0;
	parent[src] = -1;

	while(!weight.empty())
	{
		pr = *(weight.begin());
		temp = pr.first;
		node = pr.second;
		weight.erase(weight.begin());

		for(i=0;i<gr[node].size();i++)
		{
			curr_nd = gr[node][i].first;
			curr_dis = gr[node][i].second;

			if(dist[curr_nd]>dist[node]+curr_dis)
			{
				auto q = weight.find({dist[curr_nd],curr_nd});
				if(q != weight.end()){
					weight.erase(q);
				}
				dist[curr_nd] = dist[node]+curr_dis;
				parent[curr_nd] = node;
				weight.insert({dist[curr_nd],curr_nd});
			}
		}
	}
}

int32_t main()
{
	int n,m,i,x,y,node,len,temp;

	cin>>n>>m;
	vvpi gr(n+1);
	set<pair<int,int>> weight;
	pair<int,int> pr;
	vi dist(n+1,MAX),parent(n+1);
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>len;
		gr[x].pb({y,len});
		gr[y].pb({x,len});
	}

	apply_dijkstra(gr,dist,parent,1,n);

	if(dist[n] != MAX)
		print_parent(parent,n);
    else
    	cout<<"-1";

   return 0;
}
