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
    Node* left;
    Node* right;
    Node(int data)
    {
        data=data;
        left=right=NULL;
    }
};

Node* lca(Node* root,int a,int b)
{
    if(!root) return NULL;
    if(root->data==a or root->data==b) return root;
    Node* l=lca(root->left,a,b);
    Node* r=lca(root->right,a,b);
    if(l and r) return root;
    if(l) return l;
    else return r;
}

int solve(Node* root,int val)
{
    if(!root) return 0;
    if(root->data==val) return 1;
    int a=solve(root->left,val);
    int b=solve(root->right,val);
    if(!a and !b ) return 0;
    else return a+b+1;
}

int findDist(Node* root,int a,int b)
{
    Node* LCA=lca(root,a,b);
    int x=solve(LCA,a);
    int y=solve(LCA,b);
    return x+y-2;
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
