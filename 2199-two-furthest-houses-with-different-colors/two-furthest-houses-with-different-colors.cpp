class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int far=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(colors[i]!=colors[j]){
                    far = abs(i-j);
                    maxi = max(far,maxi);
                }
            }
        }
        return maxi;
    }
};