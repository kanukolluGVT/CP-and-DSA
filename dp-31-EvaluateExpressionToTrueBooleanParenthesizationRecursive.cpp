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


int solve(string s,int i,int j,int isTrue)
{
    int k,ans=0;
    if(i>j) return true;
    if(i==j)
    {
        if(isTrue==1)
        {
            return s[i]='T';
        }
        else return s[i]='F';
    }
    for(k=i+1;k<=j-1;k+=2)
    {
        int lt=solve(s,i,k-1,1);
        int lf=solve(s,i,k-1,0);
        int rt=solve(s,k+1,j,0);
        int rf=solve(s,k+1,j,0);
    }
    if(s[k]=='&')
    {
        if(isTrue==1)
        {
            ans=ans+lt*rt;
        }
        else{
            ans=ans+(lt*rf)+(lf*rt)+(lf*rf);
        }
    }
    if(s[k]=='|')
    {
        if(isTrue==1)
        {
            ans+=(lf*rt)+(lt*rf)+(lt*rt);
        }
        else{
            ans+=lf*rf;
        }
    }
    if(s[k]=='^')
    {
        if(isTrue==1)
        {
            ans+=(lt*rf)+(rt*lf);
        }
        else{
            ans+=(lt*rt)+(lf*rf);
        }
    }
    return ans;
    
}



int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    int isTrue;
    cin>>isTrue;
    cout<<solve(s,i,j,isTrue);
   



    
    return 0;
}




/*

#include<bits/stdc++.h>
using namespace std;

int solve(string s,int i,int j,int isTrue)
{
    int k, ans=0;
   if(i>j)
        return true;
    if (i == j) {
        if (isTrue == 1)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }

   for(k=i+1;k<=j-1;k+=2)
   {
       int lt=solve(s,i,k-1,1);
       int lf=solve(s,i,k-1,0);
       int rf=solve(s,k+1,j,0);
       int rt=solve(s,k+1,j,1);

       if(s[k]=='&')
       {
           if(isTrue==1)
            ans=ans+lt*rt;
           else
            ans=ans+(lf*rt)+(rf*lt)+(lf*rf);
       }
       else if(s[k]=='|')
       {
           if(isTrue==1)
            ans+=lt*rt+lf*rt+rf*lt;
           else
            ans+=lf*rf;
       }
       else if(s[k]=='^')
       {
            if(isTrue==1)
             ans+=lt*rf+rt*lf;
            else
                ans+=lt*rt+lf*rf;
       }
   }
   return ans;

}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"the string is:"<<s<<endl;
    int i=0,j=s.size()-1;
    int isTrue;
    cout<<"If we want true result put 1 else put 0:";
    cin>>isTrue;
    cout<<"The number of ways you get the ans in TRUE:"<<solve(s,i,j,isTrue);


}
*/