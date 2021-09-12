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

void solve(){
    int n;
    cin>>n;
    int a[n];
    REP_(i,n) cin>>a[i];
    int x,j;
        cin>>x>>k;
        int ans=-1;
        int i=0;
        while(i<n){
            if(a[i]==x){
                ans=i;
                break;
            }
            int y=max(1,abs(a[i]-x)/k);
            i=i+y;
        }
        cout<<ans;

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
