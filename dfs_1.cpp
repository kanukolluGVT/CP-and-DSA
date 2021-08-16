void dfs(int v)
{
    vis[v]=1
    cout<<v<<"->";
    for(int child:ar[v])
    {
        if(vis[child]==0)
        dfs(child)
    }
}