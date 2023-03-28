class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1,sum=0,carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            sum=0;
            if(i>=0)
                sum+=a[i--] - '0';
            if(j>=0)
                sum+=b[j--] - '0';
            sum+=carry;
            if(sum==1)
                carry=0;
            else if(sum==2){
                carry=1;
                sum=0;
            }
            else if(sum==3){
                carry=1;
                sum=1;
            }
            ans=(char)(sum+'0')+ans;
        }
        return ans;
    }
};