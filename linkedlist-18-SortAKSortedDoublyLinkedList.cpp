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
    Node* prev;
};

struct compare
{
    /* data */
    bool operator()(struct Node* first,struct Node* second)
    {
        return first->data>second->data;
    }
};


struct Node* sort(struct Node* head,int k)
{
    if(head==NULL)
    {
        return head;

    }
    //priority_queue<int,vector<int>,greater<int>> minh;
    priority_queue<Node*,vector<Node*>,compare> minh;
    struct Node* newHead=NULL,*curr;
    for(int i=0;head!=NULL &&    i<=k;i++)
    {
        minh.push(head);
        head=head->next;
    }
    while(minh.empty())
    {
        if(newHead==NULL)
        {
            newHead=mih.top();
            newHead->prev=NULL;
            curr=newHead;

        }
        else{
            cur->next=pq.top();
            minh.top()->prev=curr;
            curr=pq.top();//curr=curr->next;


        }
        minh.pop();
        if(head!=NULL)
        {
            mih.push(head);
            head=head->next;
        }
    }
    curr->next=NULL;
    return newHead;
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
