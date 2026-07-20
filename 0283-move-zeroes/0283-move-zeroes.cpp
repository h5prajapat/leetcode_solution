class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = nums.size();
        int left = 0;
        for(int i = 0; i< x ; i++){
            if (nums[i] != 0){
                nums[left] = nums[i];
                left++;
            }
        }
        while(left<x){
            nums[left] = 0;
            left ++;

        }
    }
};