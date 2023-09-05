class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0, minVal = INT_MAX;
        int sold = -1;
        for(int price: prices){
            minVal = min(price, minVal);
            sold = price-minVal;
            result = max(result, sold);
        }     
        return result;
    }

};