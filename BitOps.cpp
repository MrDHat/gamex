//sg
#include<iostream>
class BitOps
{
/*this class should enclose the 
 * parser and the functions 
 * 1. And ,or ,not ,xor,
 * 2. ones (x) : returns number of 1's in binary representation of x
 *  similar to ones, define functions like : 
 * zeros(x)
 * 3. firstOne(x) : returns location of first one log2(x&(-x))
 * 4. nearPower(x) : nearest power of x
 * 
 * Just implement these functions and after that, 
 * you need to provide the following functionality : 
 * 1. You need to parse what user has entered. 
 * 2. if user types "help" just dump all the commands available
 * 3. if user types exit, go to main screen ( for now ,exit the program)
 * 4. if user types a valid command , print result in the next line. 
 * eg : 
 * 		$help
 * 		$ ones : get number of ones in binary representaion
 *   ( the dollar will also be printed by your program)
 * 	
 */ 

int ones(int x)			// FUNCTION TO CALCULATE THE NUMBER OF ONEs IN BINARY REPRESENTATION OF X
{
	int c = 0 ;
	if(!x)
	{
		return -1;
	}
	
	while(x)
	{
		if(x & 1)
			c++ ;
		x = x >> 1 ;
	}
	return c ;
}

int zeros(int y){	//Counting the number of zeros in binary representation of y
  int zeroCount = 0;
  
   if(!y){
      return -1;
   }
  
   while(y){
    
    if(!(y & 1))
      zeroCount++;
    y >>= 1;
  }
  return zeroCount;
}


int firstOne(int x)		// FUNCTION TO CALCULATE THE POSITION OF THE FIRST 1 FROM LSB IN BINARY REPRESENTATION OF X
{
	if(!x)
	{
		return -1;
	}
	
	int r=x&-(x);
	int mask=1;
	int pos=0;
	
	while(r)
	{
		if((mask&r)==1)
		{
			return pos; 
		}
	pos++;
	r=r>>1;
	}
}

int nearPower(int x){	//
  --x;
  x=x|(x>>1);
  x=x|(x>>2);
  x=x|(x>>4);
  x=x|(x>>8);
  x=x|(x>>16);
  ++x;
  return x;
}
}
