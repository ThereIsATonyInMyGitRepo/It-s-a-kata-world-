kata: https://www.codewars.com/kata/dont-give-me-five
cod:

		int dontGiveMeFive(int start, int end)
		{
		  int count =0 ;
		  for(int i=start;i<=end;++i)
		  {
			int x=i;
			while(x!=0)
			{
			  if(x%10==5 || x%10==(-5))
			  {
				x=0;
				count++;
			  }
			  x/=10;
			}
		  }
		  return end-start+1-count;
		}