#include <iostream>
main()
{
	int n,p; std::cin >> n >> p;
	for (int i = 1;(n -= p) > 0;++ i)
    //{return std::cout << i << '\n',0;
		if (__builtin_popcount(n) <= i && i <= n)
			return std::cout << i << '\n',0;
	std::cout << "-1\n";
}
