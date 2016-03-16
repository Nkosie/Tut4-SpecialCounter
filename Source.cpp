#include <iostream>
using namespace std;

class SpecialCounter
{
	int start;
	int stop;
	SpecialCounter()
	{
		start = 0;
		stop = 255;

	}
public:
	void start(int start)
	{
		if (start >= 0 && start <= 255)
			start = start;
		else
			cout << "Starting value should be between 0 and 255"<< endl;
	}

	void stop(int stop)
	{
		if (stop >= 0 && stop <= 255)
			stop = stop;
		else
			cout << "Stopping value should be between 0 and 255" << endl;
	}

	void stepInc(int StepSize)
	{
		if()
	}
};