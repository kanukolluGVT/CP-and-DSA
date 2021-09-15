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



int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n;
    int a[n];
    cin>>n;
    REP_(i,n) cin>>a[i];
    sort(a,a+n);
    int s=0;
    REP_(i,n) s+=a[i];
    int ans;
    int s2=0;
    int j=n-1;
    while(true)
    {
        s2+=a[j];
        s-=a[j];
        j--;
        ans++;
        if(s<s2)
        {
            break;
        }
    }
    cout<<ans;



    return 0;
}
