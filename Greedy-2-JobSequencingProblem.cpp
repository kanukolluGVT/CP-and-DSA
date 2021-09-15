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

struct job
{
    /* data */
    int id;
    int dead;
    int profit;
};


static bool comp(job a,job b)
{
    return a.profit>b.profit;
}

//we can complete before deadline
//hence we will sort by profit(lets be greedy) 

vector<int> JobScheduling(job arr[],int n)
{
    sort(arr,arr+n,comp);
    for(int i-0;i<n;i++)
    {
        for(int j=min(n,arr[i].dead-1;j>=0;j--))
        {
            if(done[j]==false)
            {
                day+=1;
                profit+=arr[i].profit;
                done[j]=true;
                break;

            }
        }
    }
    return {day,profit}
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
