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
#define w(x); int x; cin>>x;while(x--)
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
    w(T)
    {
        int n,c;
        cin>>n,c;
        int a[n];
        REP_(i,n) cin>>a[i];
        sort(a,a+n);
        int lb=1;
        int up=1e9;
        int ans=0;
        while(lb<up)
        {
            int mid=(lb+up)/2;
            int cow=1;
            int prev=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]-prev>=mid)
                {
                    cow++;
                    prev=a[i];
                    if(c==cow) break;
                }
            }
            if(cow==c)
            {
                ans=mid;
                lb=mid+1;
            }
            else{
                up=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

