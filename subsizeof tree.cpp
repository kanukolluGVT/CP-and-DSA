int dfs(int node)
{
    vis[node]=1;
    int curr_size=1;

    for(int child: adj[node])
    if(vis[child]==0)
    {
        curr_size+=dfs(child);

    }
    sub_size[node]=curr_size;
    return curr_size;
}