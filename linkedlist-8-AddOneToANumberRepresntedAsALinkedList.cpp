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
    struct Node* next;
};

Node* reverse(Node* head)
{
    Node* next=NULL;
    Node* prev=NULL;
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

Node* addOne(Node* head)
{
    head=reverse(head);
    bool f= true;
    Node* curr=head;
    while(curr!=NULL and f==true)
    {
        if(curr->next==NULL and curr->data==9)
        {
            curr->data=1;
            Node* temp=new Node(0);
            temp->next=head;
            head=temp;
            curr=curr->next;

        }
        else if(curr->data==9){
            curr->data=0;
            curr=curr->next;

        }
        else{
            curr->data=curr->data+1;
            curr=curr->next;
            f=false;
        }
        head=reverse(head);
        return head;

    }

}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
