class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        for(int i = 0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }

        while(k--){
            long long x = pq.top();
            pq.pop();
            x = floor(sqrt(x));
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty()){
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;
    }
};