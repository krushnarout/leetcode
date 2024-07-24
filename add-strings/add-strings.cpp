class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        int i = 0;
        int j = 0;
        int c = 0;

        while(i<num1.size() && j<num2.size()){
            int sum = (num1[i++]-'0') + (num2[j++]-'0')+ carry;
            carry = sum/10;
            ans.push_back(sum%10+'0');
        }
        while(i<num1.size()){
            int sum = (num1[i++]-'0') + carry;
            carry = sum/10;
            ans.push_back(sum%10+'0');
        }
        while(j<num2.size()){
            int sum = (num2[j++]-'0') + carry;
            carry = sum/10;
            ans.push_back(sum%10+'0');
        }
        while(carry){
            ans.push_back(carry%10+'0');
            carry = carry/10;
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
