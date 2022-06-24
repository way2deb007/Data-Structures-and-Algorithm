int binarySearch(vector<int> arr, int start,int end, int key){
    //int start=0;
    //int end=size-1;
    int mid= (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid; 
        }
    
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int pivot(vector<int>arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
        int piv=pivot(nums,nums.size());
        if(k>=nums[piv] && k<=nums[nums.size()-1]){
            return binarySearch(nums, piv,(nums.size()-1),k);
        }
        else{
            return binarySearch(nums,0,piv-1,k);
        }
}
