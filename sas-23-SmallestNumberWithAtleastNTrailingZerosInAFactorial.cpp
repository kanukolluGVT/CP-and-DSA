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

bool check(int p,int n){
    int temp=p,count=0,f=5;
    while(f<=temp)
    {
        count+=temp/f;
        f=f*5;
    }
    return (count>=n);
}

int findNum(int n){
    if(n==1){
        return 5;
    }
    int low=0;
    int high=5*n;

    while(low<=high){
        int mid=(low+high)/2;

        if(check(mid,n)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}


int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
