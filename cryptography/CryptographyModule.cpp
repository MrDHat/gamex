//sg
#include<iostream>
#include "CaesarBox.h"
#include<string>
using namespace std;

int main()
{
	CaesarBox c("letskillbillnoww");
	c.dumpMatrix();
	c.encrypt();
	c.dumpMatrix();
	c.decrypt();
	c.dumpMatrix();
	return 0;
}
