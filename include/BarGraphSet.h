#pragma once
#include "BarGraph.h"
#include <vector>

class BarGraphSet
{
private: 

	std::vector<BarGraph*> values;

public:

	BarGraphSet();
	BarGraphSet(int numberOfGraphs, int range);

	void		addBarGraph(BarGraph* bg);
	BarGraph*	getBarGraphAt(int barGraphIndex);
	void		removeBarGraph(int barGraphIndex);

	int			getBarCounter();


};