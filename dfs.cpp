void dfs(int v)
{
    vis[v]=1
    cout<<v<<"->";
    for(int i=0;i<ar[v].size(),i++)
    {
        int child=ar[v][i]
        if(vis[child]==0)
        dfs(child);
    }
}