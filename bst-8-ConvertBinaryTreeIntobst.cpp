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
    int data;
    Node* left;
    Node* right;
}

void inorder_tree(Node* root,vector<int> &v)
{
    if(!root) return;
    inorder_tree(root->left,v);
    v.push_back(root->data);
    inorder_tree(root->right,v);
}

void inorder_bst(Node* root,vector<int> v,int i){
    if(!root) return;
    inorder_bst(root->left,v,i);
    root->data=v[i];
    inorder_bst(root->right,v,i);
}

Node* binaryTreeToBST(Node* root)
{
    vector<int> v;
    inorder_tree(root,v);
    sort(v.begin(),v.end());
    int i=0;
    inorder_bst(root,v,i);
    return root;

}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
