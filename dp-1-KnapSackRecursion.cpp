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

//recursive code-->choice diagaram
//o/p max profit
//choice

/*

return type ,input 
base condition
choice diagram

*/

//base condition ,think of the smallest valid input
// in recursive function the nxt call will be or should be on smaller input

int knapSack(int wt[],int val[],int w,int n) 
{
    if(n==0 || w==0)
    {
        return 0; //base condition
    }
    //choice diagram
    if(wt[n-1]<=w)
    {
        return max(val[n-1]+knapSack(wt,val,w-w[n-1],n-1),knapSack(wt,val,w,n-1));
    }
    else if(wt[n-1]>w)
    {
        return knapSack(wt,val,w,n-1);
    }
}


int main ()
{

    dfile();
    //cout<<"hello"<<endl;



    return 0;
}
