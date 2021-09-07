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

void func(Node* root,vector<int>& path,int k)
{
    if(!root) return;
    path.push_back(root->data);
    func(root->left,path,k);
    func(root->right,path,k);

    int f=0;
    for(int i=path.size()-1;j>=0;j--)
    {
        f+=path[j];
        if(f==k)
        {
            for(int m=j;m<path.size();m++)
            {
                cout<<path[m]<<" ";
            }
            cout<<endl;
        }
    }
    path.pop_back();

}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    vector<int> path;
    func(root,path,k);
    return 0;
}
