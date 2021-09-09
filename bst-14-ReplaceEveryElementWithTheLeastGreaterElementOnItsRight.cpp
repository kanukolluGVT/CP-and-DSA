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

Node* insert(Node* node,int data,Node* &succ)
{
    if(node==NULL)
    {
        return node=newNode(data);
    }
    if(data<node->data)
    {
        succ=node;
        node->left=insert(node->left,data,succ);
    }
    else if(data>node->data)
    {
        node->right=insert(node->right,data,succ);
    }
    return node;
}


void replace(int arr[],int n)
{
    Node* root=NULL;
    for(int i=n-1;i>0;i--)
    {
        Node* succ=NULL;
        root=insert(root,arr[i],succ);
        if(succ)
        {
            arr[i]=succ->data;
        }
        else{
            arr[i]=-1;
        }
        if(succ)
        {
            arr[i]=succ->data;
        }
        else{
            arr[i]=-1;
        }

    }
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
