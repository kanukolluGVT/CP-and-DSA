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

bool comp(vector<int> a,vector<int> b)
{
    return a[1]<b[1];
}

int jobScheduling(vector<int> &startTime,vector<int> &endTime,vector<int> &profit)
{
    int n=startTime.size();
    vector<vector<int>> v(n);
    REP_(i,n){
        int x=startTime[i];
        int y=endTime[i];
        int w=profit[i];
        v[i]={x,y,w};
    }
    sort(v.begin,v.end,comp);
    int dp[n];
    dp[0]=v[0][2];
    for(int i=1;i<n;i++){
        int inc=v[i][2];
        int last=-1;
        int low=0;
        int high=i-1;
        while(low<hight){
            int mid=(low+high)/2;
            if(v[mid]<v[i][0]){
                last=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(last!=-1) inc+=dp[last];
        int exc=dp[i-1];
        dp[i]=max(inc,exc);
    }
    return dp[n-1];

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
