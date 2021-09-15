#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define REP_(i,n) for (int i=0;i<=n;i++)
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
#define w(x) int x;cin>>x; while(x--)
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;

void dfile()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
}

bool comp(vector<int> a,vector<int> b)
{
    if(a[1]==b[1])
    {
        if(a[2]==b[2])
        {
            return a[0]<b[0];
        }
        return a[2]<b[2];
    }
    return a[1]<b[1];
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<3;j++)
        {
            int x;
            cin>>x;
            v[i].pb(x);
        }
    }
    vector<int> ans;
    sort(v.begin(),v.end(),comp);
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
    pq.push({v[0][2],v[0][1],v[0][0]});
    int i=1;
    int current_time=0;
    while(!pq.empty())
    {
        int burst_time=pq.top()[0];
        int id=pq.top()[2];
        pq.pop();
        ans.push_back(id);
        current_time+=burst_time;

        while(true)
        {
            if(i<n and v[i][1]<=current_time)
            {
                pq.push({ v[i][2],v[i][1],v[i][0]});
                i++;
            }
            else{
                break;
            }
        }

    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}
