v#include<bits/stdc++.h>
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




int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    sort(a,a+n);
    int pre[n+1];
    pre[0]=0;

    for(inti=0;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
        while(q--)
        {
            int x;
            cin>>x;

            int idx=upper_bound(a,a,+n,x)-a;
            cout<<idx<<" "<>pre[idx]<<endl;
        }
    }
    
    
    return 0;
}
