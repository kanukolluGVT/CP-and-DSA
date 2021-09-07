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

struct Node
{
    /* data */
    int data;
    Node* next;
};

string FirstNonReparting(string A)
{
    vector<int> vis(26,0);
    string ans=" ";
    vector<char> v;
    int n=A.length();
    for(int i=0;i<n;i++)
    {
        if(!vis[A[i]-'a'])
        {
            v.push_back(A[i]);

        }
        vis[A[i]-"a"]++;
        int f=0;
        int m=v.size();
        for(int j=0;j<m;j++)
        {
            if(vis[v[j]-"a"]==1)
            {
                ans.push_back(v[j]);
                f=1;
                break;

            }
        }
        if(f==0)
        {
            ans.push_back("0");
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
