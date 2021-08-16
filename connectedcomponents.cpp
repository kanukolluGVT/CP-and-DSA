int main()
{
    int cc_count=0;
    for(int i=1;i<=n;i++)
    {
        if (vis[i]==0)
        {
            /* code */
            dfs(i),cc_count++;

        }
        cout<<"# of cc="<<cc_count;
    }
}