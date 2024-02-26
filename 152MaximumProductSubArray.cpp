#include<iostream>
#include<vector>
#include <climits>  //INT_MIN

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int prefix=1, suffix =1;
       int answer= INT_MIN;
       int n=nums.size();

       for(int i=0;i<n;i++)
       {
           if(prefix==0)
            prefix=1;
           if(suffix==0)
            suffix=1;


            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            answer=max(answer,max(prefix,suffix));
       }

       return answer;
    }
};

int main(){
	Solution sol;

	vector<int> v ={2,3,-2,4};

	int result = sol.maxProduct(v);

	cout<<result<<endl;

	return 0;

}