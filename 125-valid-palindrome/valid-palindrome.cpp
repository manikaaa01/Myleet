        
class Solution {
public:
    bool isPalindrome(string s) {
        stringstream ss(s);
        string word = "";
        string result = "";

        // Build cleaned string
        while (ss >> word) {
            for (char ch : word) {
                if (isalnum(ch)) {
                    result += tolower(ch);
                }
            }
        }

        // Make a reversed copy
        string reversedResult = result;
        reverse(reversedResult.begin(), reversedResult.end());

        // Compare
        return result == reversedResult;
    }
};