kata: https://www.codewars.com/kata/delete-occurrences-of-an-element-if-it-occurs-more-than-n-times
cod:

		#include <algorithm>
		#include <unordered_set>

		std::vector<int> deleteNth(std::vector<int> arr, int n)
		{
		  std::unordered_multiset<int> myCount;
		  std::vector<int>::iterator myEnd = arr.end();
		  
		  for(std::vector<int>::iterator it = arr.begin();it != myEnd; ++it)
		  {
			myCount.insert(*it);
			if(myCount.count(*it)>n)
			{
			  int temp=*it;
			  myEnd=remove(it,myEnd,temp);
			  --it;
			}
		  }
		  arr.end()=arr.erase(myEnd,arr.end());
		  return arr;
		}