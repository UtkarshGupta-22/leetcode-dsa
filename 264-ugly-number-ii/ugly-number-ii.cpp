class Solution {
public:


            
   
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        pq.push(1);
        set<long long>st;

        st.insert(1);
        long long ugly=1;

        for(int i=0; i<n; i++){
            ugly=pq.top();
            for(int x: {2,3,5}){
                long long newN = ugly*x;
                if (st.find(newN)==st.end()){
                    st.insert(newN);
                    pq.push(newN);
                }
            }
            pq.pop();
        }
        return ugly;
    }
};