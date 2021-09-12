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



int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    while(true){
        int n;
        cin>>n;
        if(n==0) break;
        else{
            int a[i];
            REP_(i,n) cin>>a[i];
            int m;
            int b[m];
            REP_(i,m) cin>>b[i];
            int s1=0,s2=0;
            int i=0,j=0;
            int ma=0;
            while(i<n and j<m){
                if(a[i]<b[j])
                {
                    s1+=a[i++];
                }
                else if(b[j]<a[i]){
                    s2+=b[i++];

                }
                else{
                    ma+=max(s1,s2)+a[i];
                    s1=s2=0;
                    i++;
                    j++;
                }
            }
            while(i<n)
            {
                s1+=a[i++];
            }
            while(j<m)
            {
                s2+=b[j++];
            }
            ma+=max(s1,s2);
            cout<<ma<<endl;


        }
    }
    
    return 0;
}



