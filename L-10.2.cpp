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
vector<int> ar[100001];
vector<int> primes;
int dist[100001],vis[100001];

bool isPrime()
{
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    return true;
}
bool isValid(int a,int b)
{
    int cnt=0;
    while(a>0)
    {
        if(a%10 != b%10) cnt++;
        a/=10 ,b/=10;

    }
    if(cnt==1) return true;
    else return false;

}
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dist[src]=0;
    vis[src]=1;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child : ar[curr])
        if(vis[child]==0)
        {
            vis[child]=1;
            dist[child]=dist[curr]+1;
            q.push(child);

        }
    }
}
void buildGraph()
{
    for(int i=1000;i<=9999;i++)
    {
        if(isPrime(i))
        prime.push_back(i);
        for(int i=0;i<=primes.size();i++)
        {
            for(j=i+1;j<=prime.size();j++)
            int a=prime[i];
            int b=prime[j];
            if(isValid(a,b))
            ar[a].push_back(b) , ar[b].push_back(a);

        }

    }
}

int main()
{
    int t,a,b;
    cin>>t;
    buildGraph();
    while(t--)
    {
        for(int i=1000;i<=9999;i++) dist[i]=-1 ,vis[i]=0;
        cin>>a>>b;

        bfs(a);
        if(dist[b] == -1)
        cout<<"Impossible"<<endl;
        else
        cout<<dist[b]<<endl;
        
    }
}