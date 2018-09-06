kata: https://www.codewars.com/kata/form-the-minimum
cod:

	#include <vector>
	#include <set>

	using namespace std; 

	unsigned long long minValue (vector <int> values)
	{
	  int ret=0;
	  std::set<int> mySet; 
	  mySet.insert(values.begin(),values.end());
	  
	  for(auto& i : mySet)
		ret=ret*10+i;
		
	  return ret ; 
	}