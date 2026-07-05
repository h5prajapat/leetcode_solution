class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a=0;
        int b= 0;
        int x = 0;
        int y = nums.size();

        for (int i=x ; i<y ; i++){
            if (nums[i]==target){
                return i;
            }
            if (nums[i]<target){
                a++;
            }
        }
        return a;
    }
};