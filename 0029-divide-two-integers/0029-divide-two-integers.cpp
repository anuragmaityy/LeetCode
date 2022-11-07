class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign=((dividend<0)^(divisor<0))?-1:1;
        long long int divid,divis;
        if(dividend!=INT_MIN)
            divid=abs(dividend);
        if(divisor!=INT_MIN)
            divis=abs(divisor);
        if(divid<divis)
            return 0;
        long long int ans=exp(log(divid)-log(divis))+0.00001;
        ans=(sign==1)?ans:-ans;
        if(ans<INT_MIN)
            return INT_MIN;
        else if(ans>INT_MAX)
            return INT_MAX;
        return ans;
    }
};