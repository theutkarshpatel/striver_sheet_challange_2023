void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i-1;
                break;
            }
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        int index2=nums.size()-1;
        int val=101;
        for(int i=index+1;i<nums.size();i++){
            if(nums[i]<val && nums[i]>nums[index]){
                index2=i;
                val=nums[i];
            }
        }
        swap(nums[index],nums[index2]);
        sort(nums.begin()+index+1,nums.end());
    }
