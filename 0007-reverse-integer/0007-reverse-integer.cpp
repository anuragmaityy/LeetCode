class Solution {
public:
    int reverse(int x) {
        long t=0;
        while (x!=0){
            t=(t*10)+x%10;
            x=x/10;
        }
        return (t>INT_MAX || t<INT_MIN)?0:t;
    }
};