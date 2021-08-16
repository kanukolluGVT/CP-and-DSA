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
vector<int> ar[10001];
int vis[10001], dist[10001];
void BFS(int src) //src means source
{
    queue<int> q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child : ar[curr])
        if(vis[child]==0)
        {
            q.push(child);
            dist[child]=dist[curr]+1;
            vis[child]=1;

        }


    }

}

int main()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++) ar[i].clear() , vis[i]=0;
        while(m--) ar[a].push_back(b) , ar[b].push_back(a);
        BFS(1);
        cout<<dist[n]<<endl;

    }

}