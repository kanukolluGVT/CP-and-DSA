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

//for drawing the topdown table or matrix observe the recursion for variables which are changing
//and for the variables which are not changing
//the variables which are changing are the row and column of thar dp table


int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int t[n+1][w+1];
    memset(t,-1,sizeof(t));
    int knapSack(int w[],int val[],int w,int n)
    {
        if(n==0||w==0)
        {
            return 0;
        }
        if(t[n][w]!=-1) return t[n][w];
        if(w[n-1]<=w) return t[n][w]=[max(knapSack(w,val,w-w[n-1],n-1),knapSack(w,val,w,n-1));
        if(w[n-1]>w) return t[n][w]=knapSack(w,val,w,n-1);

    }


    return 0;
}
