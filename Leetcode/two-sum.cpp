class Solution {
public:
  //  vector<int> twoSum(vector<int>& v, int target) {
        map<int,int>m,indx;
        vector<int>anss(2);
        for (int i = 0; i < v.size(); ++i) {
            if (m[v[i]]){
                ans[0]=i;
                ans[1]=indx[target-v[i]];
                return ans;
            }
            m[target-v[i]]=1;
            indx[v[i]]=i;
        }
        return anss;
    }
};
