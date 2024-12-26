class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        if (numBottles == numExchange)
            ans++;
        else if (numBottles > numExchange) {
            while (numBottles >= numExchange) {
                ans++;
                numBottles = (numBottles - numExchange) + 1;
            }
        }
        return ans;
    }
};