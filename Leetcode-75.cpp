class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count1++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count2++;
            }
        }
        for(int i=0;i<count1;i++){
            nums[i]=0;
        }
        for(int i=count1;i<count1+count2;i++){
            nums[i]=1;
        }
        for(int i=count1+count2;i<n;i++){
            nums[i]=2;
        }
    }
};
