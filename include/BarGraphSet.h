#pragma once
#include "BarGraph.h"
#include <vector>

class BarGraphSet
{
private: 

	std::vector<BarGraph>* values;

public:

	BarGraphSet();
	BarGraphSet(int numberOfGraphs);

	void		addBarGraph(BarGraph* bg);
	BarGraph	getBarGraphAt(int barGraphIndex);
	void		removeBarGraph(int barGraphIndex);

};