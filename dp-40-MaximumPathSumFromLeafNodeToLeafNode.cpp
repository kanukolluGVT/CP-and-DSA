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

struct Node
{
    int data;
    Node* left;
    Node* right;

};

int solve(Node* root,int res)
{
    if(root==NULL) return 0;

    int l=root(root->left,res);
    int r=root(root->right,res);
    int temp=max(l,r)+root->data;
    if(root->left==NULL && root->right=NULL)
    {
        temp=max(temp,root->data);
    }
    int ans=max(temp,l+r+root->data);
    res=max(res,ans);
    return temp;
}


int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int res=INT_MIN;
    solve(root,res);
    cout<<res;
   



    
    return 0;
}


