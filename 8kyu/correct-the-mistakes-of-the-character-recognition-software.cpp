kata: https://www.codewars.com/kata/correct-the-mistakes-of-the-character-recognition-software
cod:

	#include <string>

	std::string correct(std::string str)
	{
	  std::replace(str.begin(), str.end(), '5', 'S');
	  std::replace(str.begin(), str.end(), '0', 'O');
	  std::replace(str.begin(), str.end(), '1', 'I');
	  return str;
	}