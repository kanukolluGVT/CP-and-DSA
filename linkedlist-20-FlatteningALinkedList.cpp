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
    Node* bottom;
    Node* next; 
};

Node* merge(Node* a,Node* b)
{
    if(a==NULL) return b;
    if(b==NULL) return a;
    Node* result;
    if(a->data<b->data){
        result=a;
        result->bottom=merge(a->bottom,b);
    }
    else{
        result=b;
        result->bottom=merge(a,b->bottom);

    }
    result->next=NULL;
    return result;

}

Node* flatten(Node* root)
{
    if(root==NULL or root->next==NULL)
    {
        return root;
    }
    return merge(root,flatten(root->next));
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
