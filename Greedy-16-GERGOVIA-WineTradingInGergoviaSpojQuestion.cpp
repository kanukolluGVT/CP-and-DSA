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



int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n;
    cin>>n;
    while(true)
    {
        int a[n];
        REP_(i,n) cin>>a[i];
        vector<pair<int,int>> buy;
        vector<pair<int,int>> sell;
        REP_(i,n)
        {
            if(a[i]>0) buy.pb({a[i],i});
            else sell.pb({a[i],i});
        }
        int ans=0;
        int i=0, j=0;
        while(i<buy.size() and j<sell.size())
        {
            int x=min(buy[i].first,-sell[i].first);
            buy[i].first-=x;
            sell[j].first+=x;
            int diff=abs(buy[i].first-sell[i].first);
            ans+=(x*diff);
            if(buy[i].first==0) i++;
            if(sell[i].first==0) j++;
        }
        cout<<ans;
        cin>>n;
        if(n==0) break;
    }


    return 0;
}
