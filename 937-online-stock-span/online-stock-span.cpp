class StockSpanner {
public:
    stack<int> st;
    vector<int> prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int i = prices.size();
        prices.push_back(price);

        while(!st.empty() && prices[st.top()] <= prices[i]) {
            st.pop();
        }

        int span;
        if(st.empty()) {
            span = i + 1;
        } else {
            span = i - st.top();
        }

        st.push(i);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */