class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n = arr.size();

        unordered_set<int> st;

        for(int i=0; i<n; i++){
            if(st.find(arr[i]) != st.end()){
                return true;
            }
            else{
                st.insert(arr[i]);
            }
        }
        return false;
    }
};