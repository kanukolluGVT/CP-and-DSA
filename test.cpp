// C++ implementation of simple method to
// find print pairs with given sum.
#include<iostream>>
//#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1]
// with sum equal to 'sum'
int printPairs()
{
	int arr[10001];
    int n;
    int sum;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>sum;

    int count = 0; // Initialize result

	// Consider all possible pairs and check
	// their sums
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				cout << "(" << arr[i] << ", "
					<< arr[j] << ")" << endl;
}

// Driver function to test the above function
//int main()
//{
//	int arr[] = { 1, 5, 7, -1, 5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int sum = 6;
//	printPairs(arr, n, sum);
//	return 0;
//}
