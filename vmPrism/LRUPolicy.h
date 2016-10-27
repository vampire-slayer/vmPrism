#ifndef LRU_H
#define LRU_H

//Author      : Suvojit Manna
//Application : vmPrism

//Header for Least Recently Used  page Repalcement Policy API
//Replaces the page that has been unused for the longest duration of time
//Calculates Hit and Miss Ratio of the Algorithm
//@param  cacheSize   Number of frames the cache can hold
//@param  pageRefList List of page references in order of call

#include <list>
#include <vector>
#include <unordered_set>
#include <stddef.h>

class LRU
{
private:
	double hitRatio;	//store Hit Ratio
	size_t pageFaultCount;	//store no of page fault

public:
	//Constructor to create instances of LRU
	//@param  cacheSize   Number of frames the cache can hold
	//@param  pageRefList List of page references in order of call
	LRU(size_t cacheSize, std::vector<size_t> pageRefList);

	//Return the Hit Ratio
	//@param  void
	//@return Return the Hit Ratio
	double hit_ratio(void);

	//Return the Miss Ratio
	//@param  void
	//@return Return the Miss Ratio
	double miss_ratio(void);

	//Return the no of Page Fault
	//@param  void
	//@return Return no of page fault
	size_t page_fault(void);
};

#endif