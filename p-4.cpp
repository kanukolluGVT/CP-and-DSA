//bug mate problem
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>6
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
vi ar[20001];
int vis[20001] ,col[20001];


bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int child : ar[node])
    {
        if(vis[child]=-0)
        {
            bool res=dfs(child,^1);
            if(res=false)
            return false;


        }
        if(col[node]=col[child])
        retun false;
    }
    return  true;
}

int main()
{
    int t,n,m,a,b;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++) ar[i].clear() ,vis[i]=0;

        for(int i=1;i<=m;i++)
        cin>>a>>b ,ar[a].pb(b) ,ar[b].pb(b) ;
        bool flag=true;
        for(int i=1;i<=n;i++)
        if(vis[i]==0)
        {
            bool res=dfs(i,0);
            if(res==false)
            flag=false;

        }
        cout<<"scenario #"<<tc<<":"<<endl;
        if(flag=false)
        cout<<"suspecious bug found!"<<endl;
        else
        cout<<"no suspecious bug found!"<<endl;
        



    }
    return 0;
}