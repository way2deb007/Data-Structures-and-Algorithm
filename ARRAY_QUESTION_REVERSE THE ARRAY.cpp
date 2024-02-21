#include<bits/stdc++.h>
using namespace std;

//reverse the array (function)
void reverse(int arr[],int n){


    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//print the array function
void print_array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array1[]={1,2,3,4,5,6};
    int n=(sizeof(array1)/sizeof(array1[0]));

    //reversing the array.
    reverse(array1,n);

    //printing the reversed array.
    print_array(array1,n);
    return 0;

}
