/***********************************
 *  Given Two sorted integer arrays, merge one into the other as sorted
 **********************************/

#include<iostream>
#include<vector>


int main(int argc, char ** argv){

	vector<int> num1 = {1, 4, 7};
	vector<int> num2 = {3, 5, 8};

	int j = 0;
	for (auto it = num1.begin(); it != num1.end(); ++it){
		if (num2.at(j) <= *it){
			num1.insert(it, num2.at(j));
			j++;
		}
	}


	for (auto jt = num1.begin(); jt != num2.end(); ++jt){
		std::cout << *jt << "  " ;
	}
	return 0;

}

