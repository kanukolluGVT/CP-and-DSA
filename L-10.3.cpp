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
vector<int> ar[1000001];
int vis[10000001] , cc[1000001];
int curr_cc;

void dfs(int node)
{
    vis[node]=1;
    cc[node]=curr_cc;
    for(int child :ar[node])
    if(vis[child]==0)
    {
        dfs(child);
    }
}
int main()
{
    int t,n,k,a,b;
    string op;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        curr_cc=0;
        vector<pair<int,int>> edgeList;
        for(int =1; i<=n;i++) ar[i].clear() , vis[i]=0;

        for(int i=i;i<=k;i++) 
        {
            cin>>a>>op>>b;
            if(op== "=")
            ar[a].push_back(b) , ar[b].push_back(b);
            else
            edgeList.push_back({a,b});

        }
        for(int i=1;i<=n;i++)
        if(vis[i]==0)
        {
            curr_cc++;
        }






        bool flag=true;
        for(i=1;i<=edgeList.size();i++)
        {
            a=edgeList[i].first();
            b=edgeList[i].second();

            if(cc[a]==cc[b])
            flag=false;
            break;
        }
        if(flag)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;


    }
    
}