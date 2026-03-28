class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> result;
        for(int i = 0;i < a.size();i++){
            result.insert(a[i]);
        }
        for(int j = 0;j <b.size();j++){
            result.insert(b[j]);
        }
        vector<int>vecRes;
        for(auto element:result){
            vecRes.push_back(element);
        }
        return vecRes;
    }
};
//TC => O(NlogN) + O(MlogM) + O((N+M)log(N+M)) => O((N+M)log(N+M))
//SC => O(N+M) for set and O(N+M) for vector =>