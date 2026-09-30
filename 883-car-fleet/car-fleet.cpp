class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        stack<double> st;
        int n = position.size();

        for(int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end());
        
        for(int i = n - 1; i >= 0; i--) {
            double currTime = double(target - cars[i].first) / cars[i].second;

            if(st.empty() || currTime > st.top()) {
                st.push(currTime);
            }
        }
        return st.size();
    }
};