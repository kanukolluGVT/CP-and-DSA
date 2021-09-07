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
    Node(int data)
    {
        data=val;
        left=right=NULL;

    }
}

void LeftTree(Node* root,vector<int> &ans)
{
    if(!root) return;
    if(root->left){
        ans.push_back(root->data);
        LeftTree(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        LeftTree(root->right,ans);
    }
}

void RightTree(Node* root,vector<int> &ans)
{
    if!(!root) return;
    if(root->right)
    {
        RightTree(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left)
    {
        RightTree(root->left,ans);
        ans.push_back(root->data);
    }
}

void Leaf(Node* root,vector<int> &ans)
{
    if(!root) return;
    Leaf(root->left,ans);
    if(!root->left and !root->right) ans.push_back(root->data);
    Leaf(root->right,ans);

}

vector<int> PrintBoundary(Node* root)
{
    vector<int> ans;
    ans.push_back(root->data);
    LeftTree(root->data);
    Leaf(root,ans);
    RightTree(root->right,ans);
    return ans;
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
