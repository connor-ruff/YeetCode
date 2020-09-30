/***********************************
 *  Given Two sorted integer arrays, merge one into the other as sorted
 **********************************/

#include<iostream>
#include<vector>


class Solution {

	public:

	void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

		int j = 0;
		for (int i = 0; ((i < nums1.size()) && (j < nums2.size())); ++i){

			if ( nums2.at(j) < nums1.at(i) ) {
				nums1.insert(nums1.begin() + i, nums2.at(j));
				j++;
			}
		}

		if(j == n) {j--;}
		if (nums2.at(j) > *(nums1.end()-1)){
			for (j; j < nums2.size(); ++j){
				nums1.insert(nums1.end(), nums2.at(j));
			}
		} 
			
		return; 
	}
};	

int main(){

	std::vector<int> nums1{1, 5, 8, 10, 12};
	std::vector<int> nums2{2, 3, 6, 9, 11, 13, 15, 19};

	Solution s;
	s.merge(nums1, nums1.size(), nums2, nums2.size());

	for ( auto it = nums1.begin(); it != nums1.end(); ++it){
		std::cout << *it << "  " ;
	}

	std::endl;
	return 0;
}

