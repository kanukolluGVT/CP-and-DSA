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
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int s1[n1],s2[n2],s3[n3];
    REP_(i,n1) cin>>s1[i];
    REP_(i,n2) cin>>s2[i];
    REP_(i,n3) cin>>s3[i];

    int sum1=0,sum2=0,sum3=0;
    REP_(i,n1) sum1+=s1[i];
    REP_(i,n2) sum2+=s2[i];
    REP_(i,n3) sum3+=s3[i];
    int top1=0,top2=0,top3=0;
    int ans=0;
    while(true)
    {
        if(top1==n2 or top2==n2 or top3==n3){
            ans=-;
            break;
        }
        if(sum1==sum2 and sum2==sum3)
        {
            ans=sum1;
            break;
        }
        if(sum1>=sum2 and sum1>=sum3)
        {
            sum1-=s1[top1++];
        }
        else if(sum2>=sum1 and sum2>=sum3)
        {
            sum2-=s2[top2++];
        }
        else if(sum3>=sum1 && sum3>=sum2)
        {
            sum3-=s3[top3++];
        }

    }
    cout<<ans;



    return 0;
}
