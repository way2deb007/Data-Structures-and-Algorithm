void sort_012(vector<int>& nums) {
        int i, cnt0=0, cnt1=0, cnt2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            switch(nums[i]){
                case 0:
                    cnt0++;
                    break;
                case 1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
                    break;
            }
            
        }
        nums.clear();
        while(cnt0>0){
            nums.push_back(0);
            cnt0--;
        }
        while(cnt1>0){
            nums.push_back(1);
            cnt1--;
        }
        while(cnt2>0){
            nums.push_back(2);
            cnt2--;
        }
        
    }
