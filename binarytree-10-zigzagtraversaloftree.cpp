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
vector<int> ZigZagTraversal(Node* root)
{
    vector<int> ans;
    queue<Node*> q;
    if(!root) return ans;
    q.push(root)
    int f=1;
    while(!q.empty())
    {
        vector<int> temp;
        int sz=q.size();
        while(sz--)
        {
            Node* t=q.front();
            temp.push_back(t->data);
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);

        }
        if(f%2==0) reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++) ans.push_back(temp[i]);
        f!=f;

    }
    return ans;
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
