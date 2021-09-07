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
}

Node* findIntersection(Node* head1,Node* head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* head=NULL;
    Node* curr=NULL;
    while(ptr1 and ptr2)
    {
        if(ptr1->data==ptr2->data)
        {
            if(head==NULL)
            {
                Node* t= new Node(ptr1->data);
                head=t;
                curr=t;
            }
            else
            {
                Node* t= new Node(ptr1->data);
                curr>next=t;
                curr=curr->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else{
            if(ptr1->data<ptr2->data)
            {
                ptr1=ptr1->data;
            }
            else{
                ptr2=ptr2->data;
            }
        }
    }
    return head;

}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}



