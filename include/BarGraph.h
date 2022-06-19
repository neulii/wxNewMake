#pragma once

class BarGraph
{

private:
	int range = 100;
	int value = 0;


public:
	BarGraph(int range);
	BarGraph(int range, int value);

	int		getValue();
	void	setValue(int newValue);

	void	setRange(int newRange);
	int		getRange();

	
	void	addValue(int value);
	void	subValue(int value);

};