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

void count_nodes(Node* root,int &n)
{
    if(!root) return;
    count_nodes(root->left,c);
    c++;
    count_nodes(root->right,c);
}

void func(Node* root,Node* &cur,Node* &prev,int &c,int k,int &f)
{
    if(!root) return;
    func(root->left,cur,prev,c,k,f);
    if(prev==NULL)
    {
        prev=root;
        c++;
    }
    else if(c==k)
    {
        c++;
        cur=root;
        f=1;
        return;
    }
    else if(f==0)
    {
        c++;
        prev=root;
    }
    func(root->right,cur,prev,c,k,f);
}

float findMedian(Node* root)
{
    int n=0;
    count_nodes(root,n);
    Node* cur=NULL;
    Node* pev=NULL;
    int c=1;
    int x=(n/2)+1;
    int f=0;
    func(root,cur,prev,c,x,f);
    if(n&1)
    {
        float ans=(cur->data)*1.0;
        return ans;
    }
    else{
        float ans=((cur->data+prev->data)*1.0)/(2*1.0);
        return ans;
    }


}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
