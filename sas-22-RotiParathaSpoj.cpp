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

int solve(int *a,int n,int par,int mid){
    int time=0;
    int paratha=0;
    REP_(i,n){
        time=a[i];
        int j=2;
        while(time<=mid){
            paratha++;
            time=time+  (a[i]*j);
            j++;
        }
        if(paratha>=par) return 1;
    }
    return 0;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;

    w(t){
        int par;
        cin>>par;
        int n;
        cin>>n;
        int a[n];
        REP_(i,n) cin>>a[i];
        int lb=0;
        int ub=1e8;
        int ans=0;
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(solve(a,n,par,mid)){
                ans=mid;
                ub=mid-1;
            }
            else{
                lb=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
