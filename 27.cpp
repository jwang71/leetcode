#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

class Solution{
public:
	int removeElement(vector<int>& nums,int val){
		int begin=0;
		for(int i=0;i<nums.size();++i){
			if(nums[i]!=val)
				nums[begin++]=nums[i];
		}
		return begin;
	}
};

int main(){
	vector<int> testcase={3,2,2,3};
	vector<int> testcase1={2,2,3};
	int val=3;
	Solution s;
	cout<<"original testcase:"<<endl;
	copy(testcase.begin(),testcase.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;

	cout<<"the new length: "<<s.removeElement(testcase,val)<<endl;
	cout<<"the new testcase: "<<endl;
	copy(testcase.begin(),testcase.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;

	return 0;

}
