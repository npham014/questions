#include <string>
static bool isPalindrome(std::string s)
{
	bool isPalin = false;
	
	for(int i = 0; i < s.size() / 2; ++i){
		if(s.at(i) == s.at(s.size() - i)){
			isPalin = true;
		}
		else{
			isPalin = false;
		}

	}
	return isPalin;
}