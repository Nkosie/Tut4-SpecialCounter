#include <iostream>
using namespace std;

class SpecialCounter
{
	int start;
	int stop;
	

public:
	SpecialCounter()
	{
		start = 0;
		stop = 255;
	}

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
		if ((start + StepSize) > 255)
			cout << "Cannot increament beyond 255!!" << endl;
		else
		{
			start += StepSize;
		}
	}

	void stepDec(int stepSize)
	{
		if ((start - stepSize) < 0)
			cout << "Cannot decreament upto bellow 0!!" << endl;
		else
		{
			start -= stepSize;
		}
	}

};
int main()
{
	SpecialCounter counter();

	return 0;
}