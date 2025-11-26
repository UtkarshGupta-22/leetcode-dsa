#include<unordered_map>
class Solution {
public:
    bool prime(int n){

         bool flag=true;
        if(n==0 || n==1) flag = false;
       
        for(int i=2; i<n; i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        bool flag2 = false;
        map<int,int>freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto &it: freq){
            if(prime(it.second)==true) flag2=true;
        }
        return flag2;
    }
};