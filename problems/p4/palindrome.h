
#include <string>
#include <cctype>


static bool isPalindrome(std::string s)
{
	bool isPalin = false;
	
	for(unsigned j = 0; j < (s.size() - 1); ++j){
		if(!(isalpha(s.at(j))) && !(isdigit(s.at(j))) ){
			s.erase(j,1);
		}
	}
	
	
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
