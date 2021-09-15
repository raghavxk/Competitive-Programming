class Solution {
public:
    string reverseOnlyLetters(string s) {
        int len = s.length();
        int left =0,right = len-1;
        while(left<right){
            while(left<right and !isalpha(s[left])){
                left++;
            }
            while(left < right and !isalpha(s[right])){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
