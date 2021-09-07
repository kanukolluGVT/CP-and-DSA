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
    Node* next;
};


Node* divide(int N,Node* head)
{
    Node* even=NULL;
    Node* odd=NULL;
    Node* o=NULL;
    Node* e=NULL;
    while(head)
    {
        if(head->data%2==0){
            if(even=NULL){
                even=head;
                e=head;
            }
            else{
                e->next=head;
                e=e->next;

            }
        }
        else{
            if(odd=NULL){
                odd=head;
                o=head;
            }
            else
            {
                o->next=head;
                o=o->next;
            }
        }
        head=head->next;

    }
    if(e) e->next=odd;
    if(o) o->next=NULL;
    if(even) return even;
    return odd;


}


int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
