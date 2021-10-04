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

int t[11][11];

string lcsubsequence(string x,string y,int m,int n)
{
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }
            if(j==0) t[i][j]=1;
            if(x[i-1]==y[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<t[m-1][n-1]<<endl;
    int i=m;
    int j=n;
    string s="";
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            cout<<x[i-1]<<endl;
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else
        {
            if(t[i][j-1]>t[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(s.begin(),s.end());
    return s;

}


int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    memset(t,0,sizeof(t));
    string x,y;
    cin>>x;
    cin>>y;
    int m=x.length();
    int n=y.length();
    //int t[m+1][n+1];
    cout<<lcsubsequence(x,y,m,n);

    
    



    
    return 0;
}


