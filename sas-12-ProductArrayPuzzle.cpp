
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


vector<long long int> productExceptSelf(vector<long long int> &nums,int n)
{
    vector<long long int> l(n),r(n);
    l[0]=1;
    r[n-1]=1;
    REP(i,n)
    {
        l[i]=l[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        r[i]=r[i+1]*nums[i+1];
    }
    REP_(i,n)
    {
        nums[i]=l[i]*r[i];
    }
    return nums;
}


int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
