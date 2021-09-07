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
        data=data;
        left=right=NULL;
    }
}

int idx=0;
unordered_map<int,int> m;
Node* solve(int pre[],int in[],int lb,int ub)
{
    if(lb>ub) return NULL;
    Node* res=new Node(pre[idx++]);
    if(lb==ub) return res;
    int mid=m[res->data];
    res->left=solve(pre,in,lb,mid-1);
    res->right=solve(pre,in,mid+1,ub);
    retrun res;
}

Node* buildTree(int in[],int pre[],int n)
{
    idx=0;
    m.clear()
    for(int i=0;i<n;i++) m[in[i]]=i;
    Node* root=solve(pre,in,0,n-1);
    return root;
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
