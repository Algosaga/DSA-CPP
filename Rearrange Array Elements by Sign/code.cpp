class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> c;

        int count = 0;
        int bcount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                a.push_back(nums[i]);
            }
            if (nums[i] < 0) {
                b.push_back(nums[i]);
            }
        }
        for (int j = 0; j < nums.size(); j++) {
            if (j % 2 == 0) {
                c.push_back(a[count]);
                count++;
            }
            if (j % 2 != 0) {
                c.push_back(b[bcount]);
                bcount++;
            }
        }
        return c;
    }
};
