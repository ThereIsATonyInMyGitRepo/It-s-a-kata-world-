kata: https://www.codewars.com/kata/tram-capacity
cod:

	int tram(int stops, const vector<int>& a, const vector<int>& b) 
	{
	  int max=0;
	  int value=0;
	  
	  for(int i = 0; i < stops; ++i)
	  {  
		value+=b[i]-a[i];
		if(max<value)
		  max=value;
	  }
	  
	  return max;
	}