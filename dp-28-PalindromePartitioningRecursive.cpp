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

bool isPalindrome(string s,int i,int j)
{
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

int ans=INT_MIN;
int solve(string s,int i,int j)
{
    if(i>=j) return 0;
    if(isPalindrome(s,i,j)==true) return 0;
    for(k=i;k<=j-1;k++)
    {
        int tempans=solve(s,i,k)+solve(s,k+1;j)+1;
        ans=min(tempans,ans);
    }
    
    return ans;
}


int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
   



    
    return 0;
}


