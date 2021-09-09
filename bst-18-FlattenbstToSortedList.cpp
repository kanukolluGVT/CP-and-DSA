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

void inOrder(Node* curr,Node* &prev)
{
    if(curr==NULL)
    {
        return;
    }
    inOreder(curr->left,prev);
    prev->left=NULL;
    prev->right=curr;
    prev=curr;
    inOrder(curr->right,prev);
}

Node* flatten(Node* parent)
{
    Node* dummy=new Node(-1);
    Node* prev=dummy;
    inorder(parent,prev);

    prev->left=NULL;
    prev->right=NULL;
    Node* ret=dummy->right;
    return ret;

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
