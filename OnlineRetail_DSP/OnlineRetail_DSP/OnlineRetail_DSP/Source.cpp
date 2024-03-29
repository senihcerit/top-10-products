// OnlineRetail_DSP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>

#include <iostream>
#include <fstream>
#include "OnlineRetail.h"

using namespace std;

int main()
{
	clock_t startTime = clock();

	OnlineRetail onlineRetail(1000000);

	onlineRetail.ReadCsvAndFillHashTable("OnlineRetail.csv");

	onlineRetail.top10Analyzer();
		
	double totalTime = (double)(clock() - startTime) / CLOCKS_PER_SEC;
		
	cout << "Total Elapsed Time: " << totalTime << "seconds" << endl;

	system("pause");

	return 0;
}

