class Solution {
public:
    string maximumXor(string s, string t) {
        int count0=0,count1=0;
        for(int i=0; i<t.length(); i++){
            if(t[i]=='1') count1++;
            else count0++;
        }
        string t2="";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                if(count1>0){
                t2 += '1';
                count1--;
                }
                else{
                    t2 += '0';
                    count0--;
                }
            }
            else{
                if(count0>0){
                    t2 += '1';
                    count0--;
                }
                else{
                    t2+='0';
                    count1--;
                }
            }
        }
        return t2;
    }
};