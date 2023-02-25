class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> digits1;
        int n=digits.size();
        int res=digits[0];
        for (int i=1; i<n; i++){
            res=res*10+digits[i];
        }
        res=res+1;
        while(res!=0){
            int a=res%10;
            digits1[n-1]=a;
            res=res/10;
            n--;
        }
        return digits1;
    }