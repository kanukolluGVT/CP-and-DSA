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

//recursion->base case+recursive call
//dp->recursion+memoization
//top-down->only memoization table i.e., directly table no recursion or base case etc there is iteration in it
//topdown ,there is no recursive call hence no stackoverflow
//recurive function base case changes to topdown initialisation
//if n==0 or w==0 return 0
//turn this into iterative 
//for i=0 i<n i++
//for j=0 j<n j++
//if i==0 and j==0 
//t[i][j]=0
/*
if(wt[n-1]<=w)
{
    return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapSack(wt,val,w,n-1));
}
else if(wt[n-1]>w)
{
    return knapSack(wt,val,w,n-1);
}

if(wt[n-1]<w)
{
    t[n][w]=max(val[n-1]+t[n-1][w-wt[n-1]],t[n-1][w]);
}
if(wt[n-1]>w)
{
    t[n][w]=t[n-1][w];
}

*/
// for(int i=0;i<n;i++)
// {
//     for(int j=0;i<n;j++)
//     {
//         if(i==0 or j==0)
//         {
//             t[i][j]=0;
//         }
//         if(wt[n-1]<=j)
//         {
//             t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
//         }
//         else if(wt[n-1]>w)
//         {
//             t[i][j]=t[i-1][w];
//         }

//     }
// }
//return t[n][w];
int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
            }
            if(wt[n-1]<=j)
            {
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else if(wt[n-1]>w)
            {
                t[i][j]=t[i-1][w];
            }

    }
    retrurn t[n][w];
}


    



    return 0;
}
