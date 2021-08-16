#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_backb
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
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    int n,k;
    //vector<int> nums;
    //3,4,7,10,20

    //vector<int> ar;
    priority_queue<int> maxh;
    cin>>n;
    cin>>k;
    int ar[n];

    //ar[n]=[7,10,4,3,20,15];
    for(int i=0;i<n;i++) 
        cin>>ar[i];
    //cin>>ar[n];
    for(int i=0;i<=n;i++)
    {
        maxh.push(ar[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    cout<<maxh.top();
    return 0;
    



    
}
