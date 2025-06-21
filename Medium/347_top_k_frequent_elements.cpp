// Problem: 347. Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Difficulty: Medium
// Language: C++
// Time Complexity: O(N log K), where N is the number of elements
// Space Complexity: O(N)

class Solution {
public:
    typedef pair<int, int> pi; // Pair: {frequency, element}
    
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        
        // Step 1: Count frequency of each element
        for (int ele : arr) {
            mp[ele]++;
        }

        // Step 2: Use min-heap to store top k elements by frequency
        priority_queue<pi, vector<pi>, greater<pi>> pq;

        for (auto x : mp) {
            int ele = x.first;
            int freq = x.second;
            pq.push({freq, ele});

            if (pq.size() > k)
                pq.pop(); // Maintain only top k
        }

        // Step 3: Extract elements from heap into result
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
