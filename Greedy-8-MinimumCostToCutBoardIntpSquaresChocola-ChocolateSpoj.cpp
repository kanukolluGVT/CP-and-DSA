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
    cout<<"hello"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        m--;
        n--;
        int x[m],y[n];
        REP_(i,m) cin>>x[i];
        REP_(i,n) cin>>y[i];

        sort(x,x+m,greater<int>());
        sort(y,y+n,greater<int>());

        int horizontal_count=1;
        int vertical_count=1;

        int answer=0;
        int i=0;
        int j=0;
        while(i<m and j<n)
        {
            if(x[i]>y[j])
            {
                answer+=x[i]*vertical_count;
                horizontal_count++;
            }
            else{
                answer+=y[j]*horizontal_count;
                vertical_count++;
            }
            
        }
        while(i<m)
        {
            answer+=x[i]*vertical_count;
            i++;
        }
        while(j<n)
        {
            answer+=y[j]*horizontal_count;
            j++;
        }
        cout<<answer<<endl;

    }
    
    return 0;
}
