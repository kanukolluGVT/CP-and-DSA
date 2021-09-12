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

int majorityElement(int a[],int size)
{
    int val=(size/2);
    map<int,int> m;
    REP_(i,size)
    {
        m[a[i]]++;
    }
    for(auto x: m){
        if(x.second)>val return x.first; 
    }

    return -1;
}

int majEle(int a[],int size)
{
    int ma=a[0];
    int count=1;
    REP_(i,size)
    {
        if(ma==a[i])
        {
            count++;
        }
        else count--;
        if(count==0)
        {
            ma=a[i];
            count=1;
        }
    }
    int c=0;
    REP_(i,size)
    {
        if(a[i]==ma) count++;
    }
    if(count>size/2) return ma;
    else return -1;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}



