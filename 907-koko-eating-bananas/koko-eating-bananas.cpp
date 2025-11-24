class Solution {
public:
    int maximumElement(vector<int>& v){
        int n = v.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(v[i],maxi);
        }
        return maxi;
    }    
    long long func(vector<int>& arr, int hourly){
        int n = arr.size();
        long long total=0;
        for(int i=0; i<n; i++){
            total += ceil((double)arr[i]/(double)hourly);            
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low=1;
        int high= maximumElement(piles);
        int ans;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long tlnumber = func(piles,mid);
            if(tlnumber<=h){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }    
        return low;
    }
};