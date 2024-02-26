#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {

            if (flowerbed[i] == 0) {
                int prev = -1, next = -1;

                if (i == 0 || flowerbed[i - 1] == 0) { // i=5,   3-1=2 1,0,1,0,1
                    prev = 0;
                }
                if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) {
                    next = 0;
                }
                if (prev == 0 && next == 0) {
                    count++;
                    flowerbed[i] = 1;
                }
            }
        }
        if (count < n)
            return false;
        return true;
    }
};


int main(){
	Solution sol;
	vector<int> flowerbed = {1,0,0,0,1};
	int n=2;

	bool result = sol.canPlaceFlowers(flowerbed,n);

	if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

	return 0;
}