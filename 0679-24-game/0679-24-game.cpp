class Solution {
    vector<double>getValidoperations(double a, double b){
        return {a+b, a-b, a*b, a/b, b-a, b/a};
    }
    
    bool isPossible(vector<double> &arr){
        int n= (int)arr.size();
        if (n==1){
            return abs(24.0-arr[0]) <= FLT_EPSILON;
        }
        for (int fn=0; fn<n; fn++){
            for (int sn=fn+1; sn<n; sn++){
                double n1=arr[fn];
                double n2=arr[sn];
                vector<double>nextArr;
                for (double validOps : getValidoperations(n1,n2)){
                    nextArr.clear();
                    nextArr.push_back(validOps);
                    
                    for (int i=0; i<n; i++){
                        if (i!=fn && i!=sn)
                            nextArr.push_back(arr[i]);
                    }
                    if (isPossible(nextArr))
                        return true;
                }
            }
        }
        return false;
    }
    
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> arr(cards.begin(), cards.end());
        return isPossible(arr);
    }
};