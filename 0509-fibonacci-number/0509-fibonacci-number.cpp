class Solution {
public:
    int fib(int n) {
        int a = 1;
        int b = 0;

        for (int i = 0 ; i < n ; i++){

            // a = a+b;
            // b = a - b;
            // can also use this :
            int c = a + b;
            a = b;
            b = c;
            
        }
        return b;
    }
};