//sg
#include<iostream>
#include "CaesarBox.h"
#include<string>
using namespace std;

int main(int argc,char * argv[])
{
	CaesarBox c(argv[1]);
	c.init();
	return 0;
}
