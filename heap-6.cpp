#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
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
    int n,k;
    cin>>n;
    //cin>>k;
    int ar[n];
    unordered_map<int,int> mp;
    priority_queue<pair<int,int>> maxh;
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++) mp[ar[i]]++;
    //for(auto i=mp.begin;i!=mp.end;i++))

    for(auto i:mp)
    {
        maxh.push(make_pair(i.second,i.first));
        //pq.push(make_pair(i.second,i.first));

        //p.push(i->second,i->first);
        
    }
    while(maxh.size()>0)
    {
        int freq=maxh.top().first;
        int ele=maxh.top().second;
        REP(i,freq)
        {
            cout<<ele<<endl;
        }
        maxh.pop();
    }




    
    return 0;
}
