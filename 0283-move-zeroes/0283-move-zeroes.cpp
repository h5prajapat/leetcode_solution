class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // h5prajapat
        int x = nums.size();
        int left = 0;
        for(int i = 0; i< x ; i++){
            if (nums[i] != 0){
                swap(nums[left] , nums[i]);
                left ++;
            }
        }
    }    
};