#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);
 
    // Return k'th element in the sorted array
    return arr[k - 1];
}
int kthlargest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);
 
    // Return k'th element in the sorted array
    return arr[n-k];
}
 
// Driver program to test above methods
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k)<<endl;
    cout << "K'th largest element is " << kthlargest(arr, n, k);
    return 0;
}
