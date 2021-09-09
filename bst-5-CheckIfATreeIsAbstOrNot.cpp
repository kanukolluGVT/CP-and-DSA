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

void func(Node* root,Node* &prev,int &f)
{
    if(!root) return;
    func(root->left,prev,f);
    if(prev!=NULL and root->data<=prev->data)
    {
        f=0;
        return;
    }
    prev=root;
    func(root->right,prev,f);
}

bool isBST(Node* root)
{
    int f=1;
    Node* prev=NULL;
    func(root,prev,f);
    return f;

}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
