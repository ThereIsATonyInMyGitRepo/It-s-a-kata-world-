kata: https://www.codewars.com/kata/anagram-detection
cod:

		bool isAnagram(std::string test, std::string original)
		{
		  int v1[27];
		  int v2[27];
		  memset(v1,0,sizeof(v1));
		  memset(v2,0,sizeof(v2));
		  
		  if(test.length() != original.length())
			return false;
			
		  for(std::string::iterator it=test.begin();it != test.end(); ++it)
			v1[tolower(*it) - 'a' ]++;
		  
		  for(std::string::iterator it=original.begin();it != original.end(); ++it)
			v2[tolower(*it) - 'a' ]++;
		  
		  for(int i = 0;i < 27; ++i)
			if(v1[i] != v2[i])
			  return false;
		  
		  return true;
		}