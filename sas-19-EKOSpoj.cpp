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

bool solve(int *a,int n,int m,int mid)
{
    int sum=0;
    REP_(i,n)
    {
        if(a[i]>mid) sum+=a[i]-mid;
    }
    if(sum>=m) return true;
    else return false;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n,m;
    cin>>n>>m;
    int a[n];
    REP_(i,n) cin>>a[i];
    int lb=0;
    int ans=0;
    int ub=*max_element(a,a+n);
    while(lb<ub)
    {
        int mid=(ub+lb)/2;
        if(solve(a,n,m,mid));
        {
            ans=mid;
            lb=mid+1;
        }

        else{
            ub=mid-1;
        }
    }
    cout<<ans;
    
    return 0;
}
