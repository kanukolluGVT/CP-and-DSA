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
    Node* arb;
};

Node* copyList(Node* head)
{
    Node* cur=head;
    Node* temp;
    while(cur)
    {
        temp=cur->next;
        cur->next=new Node(cur->data);
        cur->next->next=temp;
        cur=temp;
    }
    cur=head;
    while(cur)
    {
        cur->next->arb=cur->arb? cur->arb->next : cur->arb;
        cur=cur->next->next;
    }
    Node* original=head;
    Node* copy=head->next;
    temp=copy;
    while(original and copy){
        original->next=original->next->next;
        copy->next=copy->next? copy->next->next : copy->next;
        original=original->next;
        copy=copy->next;
    }
    return temp;

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
