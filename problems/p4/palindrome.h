
#include <string>



static bool isPalindrome(std::string s)
{
	bool isPalin = false;
	
	for(unsigned i = 0; i < (s.size() / 2); ++i){
		if(s.at(i) == s.at((s.size() - 1) - i)){
			isPalin = true;
		}
		else{
			isPalin = false;
		}

	}
	return isPalin;
}
