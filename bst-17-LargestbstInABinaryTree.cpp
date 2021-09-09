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
};

vector<int> solve(Node* root){
    if(!root) return {1,0,INT_MAX,INT_MIN};
    if(!root->left and !root->right) return {1,1,root->data,root->data};
    vector<int> l=solve(root->left);
    vector<int> r=solve(root->right);

    if(l[0] and r[0])
    {
        if(root->data>l[3] and root->data<r[2]){
            int x=l[2];
            int y=r[3];
            if(x==INT_MAX) X=root->data;
            if(y==INT_MIN) y=root->data;
            return {1,l[1],+r[1]+1,x,y};

        }
    }
    return {0,max(l[1],r[1]),0,0};
}

int largestBst(Node* root)
{
    vector<int> ans=solve(root);
    return ans[1];
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
