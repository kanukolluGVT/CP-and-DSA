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

struct Item
{
    /* data */
    int value;
    int weight;
};

double fractionalKnapsack(int w,Item arr[],int n)
{
    vector<pair<double,int>> v;
    REP_(i,n){
        double x=(arr[i].value*1.0)/(arr[i].weight*1.0);
        v.push_back({x,i});
    }
    sort(v.begin(),v.end(),greater<pair<double,int>>());
    int s=0;
    double ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(s+arr[v[i].second].weight<w)
        {
            ans+=arr[v[i].second].value;
            s+=arr[v[i].second].weight;
        }
        else{
            double x=(w-s)*1.0;
            ans+=(x*v[i].first);
            break;

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
