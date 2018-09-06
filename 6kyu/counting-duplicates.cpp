kata: https://www.codewars.com/kata/counting-duplicates
cod:

#include <ctype.h>
#include <unordered_set>

		size_t duplicateCount(const std::string& in); // helper for tests

		size_t duplicateCount(const char* in)
		{
			std::unordered_multiset<char> mySet;
			size_t count=0;
			
			for(; *in != '\0'; ++in)
			{
			  mySet.insert(tolower(*in));
			  count+= mySet.count(tolower(*in)) == 2 ? 1 : 0;
			}
			  
			return count;
		}