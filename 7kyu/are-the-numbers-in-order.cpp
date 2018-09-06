kata: https://www.codewars.com/kata/are-the-numbers-in-order
cod:

		bool isAscOrder(std::vector<int> arr)
		{
			int comp=*(arr.begin());
			for(std::vector<int>::iterator it=(arr.begin()+1); it != arr.end(); ++it)
			{
			  if(comp>*it)
				return false;
			  comp=*it;
			}
			
			return true;
		}