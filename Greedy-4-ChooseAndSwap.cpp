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

string chooseandSwap(string a)
{
    set<char> s;
    REP_(i,a.length()){
        s.insert(a[i]);
    }
    REP_(i,a.length()){
        s.erase(a[i]);
        if(s.empty()) break;
        char ch= *s.begin(); //bcoz smallest element resides at the start of the set
        if(ch<a[i])
        {
            int ch2=a[i];
            REP_(i,a.length())
            {
                if(a[j]==ch) a[j]=ch2;
                else if(a[j]==ch2) a[j]=ch;
            }
            break;
        }

    }
    return a;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
