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
int ans,ans_;


struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;
};

void solve(Node* root,int k,int &idx)
{
    if(!root) return;
    solve(root->left,k,idx);
    if(k==idx){
        ans=root->data;
        idx++;
        return;
    }
    else idx++;
    solve(root->right,k,idx);

}

int kthSmallestElement(Node* root,int k)
{
    int idx=1;
    ans=-1;
    solve(root,k,idx);
    return ans;
}

void solve_(Node* root,int k,int &idx)
{
    if(!root) return;
    solve(root->right,k,idx);
    if(k==idx)
    {
        ans=root->data;
        idx++;
        return;
    }
    else idx++;
    solve(root->left,k,idx);
}

int kthLargestElement(Node* root,int k)
{
    int idx=1;
    ans_=-1;
    solve_(root,k,idx);
    return ans_;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    return 0;
}
