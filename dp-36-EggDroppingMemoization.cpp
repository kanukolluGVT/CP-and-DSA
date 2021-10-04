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

int t[INT_MAX][INT_MAX];

int solve(int e,int f)
{
    if(f==0||f==1) return f;
    if(e==1) return f;
    if(t[e][f]!=-1) return t[e][f];
    int min_=INT_MAX;
    for(int k=1;k<=f;k++)
    {
        int temp=1+max(solve(e-1,k-1),solve(e,f-k);
        min_=min(min_,temp);
    }
    return t[e][f]=min_;
}



int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    memset(t,-1,sizeof(t));

   



    
    return 0;
}


