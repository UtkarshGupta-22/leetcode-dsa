class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        long long mass_l = mass ;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0; i<n; i++){
            if(mass_l < asteroids[i]){
                return false;
            }
            else{
                mass_l += asteroids[i];
            }

        }
        return true;
    }
};