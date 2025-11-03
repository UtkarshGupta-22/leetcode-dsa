class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int req = 0;
        for(int i=0; i<n; i++){
            if(colors[i]==colors[i+1]){
                req += min(neededTime[i], neededTime[i+1]);
                neededTime[i+1] = max(neededTime[i],neededTime[i+1]);
            }
        }
        return req;



        }
};