#include <iostream>
using namespace std;

#include "CPU.h"
#include "SSD.h"
#include "videocard.h"
#include "RAM.h"
#include "Laptop.h"
int main()
{

	CPU myCPU("Good model", 10);
	SSD mySSD("Model", 6);
	videocard myCard("model V2", 9);
	RAM myRAM("obamaram", 11);
	char name[] = "Name";
	char* ptr = name;
	Laptop myLaptop(myCPU, mySSD, myRAM, myCard, "Obamarang", 100.23);
	myLaptop.print();
	Laptop otherLaptop(myLaptop);
	otherLaptop.print();
	cout << endl;
}