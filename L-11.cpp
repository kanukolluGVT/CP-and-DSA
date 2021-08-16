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
vector<int> ar[100];
int in[101], low[101],vis[101];
int timer;

void dfs(int node , int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child : ar[node])
    {
        if(child==par) continue;
        if(vis[child] ===1)
        {
            // edge node to child node is a back edge
            low[node]=min(low[node],in[child]);

        }
        else
        {
            // edge node to child is a forward edge
            dfs(child,node);
            if(low[child]>in[child])
            cout<<node<<"-"<<child<<" is a bridge \n";

            low[node]=min(low[node],low[child]);

        }

    }

}
int main()
{
    int n,m,x,y;
    cin>.n>>m;
    while(m--)
    {
        cin>>x>>y, ar[x].push_back(y) , ar[y].push_back;
        dfs(1,-1); // for parent we are passing -1 as root as it has no parent root

    }
}
