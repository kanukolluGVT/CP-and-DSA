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
    struct Node* next;
};

void start(Node* head)
{
    Node* low=head;
    Node* high=head;

    while(low!==NULL and high!=NULL and high->next!=NULL)
    {
        low=low->next;
        high=high->next->next;
        if(low===high)
        {
            break;
        }
    }
    if(low!=high) return NULL;
    low=head;
    while(low!=head)
    {
        low=low->next;
        high=high->next;
    }
    return low;
    
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
