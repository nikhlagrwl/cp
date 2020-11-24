// C++ function for dfs in trees recursively
// Time Complexity -> O(N); N -> no. of Nodes in a tree

void dfs_in_tree(vector<vector<int>> &tree, int node, int parent)
{
	for(auto x:graph[node])
	{
		if(x == parent)
			continue;
		dfs(graph, x, node);
	}
}