kata: https://www.codewars.com/kata/fake-binary
cod:


		#include <string>

		std::string fakeBin(std::string str)
		{
		  for(std::string::iterator it=str.begin();it != str.end(); ++it)
			*it=*it<'5'? '0': '1';
		  
		  return str;
		}