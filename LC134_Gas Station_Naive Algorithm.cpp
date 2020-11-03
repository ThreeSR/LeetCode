class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int rest = 0, run = 0, start = 0;
    for (int i = 0; i < gas.size(); ++i){
        run += (gas[i] - cost[i]);
        rest += (gas[i] - cost[i]);
        if (run < 0){
            start = i + 1;
            run = 0;
        }
    }
    return rest < 0 ? -1: start;
    }
};