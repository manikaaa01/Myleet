class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);

        for( char c: t)
        freq[c]++;

        int i = 0;
        int count = t.size();

         int start = 0;
        int minLen = INT_MAX;

        for( int j = 0; j < s.size(); j++){
            if( freq[s[j]]>0)
            count --;

            freq[s[j]]--;

            while( count ==0 ){
                if( j-i+1< minLen){
                    minLen = j -i+1;
                    start = i;
                }
                freq[s[i]]++;

                if( freq[s[i]] >0)
                count++;

                i++;
            }
        }        

        return minLen == INT_MAX
        ?""
        : s.substr( start, minLen);

    }
};