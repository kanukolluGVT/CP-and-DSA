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

Node* sMerge(Node* a,Node* b)
{
    Node* result=NULL;
    if(a==NULL) return b;
    else if(b==NULL) return a;
    if(a->data<=b->data)
    {
        result=a;
        result->next=sMerge(a->next,b);
    }
    else{
        result=b;
        result->next=sMerge(a,b->next);
    }
    return result;
}

Node* mergeKLists(Node* arr[],int k)
{
    int i=0;
    int last=k-1;
    int j;
    while(last!=0)
    {
        i=0;
        j=last;
        while(i<j)
        {
            arr[i]=sMerge(arr[i],arr[j]);
            i++;
            j--;
            if(i>=j)
            {
                last=j;
            }
        }
    }
    return arr[0];
}


int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
