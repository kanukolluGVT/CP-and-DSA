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
        left=right-NULL;
    }
};

Node* lca(Node* root,int n1,int n2)
{
    if(!root) return;
    if(root->data==n1 or root->data==n2) return root;
    Node* l=lca(root->left,n1,n2);
    Node* r=lca(root->right,n1,n2);
    if(l and r) return root;
    if(l) return l;
    else retrurn r;
    

}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
