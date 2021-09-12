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

int t;
cin>>t;
while(t--)
{
    int n,q;
    cin>>n,q;
    vector<pair<int,int> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    int idx=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[idx].second>=v[i].first)
        {
            v[idx].second=max(v[idx].second,v[i].second);
        }
        else{
            idx++;
            v[idx]=v[i];
        }
    }
    while (q--)
    {
        /* code */
        int k;
        cin>>k;
        int ans=-1;
        for(int i=0;i<=idx;i++)
        {
            if((v[i].second-v[i].first+1))
            {
                ans=v[i].first+k-1;
                break;
            }
            else{
                k=k-(v[i].second-v[i].first+1);

            }
        }
        cout<<ans<<endl;
    }
    
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
