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

int search(vector<int> &nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=hight){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>=nums[low])
        {
            if(nums[mid]>target and nums[low]<target)
            {
                high=mid-1;
            }
            else low=mid+1;
        }nums[high]>target
        else{
            if(nums[mid]<target and nums[high]>target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}
