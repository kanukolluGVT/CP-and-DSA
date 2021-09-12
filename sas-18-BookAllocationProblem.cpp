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

bool solve(int *a,int n,int mid,int m){
    int sum=0;
    int stu=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid) return false;
        if(sum+a[i]>mid)
        {
            stu++;
            sum=a[i];
            if(sum>m) return false;
        }
        else{
            sum+=a[i];
        }
    }
    return true;
}

int findPages(int *a,int n,int m){
    int lb=0;
    int s=0;
    int ans=0;
    for(int i=0;i<n;i++) s+=a[i];
    int ub=s;
    while(lb<=ub){
        int mid=(lb+ub)/2;
        if(solve(a,n,mid,m)){
            ans=mid;
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
    return ans;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
