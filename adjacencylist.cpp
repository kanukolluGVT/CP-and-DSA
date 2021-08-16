no.of nodes=n 
no.of edges=m
vector<int> ar[n+1];
while(m--)
{
    cin>>a>>b;
    ar[a].push_back(b);
    ar[b].push_back(a);
}


