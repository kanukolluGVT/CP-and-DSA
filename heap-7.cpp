#include<bits/stdc++.h>
#define REP(i,n) for(int i = 1; i <= n; i++)
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
    priority_queue<pair<int,pair<int,int>>> maxh;
    int n,k;
    cin>>n>>k;
    int ar[n][2];
    for(int i=0;i<n;i++)
    {
         cin>>ar[i][1]>>ar[i][2];
    }
    // for(int i=0;i<n;i++)
    // {
    //      cout<<ar[i][1]<<" "<<ar[i][2]<<endl;
    // }
    

    //https://youtu.be/XC4EotTewro?list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&t=640

    for(int i=0;i<n;i++)
    {
        maxh.push({ar[i][1]*ar[i][1]+ar[i][2]*ar[i][2],{ar[i][1],ar[i][2]}});
        if(maxh.size()>2)
        {
            maxh.pop();

        }

    }
    while(maxh.size()>0)
    {
        pair<int,int> p=maxh.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        maxh.pop();
    }

    
    return 0;
}
