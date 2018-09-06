kata: https://www.codewars.com/kata/return-pyramids
cod:
	std::string pyramid(int n)
	{
	  std::string retStr;
	  for(int i = 1; i <= n; ++i)
	  {
		for(int j = 1; j <=n-i; ++j)
		  retStr += ' ';
		  
		retStr += '/';
		
		for(int j = 1; j <=(i-1)*2; ++j)
		  retStr += i != n ? ' ' : '_';
		  
		retStr += '\\';
		retStr += '\n';
	  }
	  return retStr;
	}