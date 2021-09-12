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


void solve(int *a,int st,int end,vector<int> *v1)
{
    int s=0;
    int n=end-st+1;
    for(int i=0;i<(1<<n);i++)
    {
        s=0;
        int j=st;
        int x=i;
        while(x)
        {
            int l=x&1;
            if(l) s+=a[j];
            j++;
            x=x>>1;
        }
        v1.push_back(s);
    }
}



int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    REP_(i,n) cin>>a[i];
    vector<int> v1,v2;
    solve(a,0,(n/2)-1,v1);
    solve(a,(n/2),n-1,v2);
    sort(v2.begin(),v2.end());
    int count=0;
    for(int i=0;i<v1.size();i++)
    {
        int low=lower_bound(v2.begin(),v2.end(),a-v1[i])-v2.begin();
        int high=upper_bound(v2.begin(),v2.end(),b-v1[i])-v2.begin();
        count+=(high-low);
    }
    cout<<count;

    
    return 0;
}
