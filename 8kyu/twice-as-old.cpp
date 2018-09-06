kata: https://www.codewars.com/kata/twice-as-old
cod:

	int twice_as_old(int dad, int son) 
	{
	  return son-dad+son > 0 ? son-dad+son : dad-son-son;
	}