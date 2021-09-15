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
    int a[n];
    REP_(i,n) cin>>a[i];
    int zero_count=0;
    int negative_count=0;
    int max_negative=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) zero_count++;
    }
    REP_(i,n) if(a[i]<0) negative_count++ max_negative=max(max_negative,a[i]);
    REP_(i,n) prod=prod*a[i];

    if(zero_count==n)
    {
        cout<<"0";
        return 0;
    }
    else if(negative_count==1 and zero_count+negative_count==n)

    {
        cout<<"0";
        return 0;
    }
    else if(negative_count&1)
    {
        prod=prod/max_negative;

    }
    cout<<prod;

    return 0;
}
