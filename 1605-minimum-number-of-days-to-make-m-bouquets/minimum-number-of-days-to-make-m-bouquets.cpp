class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k){
        int n = arr.size();
        int cnt=0;
        int nob=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=day) cnt++;
            else {
                nob += (cnt/k);
                cnt=0;
            }
        }
        nob += (cnt/k);
        return nob >= m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        long long val = m*1LL * k*1LL;
        int n = arr.size();        
        if(val > n) return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            maxi = max(maxi,arr[i]);
            mini = min(mini,arr[i]);
        }

        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possible(arr,mid,m,k)==true){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};