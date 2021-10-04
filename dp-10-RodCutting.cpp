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

int rodcutting(int arr[],int price[])
{
    n=l=length(arr);
    int t[n+1][l+1];
    memset(t,-1,sizeof(t));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(i==0) t[i][j]=0;
            if(j==0) t[i][j]=1;
            if(l[i]<j) t[i][j]=max(t[i-1][j],price[i]+t[i][j-l[i]]);
            if(l[i]>j) t[i][j]=t[i-1][j];
        }
    }
    return t[n][l];
}


int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int n;
    cin>>n;
    int arr[n],price[n];
    REP_(i,n) cin>>a[i];
    REP_(i,n) cin>>price[i];
    ans=rodcutting(arr[n],price[n]);
    cout<<ans;
    



    
    return 0;
}


