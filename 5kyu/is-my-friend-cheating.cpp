kata: https://www.codewars.com/kata/is-my-friend-cheating
cod:

		#include <vector>
		using namespace std;

		class RemovedNumbers
		{
		public:
			static vector<vector<long long>> removNb(long long n);
		};

		vector<vector<long long>> RemovedNumbers::removNb(long long n)
		{
		  long long sum = n % 2 == 0 ? n / 2 * (n + 1) : (n + 1) / 2 * n;
		  vector<vector<long long>> returnVec;
		  
		  for(int i = 1; i <= n; ++i)
			if( (sum-i) / i == (sum-i) % i || ((sum-i) / i )-1 == (sum-i) % i + i)
			  returnVec.push_back(vector<long long>() = {i,(sum-i) % i + (  (sum-i) / i -1 == (sum-i) % i + i ? i : 0)} );
		  return returnVec;
		}