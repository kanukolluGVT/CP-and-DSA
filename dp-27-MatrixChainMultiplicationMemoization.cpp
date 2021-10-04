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

/*
ans=INT_MIN;
int solve(int arr[],int i,int j)
{
    if(i>=j) return 0;
    for(k=i;k<=j-1;k++)
    {
        tempans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
    }
    ans=min(tempans,ans);
    return ans;
}
*/

int static t[111][111];

int solve(int arr[],int i,int j)
{
    int ans=INT_MAX;
    if(t[i][j]!=1) return t[i][j];
    if(i>=j) return 0;
    for(k=i;k<=j-1;k++)
    {
        int tempans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
    }
    ans=min(tempans,ans);
    return t[i][j]=ans;
    

}






int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    memset(t,-1,sizeof(t));
    solve(arr,1,size-1);
   



    
    return 0;
}


