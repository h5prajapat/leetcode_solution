class Solution {
public:
    bool isPalindrome(int x) {
        int temp=0;
        if (x<0) {
            return false;
        }else if(x==0){
            return true;
        }else if(x%10 == 0){
            return false;
        }else{ 
            while (x>temp){
                temp = temp*10 + x%10;
                if (temp == x){
                    return true;
                }
                x = x/10;
                if (temp == x){
                    return true;
                }
                
            }
        }
        return false;
    }
};