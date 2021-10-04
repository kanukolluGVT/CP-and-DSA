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

int countSubSetSum(int arr[],int fin)
{
    n=size(arr);
    w=fin;
    int t[n+1][w+1];
    memset(t,-1,sizeof(t));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(i==0)
            {
                t[i][j]==0;
            }
            if(j==0) t[i][j]==1;
            if(arr[i]<j)
            {
                t[i][j]=t[i-1][j]+t[i-1][j-arr[i]];
            }
            if(arr[i]>j) t[i][j]=t[i-1][j];
        }
    }
    return t[n][w];
}

int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int n,sum=0,diff;
    cin>>diff>>n;
    int arr[n];
    REP_(i,n) cin>>arr[i];
    REP_(i,n) sum+=arr[i];
    int fin=(sum+diff)/2;
    int ans=countSubSetSum(arr,fin);
    cout<<ans;



    



    
    return 0;
}


