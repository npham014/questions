#include <string>
static bool isPalindrome(std::string s)
{
	bool isPalin = false;
	
	for(int i = 0; i < userString.size() / 2; ++i){
		if(userString.at(i) == userString.at(userString.size() - i)){
			isPalin = true;
		}
		else{
			isPalin = false;
		}

	}
	return isPalin;
}