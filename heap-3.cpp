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
//6 5 3 2 8 10 9
int main ()
{

    dfile();
    int n,k;
    cin>>n>>k;
    int ar[n];
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        p.push(ar[i]);
        if(p.size()>k)
        {
            ans.push_back(p.top());
            p.pop();

        }


    }
    
    while(p.size())
    {
        ans.push_back(p.top());
        p.pop();
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;


    return 0;
}
