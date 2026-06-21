class Solution {
public:
    int balancedString(string s) {

        int n = s.size();
        int need = n / 4;

        unordered_map<char, int> count;

        for (char c : s)
            count[c]++;

        int left = 0;
        int ans = n;

        for (int right = 0; right < n; right++) {

            count[s[right]]--;

            while (left < n &&
                   count['Q'] <= need &&
                   count['W'] <= need &&
                   count['E'] <= need &&
                   count['R'] <= need) {

                ans = min(ans, right - left + 1);

                count[s[left]]++;
                left++;
            }
        }

        return ans;
    }
};