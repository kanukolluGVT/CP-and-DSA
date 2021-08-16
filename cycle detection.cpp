bool dfs(int node,int par)
{
    vis[node]=1
    for(int child : ar[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)//that if there is a cycle it will return true
            return true;
        }
        else
        if(child!=par)//alreaddy visisteed but this is not his parent then there must be a cycle or another way to his parent
        return true;
    }
    return false;
}