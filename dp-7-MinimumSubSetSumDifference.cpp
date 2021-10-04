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

int MinSubSetSum(vector<bool> v)
{
    int min=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        mn=min(mn,range-2*v[i]);
    }
    return mn;
}



vector<bool> subsetsum(int arr[],int range)
{
    int n=sizeof(arr);
    int w=range;
    int t[n+1][w+1];
    memset(t,-1,size(t));
    vector<bool> v;
    
    

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        {
            if(i==0)
            {
                t[i][j]=false;
            }
            if(j==0)
            {
                t[i][j]=true;
            }
            if(arr[i]<j)
            {
                t[i][j]=t[i-1][j]||t[i-1][j-arr[i]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    for(j=0;j<w+1;j++)
    {
        v.push_back(t[n+1][j]);
    }
    return v;
}



int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) sum+=arr[i];
    int range=sum;
    vector<bool> v;
    v=subsetsum(arr[n]);
    min=MinSubSetSum(v);
    return min;   
    return 0;
}


