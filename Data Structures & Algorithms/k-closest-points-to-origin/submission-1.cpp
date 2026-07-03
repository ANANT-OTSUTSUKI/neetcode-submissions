class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>, vector<pair<float,int>> , greater<pair<float,int>>> pq;
        for(int i=0;i<points.size();i++){
            float dis = sqrt((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
            pq.push({dis,i});
        }
        vector<vector<int>> ans;
        while(k--){
            int ind = pq.top().second;
            pq.pop();
            ans.push_back(points[ind]);
        }
        return ans;
    }
};
