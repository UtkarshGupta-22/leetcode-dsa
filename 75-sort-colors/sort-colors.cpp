class Solution {
public:
    void sortColors(vector<int>& arr) {
        //Dutch Flag Algorithm
        int n = arr.size();
        int low, mid=0;
        int high = n-1;
        while(mid<=high){
            if(arr[mid]==0) {
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1) {
                mid++;
            }
            else {
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};