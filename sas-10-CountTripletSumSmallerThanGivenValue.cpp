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

long long countTriplets(long long a[],int n,long long sum)
{
    int c=0;
    sort(a,a+n);
    for(int k=0;k<n-2;k++)
    {
        int i=k+1;
        int j=n-1;
        while(i<j)
        {
            int s=a[i]+a[j]+a[k];
            if(s<sum)
            {
                c+=(j-i)
                i++
            }
            else{
                j--;
            }
        }
    }
    return c;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
