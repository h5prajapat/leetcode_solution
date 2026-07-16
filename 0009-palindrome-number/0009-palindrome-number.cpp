class Solution {
public:
    bool isPalindrome(int x) {
        // h5prajapat
        int temp = x;
        int r = 0,d=0;

        if (x<0 )return false;
        if (x==0)return true;
        if (x%10 == 0)return false;
        
        while (x>0){
            d=x%10;
            x=x/10;

            if (r>INT_MAX /10 || (r==INT_MAX/10 && d>7)){
                return false;
            }
            r=r*10 + d;
        }
        return temp == r;
    }
};