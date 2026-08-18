class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums[0];
        for(int i=0;i<nums.size();i++){

                if(nums[i] != n){
                    return n;
                }
            n++;
        }if(nums[0] == 0)
        return nums.size();
        else
        return 0;
    }
};