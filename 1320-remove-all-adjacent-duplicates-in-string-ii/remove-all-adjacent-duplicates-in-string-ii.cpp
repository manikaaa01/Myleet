class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<int> count(s.size(), 0);
        int i = 0;
        for( int j =0; j <s.size(); j++, i++){
            s[i] = s[j];
            if( i > 0 && s[i] == s[i-1])
            count[i]= count[i-1] + 1;
            
            else
                 count[i]=1;

                 if( count [i] == k)
                 i-=k;
            
        }
        return s.substr(0,i);
        
    }
};