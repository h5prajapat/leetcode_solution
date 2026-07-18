class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // h5prajapat 


        // // solution 1
        // int a=0;
        // int y = nums.size();

        // for (int i=0 ; i<y ; i++){
        //     if (nums[i]==target){
        //         return i;
        //     }
        //     if (nums[i]<target){
        //         a++;
        //     }
        // }
        // return a;

        // // end 1 





        // solution 2

        int y = nums.size();


        for (int i=0 ; i<y ; i++){
            if (nums[i]==target){
                return i;
            }
            if (nums[i]>target){
                return i;
            }
        }
        return y;
        
        // end 2
    }
};