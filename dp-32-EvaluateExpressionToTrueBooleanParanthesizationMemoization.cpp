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


int static dp[101][101][2];

int solve(string s,int i,int j,int isTrue)
{
    if(i>j) return true;
    if(dp[i][j][isTrue]!=-1) return dp[i][j][isTrue];
    if(i==j)
    {
        if(istrue==true)
        {
            return s[i]='T';
        }
        else{
            return s[i]='F';
        }
    }
    int ans=0;
    for(int k=i+1;k<j-1;k+=2)
    {
        if(dp[i][k-1][1]!=-1) return lt=dp[i][k-1][1];
        else 
        {
            int lt=solve(s,i,k-1,1);
            return dp[i][k-1][1]=lt;
        }
        if(dp[i][k-1][0]!=-1) return lf=dp[i][k-1][0];
        else{
            int lf=solve(s,i,k-1,0);
            return dp[i][k-1][0]=lf;
        }
        if(dp[k+1][j][1]!=-1) return rt=dp[k+1][j][1];
        else{
            int rt=solve(s,k+1,j,1);
            return dp[k+1][j][1]=rt;
        }
        if(dp[k+1][j][0]!=-1) return rf=dp[k+1][j][0];
        else{
            int rf=solve(s,K+1,j,0);
            return dp[k+1][j][0]=rf;
        }
        
        
    }

    if(s[k]=='|')
    {
        if(istrue==1)
        {
            ans+=(lt*rt)+(lt*rf)+(lf*rt);
        }
        else{
            ans+=lf*rf;
        }
    }
    if(s[k]=='&')
    {
        if(isTrue==1)
        {
            ans+=(lt*rt);
        }
        else{
            ans+=(lt*rf)+(lf*rt)+lf*rf;
        }
    }
    if(s[k]=='^')
    {
        if(isTrue==1)
        {
            ans+=(lt*rf)+(rt*lf);
        }
        else{
            ans+=(lt*rt)+(lf*rf);
        }
    }
    return ans;
}

int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
   



    
    return 0;
}


