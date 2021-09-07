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

void MergeSorting(Node** head)
{
    Node* cur= *head;
    Node* first;
    Node* second;
    if(!cur or !cur->next) return;
    FindMiddle(curr,&first,&second);

    MergeSort(&first);
    MergeSort(&second);
    *head=MergeBoth(first,second);
}

void FindMiddle(Node* cur,Node** first,Node** second)
{
    Node* first;
    Node* second;
    slow=cur;
    fast=cur->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }

    }
    *first= cur;
    *second=slow->next;
    slow->next=NULL;
}

Node* MergeBoth(Node* first,Node* second)
{
    Node* answer=NULL;
    if(!first)
    {
        return second;
    }
    if(!second)
    {
        return first;
    }
    if(first->data<=second->data)
    {
        answer=first;
        answer->next=MergeBoth(first->next,second);
    }
    else{
        answer=second;
        answer->next=MergeBoth(second->next,first);
    }
}

Node* MergeSort(Node* head)
{
    MergeSorting(&head);
    return head;
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
