class Solution {
public:
    int firstOcc(vector<int>& arr, int x) {
        int low=0, high=arr.size()-1, ans=-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(arr[mid] >= x) {
                if(arr[mid] == x) ans = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return ans;
    }
    int lastOcc(vector<int>& arr, int x) {
        int low=0, high=arr.size()-1, ans=-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(arr[mid] <= x) {
                if(arr[mid] == x) ans = mid;
                low = mid + 1;
            } else high = mid - 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int k) {
        int first = firstOcc(arr, k);
        if(first == -1) return {-1,-1};
        int last = lastOcc(arr, k);
        return {first, last};
    }
};