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

string smallestNumber(int s,int d)
{
    if((9*d)<s) return "-1";
    string ans="";
    for(int i=d-1;i>=0;i--)
    {
        if(s>9)
        {
            ans="9"+ans;
            s-=9;
        }
        else{
            if(i==0)
            {
                ans=to_string(s)+ans;
            }
            else{
                ans=to_string(s-1)+ans;
                i--;
                while(i>0)
                {
                    ans="0"+ans;
                    i--;
                }
                ans="1"+ans;
                break;
            }

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
