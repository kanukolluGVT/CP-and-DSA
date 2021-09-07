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
    Node*(int data)
    {
        data=data;
        left=right=NULL;
    }
};

unordered_map<string,int> m;
string solve(Node* root)
{
    if(!root) return "$";
    string s=" ";
    if(!root->right and !root->left){
        s=to_string(root->data);
        return s;

    }
    s=s+to_string(root->data);
    s=s+solve(root->data);
    s=s+solve(root->right);
    m[s]++;
    return s;



}

bool dupsub(Node* root)
{
    m.clear();
    solve(root);
    for(auto x:m)
    {
        if(x.second>=2) return true;
    }
    return false;

}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
