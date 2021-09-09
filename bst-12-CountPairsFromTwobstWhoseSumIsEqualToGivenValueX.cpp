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
};

int c;

bool fetch(Node* root2,int k)
{
    if(!root2) return false;
    if(k==root2->data) return true;
    bool x,y;
    x=false;
    y=false;
    if(k<root2->data) x=fetch(root2->left,k);
    else if(k>root2->data) y=fetch(root->right,k);
    return x or y;
}

void solve(Node* root1,Node* root2,int k)
{
    if(!root1 return;
    solve(root1->left,root2,k);
    if(fetch(root2,k-root1->data)) c++;
    solve(root1->right,root2,k);
}

int countPairs(Node* root1,Node* root2,int x)
{
    c=0;
    solve(root1,root2,x);
    return c;
}



int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
