#include <iostream>
using namespace std;

class SpecialCounter
{
	int strt;
	int stp;
	int inc;
	int dec;
	

public:
	SpecialCounter()
	{
		strt = 0;
		stp = 255;
		inc = 1;
		dec = -1;
	}

	void start(int st)
	{
		if (st >= 0 && st <= 255)
			strt = st;
		else
			cout << "Starting value should be between 0 and 255"<< endl;
	}

	void stop(int sp)
	{
		if (sp >= 0 && sp <= 255)
			stp = sp;
		else
			cout << "Stopping value should be between 0 and 255" << endl;
	}

	int stepInc(int StepSize)
	{
		if (StepSize > 0)
		{
			inc = StepSize;
			if ((strt + inc) > 255)
				cout << "Cannot increament beyond 255!!" << endl;
			else
			{
				strt += StepSize;
				return strt;
			}
		}
		else
			cout<<"cannont increament with the value less than 0 or greater than 255 \n";
	}

	int stepDec(int stepSize)
	{
		if ((strt - stepSize) < 0)
			cout << "Cannot decreament upto bellow 0!!" << endl;
		else
		{
			strt -= stepSize;
			return strt;
		}
	}

};
int main()
{
	SpecialCounter cntr;
	int value;

	cntr.start(1);
	cntr.stop(10);
	while (cntr.start < cntr.stop)
	{
		cout << "" << cntr.stepInc(1) << endl;
	}
		
	return 0;
}