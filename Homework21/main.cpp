#include <iostream>
using namespace std;

#include "CPU.h"
#include "SSD.h"
#include "videocard.h"
#include "RAM.h"
int main()
{

	char Model[] = "intel core i5";
	CPU myCPU(Model, 5);
	myCPU.printCPU();
	myCPU.setModel("Obama core v2");
	myCPU.printCPU();
	myCPU.setCores(10);
	myCPU.printCPU();
	const char* corescpy = myCPU.getModel();
	for (size_t i = 0; i < strlen(corescpy); i++)
	{
		cout << corescpy[i];
	}
	cout << endl;
}