bool dfs(int v,int c)
//here c is either 0 or 1
{
    vis[c]=1;
    col[v]=c;
    for(int child : ar[v])
    {
        if(vis[child]==0)
        {
            if(dfs(child,c^1)==false)
            return false;
        }
        else
        if(col[v]==col[child])
        return false;

    }
    return true;
}