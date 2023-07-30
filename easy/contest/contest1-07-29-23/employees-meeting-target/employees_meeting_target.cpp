class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int index = 0;
        for (int i = 0; i < hours.size(); i ++) {
            if (hours[i] >= target) {
                index ++;
            }
        }
        return index;
    }
};
