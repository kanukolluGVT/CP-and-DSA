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

int intersection(Node* head1,Node* head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    int c1=0,c2=0;
    while(ptr1)
    {
        c1++;
        ptr1=ptr1->next;
    }
    while(ptr2)
    {
        c2++;
        ptr2=ptr2->next;
    }

    ptr1=head1;
    ptr2=head2;
    int dif=abs(c1-c2);
    if(c1>c2)
    {
        REP_(i,diff) ptr1=ptr1->next;
    }
    else if(c2>c1)
    {
        REP_(i,n) ptr2=ptr2->next;
    }
    while(ptr1!=ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr1) return ptr1->data;
    return -1;
}

int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}
