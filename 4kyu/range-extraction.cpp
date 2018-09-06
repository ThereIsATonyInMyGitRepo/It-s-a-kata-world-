kata: https://www.codewars.com/kata/range-extraction
cod:
	
		//ar trebui sa mai curat din cod
		#include <string>
		#include <vector>
		#include<iostream>
		using namespace std;
		std::string pars(int n) 
		{
		  std::string retStr,temp;
		  if(n<0)
		  {
			retStr+='-';
			n*=-1;
		  }
		  if(n==0)
			temp+=(char)(n%10+48);
		  while(n>0)
		  {
			temp+=(char)(n%10+48);
			n/=10;
		  }
		  for(std::string::reverse_iterator it = temp.rbegin(); it != temp.rend(); ++it)
		  {
			retStr+=*it;
		  }
		  return retStr;
		}

		std::string range_extraction(std::vector<int> args) 
		{
		  std::string retStr;
		  int poz=0;
		  for(int i = 1; i <= args.size(); ++i)
		  {
			if(args[i]-args[i-1] != 1)
			{
			  if(i-poz > 2)
			  {
				retStr+=pars(args[poz]);
				retStr+='-';
				retStr+=pars(args[i-1]);
				retStr+=',';
			  }
			  else if(i-poz == 2)
			  {
				retStr+=pars(args[poz]);
				retStr+=',';        
				retStr+=pars(args[poz+1]);
				retStr+=',';        
			  }
			  else
			  {
				retStr+=pars(args[poz]);
				retStr+=','; 
			  }
			  poz=i;
			}
		  }
		  retStr.pop_back();
		  return retStr;
		}