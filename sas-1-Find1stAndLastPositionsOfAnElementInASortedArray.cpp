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



int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int t;
    cin>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[i];
        for(int i=0;i<n;i++) cin>>a[i];
        int idx1= lower_bound(a,a+n,x)-a;
        int idx2=upper_bound(a,a,+n,x)-a-1;
        if(idx1==n) cout<<"-1\n";
        else cout<<idx1<<" "<<idx2<<endl;



    }

    
    return 0;
}


int solve1(int a[],int n,int x,int tog)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<x){
            low=mid+1;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            ans=mid;
            if(tog==-1) high=mid+tog;
            else low=mid+tog;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        REP_(i,n) cin>>a[i];
        int idx1=solve1(a,n,x,-1);
        int idx2=solve1(a,n,x,1);
        if(idx1==-1) cout<<"-1\n";
        else cout<<idx1<<" "<<idx2<<endl;
    }
    return 0;
}