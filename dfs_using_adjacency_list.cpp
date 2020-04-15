// DFS of a graph/tree iteratively using adjacency list

void dfs(int starting_node,vector<vector<int>> &graph)
{
	vector<int> stack;
	vector<bool> vis(graph.size(),false);
	int temp;
	stack.push_back(starting_node);

	while(stack.size()>0)
	{
		temp = stack.back();
		vis[temp] = true;
		stack.pop_back();
		for(auto x: graph[temp])
		{
			if(vis[x] == false)
				stack.push_back(x);
		}
		cout<<temp<<" ";
	}
}