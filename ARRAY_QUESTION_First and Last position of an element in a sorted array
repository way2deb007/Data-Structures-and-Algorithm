#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int lastocc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}


int main(){
    int array1[]={1,2,3,3,3,6};
    int n=(sizeof(array1)/sizeof(array1[0]));

    cout<<firstocc(array1,n,3)<<endl;
    cout<<lastocc(array1,n,3)<<endl;
    return 0;

}
