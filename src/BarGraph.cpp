#include "BarGraph.h"

BarGraph::BarGraph(int range) 
	: range(range)
	
{

}
BarGraph::BarGraph(int range, int value) 
	: range(range), value(value)
	
{
	

}

int BarGraph::getValue()
{
	return this->value;
}

void BarGraph::setValue(int newValue)
{
	this->value = newValue;

}

void BarGraph::addValue(int value)
{
	this->value +=value;
}

void BarGraph::subValue(int value)
{
	this->value -= this->value;
}

void BarGraph::setRange(int newRange)
{
	this->range = newRange;
} 

int BarGraph::getRange()
{
	return this->range;
}
