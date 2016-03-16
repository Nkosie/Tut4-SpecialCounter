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

	int start(int st)
	{
		if (st >= 0 && st <= 255)
		{
			strt = st;
			return strt;
		}
		else
			cout << "Starting value should be between 0 and 255"<< endl;
	}

	int stop(int sp)
	{
		if (sp >= 0 && sp <= 255)
		{
			stp = sp;
			return stp;
		}
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
			strt -= stepSize;
			return strt;		
	}

};
int main()
{
	SpecialCounter cntr;
	int start, stop, start2, stop2;
	cout << "INCREAMENTING \n";
	start= cntr.start(20);
	stop= cntr.stop(210);
	
	while (start <= stop)
	{		
		cout << "" << start << endl;
		start = cntr.stepInc(3);
	}

	cout << "\n\n\n\n\n";
	cout << "DECREAMENTING \n";
	start2 = cntr.start(210);
	stop2 = cntr.stop(0);

	while (start2 >= stop2)
	{
		cout << "" << start2 << endl;
		start2 = cntr.stepDec(2);
	}
	return 0;
}