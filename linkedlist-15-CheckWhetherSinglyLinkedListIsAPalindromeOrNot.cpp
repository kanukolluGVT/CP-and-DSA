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
    Node* next;
};

bool isPalindrome(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* prev=NULL;
    Node* next;
    Node* cur=slow;
    while(cur->next!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    fast=head;
    while(prev!=NULL)
    {
        if(fast->data!=prev->data)
        {
            return false;
        }
        prev=prev->next;
        fast=fast->next;
    }
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
