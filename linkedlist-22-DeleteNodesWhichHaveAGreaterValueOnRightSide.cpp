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

Node* revrese(Node* root)
{
    Node* prev=NULL;
    Node* cur=root;
    while(cur)
    {
        Node* next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}

Node* compute(Node* head)
{
    head=reverse(head);
    Node* cur=head;
    int ma=cur->data;
    Node* prev=head;
    head=head->next;
    while(head){
        if(head->data>=ma)
        {
            ma=head->data;
            head=head->next;
            prev=prev->next;
        }
        else{
            prev->next=head->next;
            head=head->next;
        }
    }
    head=revrese(cur);
    return head;

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
