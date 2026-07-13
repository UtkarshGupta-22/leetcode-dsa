class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string t = "";
        int n = s.length();
        int i=0;

        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int start = i;
            while(i<n && s[i]!=' ') i++;
            int end = i-1;

            v.push_back(s.substr(start,end-start+1));
        }
        string res="";
        for(int i=v.size()-1; i>=0; i--){
            res += v[i];
            if(i!=0) res +=" ";
        }
        return res;
    }
};