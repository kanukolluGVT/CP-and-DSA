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
#define w(x) int x;cin>>x; while(x--)
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

int minPlat(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int pt_no=1;
    int j=0;
    int i=1;
    while(i<n)
    {
        if(arr[i]<dep[j])
        {
            pt_no++;
        }
        else{
            j++;
        }
        i++;
    }
    return pt_no;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}


/*
int findPlatform(int arr[], int dep[], int n)
    {
    	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    	vector<pair<int,int>>v;
    	for(int i=0;i<n;i++){
    	    v.push_back({arr[i],dep[i]});
    	}
    	sort(v.begin(),v.end());
    	int p = 1;
    	pq.push({v[0].second,p});
    	for(int i=1;i<n;i++){
    	    int x = pq.top().first;
    	    int y = pq.top().second;
//was using v[i].first>=x which gave me wrong ans on one test case i guess another train cant arrive the same time one train is leaving
    	    if(v[i].first > x){
    	        pq.pop();
    	        pq.push({v[i].second,y});
    	    }else{
    	        pq.push({v[i].second,p + 1});
    	        p = p + 1;
    	    }
    	}
    	return p;
    }

    */