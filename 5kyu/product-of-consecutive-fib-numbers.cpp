kata: https://www.codewars.com/kata/product-of-consecutive-fib-numbers
cod:

		#include <vector>
		typedef unsigned long long ull;
		class ProdFib
		{
		public:
		  static std::vector<ull> productFib(ull prod);
		};

		std::vector<ull> ProdFib::productFib(ull prod)
		{
		  ull a,b,c;
		  a=1;
		  b=1;
		  ull sum=2;
		  
		  while(sum < prod)
		  {
			c=a+b;
			sum+=c*c;
			a=b;
			b=c;
		  }
		  return std::vector<ull>()={b,b+a,sum == prod? true : false};
		}
		//Am vazut la solutii ca exista o metoda mai eleganta cu swap. Si am vazut ca m-am complicat
		