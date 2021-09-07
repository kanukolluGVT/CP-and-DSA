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

Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* next=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;


}

struct Node* addTwoLists(struct Node* first,struct Node* second)
{
    first=reverse(first);
    second=reerse(second);
    int c=0;
    int s=0;
    Node* res=NULL;
    Node* curr=NULL;
    while(first!=NULL || second!=NULL)
    {
        s=c+(first?first->data:0)+(second?second->data:0);
        c=(s>=10)?1:0;
        s=s%10;
        temp=new Node(s);
        if(res==NULL) res=temp;
        else curr->next=temp;
        curr=temp;
        if(first) first=first->next;
        if(second) second=second->next;
    }
    if(c>0){
        temp=new Node(c);
        curr->next=temp;
        curr=temp;

    }
    res=reverse(res);
    return res;
    
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
