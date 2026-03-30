class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if(s1==s2) return true;
        for(int i=0; i<m; i++){
            for(int j=i+2; j<n; j++){
                swap(s1[0],s1[2]);
                if(s1==s2) return true;
                swap(s1[1],s1[3]);
                if(s1==s2) return true;
                swap(s1[2],s1[4]);
                if(s1==s2) return true;
            }
        }
        return false;
    }
};