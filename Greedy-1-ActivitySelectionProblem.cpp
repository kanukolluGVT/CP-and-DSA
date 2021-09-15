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

// either sort by start or end time of meeting 
// if we sort by start time then there may me long meetings which occupy initial poistions 
// bcoz we sorted by start time
//hence if we sort by end time small meets end fast and we can make more meetings
//Greedy approach

static bool comp(pait<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int maxMeeting(int start[],int end[],int n)
{
    vector<pair<int,int>> v(n);
    REP_(i,n) v[i]={start[i],end[i]};
    sort(v.begin(),v.end(),comp);
    int i=0;
    int j=1;
    int c=1;
    while(j<n)
    {
        if(v[i].second<v[j].second)
        {
            c++;
            i=j;
            j++;
        }
        else{
            j++;
        }
    }
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
