#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include <stack>

using namespace std;

class SolutionTwentyFour{
public:
	vector<int> applyOperations(vector<int>& nums){
		int n=nums.size();
		for(int i=0; i<n-1; i++){
			if(nums[i]==nums[i+1]){
				nums[i]*=2;
				nums[i+1]=0;
			}
		}

		vector<int> result;
		for(int i=0; i<n; ++i){
			if(nums[i]!=0) result.push_back(nums[i]);
		}

		while(result.size()<n){
			result.push_back(0);
		}
		return result;
	}
};

int main(){
	return 0;
}