class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false; 
        int left = 0;
        int right = arr.size() - 1;
        bool flagUp = false;
        bool flagDown = false;
        while ((left < arr.size() - 1) && (arr[left] < arr[left + 1])) {
            left++;
            flagUp = true;
        }
        while (right > 0 && arr[right] < arr[right - 1]) {
            right--;
            flagDown = true;
        } 
        if (((left == right) && flagDown) && flagUp) return true;
        return false;
    }
};