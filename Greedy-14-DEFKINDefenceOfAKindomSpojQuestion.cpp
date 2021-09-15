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
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        vector<int> a;
        vector<int> b;
        a.pb(0);
        b.pb(0);
        REP_(i,n)
        {
            int x,y;
            cin>>x>>y;
            a.pb(x);
            b.pb(y);
        }
        a.pb(w+1);
        b.pb(h+1);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int mx=0,my=0;
        REP_(i,a.size()-1){
            mx=max(mx,a[i+1]-a[i]-1);
            my=max(my,b[i+1]-b[i]-1);
        }
    }
    cout<<mx*my<<endl;


    return 0;
}
