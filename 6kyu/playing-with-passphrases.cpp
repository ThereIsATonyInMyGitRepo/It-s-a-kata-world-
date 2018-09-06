kata: https://www.codewars.com/kata/playing-with-passphrases
cod:

		#include <string>

		class PlayPass
		{
		  public:
		  static std::string playPass(const std::string &s, int n);
		};

		std::string PlayPass::playPass(const std::string &s, int n)
		{
		  std::string returnStr;
		  for(int i = s.length()-1;i >=0 ;--i)
			returnStr += s[i] > 64 && s[i] <91 ? i % 2 == 0 ? (s[i] + n - 65) % 26 + 65 : ((s[i] + n) -65) % 26 + 97 : s[i] > 47 && s[i] <58 ? 105 - s[i] : s[i] ; 
		  
		  return returnStr;
		}