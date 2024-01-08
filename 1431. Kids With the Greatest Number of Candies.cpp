class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int currMax =0;

        for(int i: candies){
            currMax = max(currMax, i);
        }
        vector<bool> result(candies.size());

        for(int i=0;i<candies.size();i++){
            if(candies[i]+ extraCandies >= currMax)
            result[i]=true;
            else
            result[i]=false;
        }

        return result;
    }
};
