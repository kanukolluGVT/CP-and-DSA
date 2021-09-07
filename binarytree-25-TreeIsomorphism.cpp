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
    Node(int data)
    {
        data=data;
        left=right=NULL;
    }
};

bool isIsomorphic(Node* root1,Node* root2)
{
    if(!root1 and !root2) return true;
    if(!root1 or !root2) retur false;
    if(root1->data!=root2->data) return false;
    bool a = isIsomorphic(root1->left,root2->left) and isIsomorphic(root1->right,root2->right);
    bool b = isIsomorphic(root1->left,root2->right) and isIsomorphic(root1->right,root2->left);
    retrun a or b;



}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
