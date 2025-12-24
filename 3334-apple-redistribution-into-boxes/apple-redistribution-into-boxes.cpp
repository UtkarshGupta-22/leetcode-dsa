class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int sum=0;
        int sum2=0;
        for(int i=0; i<apple.size(); i++){
            sum += apple[i];
        }
        int count=0;
        for(int i=0; i<capacity.size(); i++){
            sum2 += capacity[i];
            count++;
            if(sum2>=sum) break;
        }
        return count;
    }
};