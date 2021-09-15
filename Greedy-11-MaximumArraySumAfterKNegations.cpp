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

long long int maximizeSum(long long int a[],int n,int k)
{
    sort(a,a+n);
    long long int sum=0;
    REP_(i,n)
    {
        if(a[i]<0 and k>0)
        {
            a[i]=-a[i];
            k--;
        }
    }
    REP_(i,n)
    {
        sum+=a[i];
    }
    int x=*min_element(a,a,+n);
    if(k&1) sum-=2*x;

    return sum;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    return 0;
}
