#include <iostream>
#include "FIFOPolicy.h"

#ifdef RUN_FIFO
int main()
{
	std::vector<size_t> refList =
	{ 1, 2, 3, 2, 1, 5, 2, 1, 6, 2, 5, 6, 3, 1, 3, 6, 1, 2, 4, 3 };
	size_t cacheSize = 3;
	FIFO cal(cacheSize, refList);
	std::cout << cal.hit_ratio()  << std::endl;
	std::cout << cal.miss_ratio() << std::endl;
	std::cout << cal.page_fault() << std::endl;
	return 0;
}
#endif