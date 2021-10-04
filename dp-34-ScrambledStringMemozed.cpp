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

unordered_map<string,bool> mp;

bool solve(string a,string b)
{
    if(a.compare(b)==0) return true;
    if(a.length()<=1) return false;
    string key=a;
    key.push_back(" ");
    key.append(b);
    if(mp.find(key)!=mp.end) return mp[key];
    int n=a.length();
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        //if(condition1|| condition2)
        //flag=true;
        //break
        //solve(a.substring(0,i),b.substring(i,n-1)==true);
        //&&
        //solve(a.substring(i,n-1),b.substring(0,i)==true);
        //||
        //solve(a.substring(0,i),b.substring(0,i)==true);
        //&&
        //solve(a.substring(i,n-1),b.substring(i,n-1)==true);

        if((solve(a.substring(i,n-1),b.substring(0,i)==true)&&solve(a.substring(0,i),b.substring(i,n-1)==true)||(solve(a.substring(0,i),b.substring(0,i)==true) && solve(a.substring(i,n-1),b.substring(i,n-1)==true)) )
        {
            flag=true;
            break;
        }
    }
    //return flag;
    return mp[key]=flag;

}



int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    string a,b;
    cin>>a>>b;
    if(a.length()!=b.length()) return false;
    if(a.length()==b.length() && a.length()==0) retrun true;
    cout<<solve(a,b);
   



    
    return 0;
}


