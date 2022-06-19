#include "BarGraphSet.h"
#include "BarGraph.h"


BarGraphSet::BarGraphSet()
{
	

}

BarGraphSet::BarGraphSet(int numberOfGraphs, int range)
{
	
	BarGraph* temp;

	for (int i = 0; i < numberOfGraphs; i++)
	{
		temp = new BarGraph(range);
		addBarGraph(temp);
	}
}

void BarGraphSet::addBarGraph(BarGraph* bg)
{
	values.push_back(bg);
}

BarGraph* BarGraphSet::getBarGraphAt(int barGraphIndex)
{
	return values.at(barGraphIndex);
}

void BarGraphSet::removeBarGraph(int barGraphIndex)
{
	//values->erase(barGraphIndex);
}

int BarGraphSet::getBarCounter()
{
	return values.size();
}
