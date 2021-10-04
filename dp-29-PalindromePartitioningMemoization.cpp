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
int static t[11][11];

bool ispalindrome(string s,int i,int j)
{
    if(i==j) return true;
    if(i>j) return true;
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}

int solve(string s,int i,int j)
{
    int ans=INT_MAX;
    if(i>=j) return 0;
    if(t[i][j]!=1) return t[i][j];
    if(ispalindrome(s,i,j)==true) return 0;
    int tempans;
    for(int k=i;k<j-1;k++)
    {
        tempans = solve(s,i,k)+solve(s,k+1,j)+1;
        ans=min(tempans,ans);
    }
    t[i][j]=ans;
    return ans;


}



int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    memset(t,-1,sizeof(t));
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    cout<<solve(s,i,j);
   



    
    return 0;
}


