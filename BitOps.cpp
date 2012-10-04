//sg
#include<iostream>
#include<ncurses.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<string>

using namespace std ;
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

public :

unsigned long int And(unsigned long int x, unsigned long int y){
  return x & y;
}
 
unsigned long int Or(unsigned long int x, unsigned long int y){
  return x | y;
}
 
unsigned long int Xor(unsigned long int x, unsigned long int y){
  return x ^ y;
}
 
char * Not(char *x){
  int i;
  for(i = 0;x[i];i++){
    if(x[i]=='1')
      x[i] = '0';
    else if(x[i] == '0')
      x[i] = '1';
  }
  return x ;
}



char * decimalToBin(unsigned long int decimal)
{
	int bit = 8 ;
	char *res=(char *)malloc(sizeof(char)*(bit+1));
	int i=0;
	unsigned long int mask=1<<(bit-1);
	while(i<bit)
	{
	if(decimal&mask)
	{
		res[i]='1';
	}
	else
	{
		res[i]='0';
	}
	i++;
	mask=mask>>1;
	}
	res[i]='\0';
	return res;
}

unsigned long int binToDec(char * bin)
{
  int bit = 8 ;
  unsigned long int power=1<<(bit-1);
  unsigned long int res=0;
  int i=0;
  while(i<bit)
  {
	if(bin[i]=='1')
	{
		res+=power;
	}
	power=power>>1;
	i++;
  }	
  return res;
}


void Exit(){
  
  clear();
  endwin();
  exit(0);
}

int ones(int x)			// FUNCTION TO CALCULATE THE NUMBER OF ONEs IN BINARY REPRESENTATION OF X
{
	int oneCount = 0 ;
	if(!x)
	{
		return -1;
	}
	
	while(x)
	{
		if(x & 1)
			oneCount++ ;
		x = x >> 1 ;
	}
	return oneCount ;
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

int nearPower(int x){	
	// Calculating nearest power of 2 for 32 bit numbers
  --x;
  x=x|(x>>1);
  x=x|(x>>2);
  x=x|(x>>4);
  x=x|(x>>8);
  x=x|(x>>16);
  ++x;
  return x;
}

// -1 => Invalid Input
// -2 => help

int parser(string msg){						// FUNCTION FOR PARSING THE INPUT
    size_t brack1, brack2, length_of_msg, comma ;
    int num ;
    unsigned long int a,b ;
    char *temp; 
    
    length_of_msg = msg.length();
    
    
    if(msg.find("And")!=string::npos){
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      comma = msg.find(",");
      
      if(3 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos){
	a = atoi(msg.substr(brack1+1,comma).c_str());
	b = atoi(msg.substr(comma+1,brack2).c_str());
	return And(a,b);
      }
      
    }
    
    
    if(msg.find("Or")!=string::npos){
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      comma = msg.find(",");
      
      if(2 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos){
	a = atoi(msg.substr(brack1+1,comma).c_str());
	b = atoi(msg.substr(comma+1,brack2).c_str());
	return Or(a,b);
      }
      
    }
    
    
    if(msg.find("Xor")!=string::npos){
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      comma = msg.find(",");
      
      if(3 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos && brack2!=string::npos){
	a = atoi(msg.substr(brack1+1,comma).c_str());
	b = atoi(msg.substr(comma+1,brack2).c_str());
	return Xor(a,b);
      }
      
    }
    
    
    
    if(msg.find("Not")!=string::npos){
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      if(3 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	  return -1 ;
      if(brack1!=string::npos || brack2!=string::npos){
	a = atoi(msg.substr(brack1+1,brack2).c_str());
	temp = decimalToBin(a);
	
	temp = Not(temp);
	return binToDec(temp);
      }
      
    }
    
    
    if(msg.find("ones")!=string::npos)				// CHECKING FOR ones FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      
      if(4 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return ones(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("zeros")!=string::npos)			// CHECKING FOR zeros FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      if(5 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return zeros(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("firstOne")!=string::npos)			// CHECKING FOR firstOne FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      if(8 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
   
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return firstOne(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("nearPower")!=string::npos)			// CHECKING FOR nearPower FUNCTION
    {
      brack1 = msg.find("(") ;
      brack2 = msg.find(")") ;
      
      if(9 + brack2 - brack1 + 1 != length_of_msg)		// Checking the length of Input
	return -1 ;
      
      if(brack1!=string::npos || brack2!=string::npos)
      {
	num = atoi(msg.substr(brack1+1,brack2).c_str()) ;
	return nearPower(num) ;
      }
      else
	return -1 ;
    }
    
    else if(msg.find("help")!=string::npos && length_of_msg == 4){				// need help?
      return -2;
    }
    else if(msg.find("exit")!=string::npos && length_of_msg == 4)  // Exit entered
      Exit();
    else 
      return -1 ;							// INVALID INPUT
  }
};

void initWin(int height, int width){	// Function to initialize Window
  
  initscr();
  clear();
  
  
  getmaxyx(stdscr,height, width);
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_WHITE, COLOR_BLACK);
}

int main(){
  
  BitOps obj  ;
  
  int height, width, i = 0, status ;
  char temp[20];
  int c = 0, cursx, cursy  ;
  
  initWin(height, width);
   string msg(""); 
   keypad(stdscr, TRUE);
  while(1){
    
    attron(COLOR_PAIR(1)|A_BOLD);
    mvprintw(i, 0,"[gamex] $ ");
    attroff(COLOR_PAIR(1));
    msg = "";
    
    c = wgetch(stdscr) ;
    
    while(c!=10)
    {
      if((c>=65 && c<=90) || (c>=97 && c<=122) || c == 40 || c == 41 || (c>=48 && c<=57))
      {
	msg.push_back(c) ;
      }
      
      else if(c == KEY_LEFT)
      {
	getyx(stdscr, cursy, cursx) ;
	if(cursx >= 11)
	  move(cursy, cursx-1) ;
      }
      
      else if(c == KEY_RIGHT)
      {
	getyx(stdscr, cursy, cursx) ;
	if(cursx <= 13 + msg.length())
	  move(cursy, cursx+1) ;
      }
      
      c = wgetch(stdscr) ;
    }
        
    /*  getstr(temp);
    msg=temp ;*/
        
    if(msg.empty()){			// Check for Enter Key
	i++ ;
	if(i == LINES + 1|| i == LINES - 1 || i == LINES + 2 || i == LINES - 2){
	i = 0;
	refresh();
	clear(); 
	}
	continue ;
   }  
    else{
	status = obj.parser(msg) ;
      if(status!=-1){
	if(status == -2){				// Help Detected
	  mvprintw(++i, 0, "And(x,y):  Prints x & y") ;
	  mvprintw(++i, 0, "Or(x,y): Prints x|y ") ;
	  mvprintw(++i, 0, "Not(x):  Prints !x ") ;
	  mvprintw(++i, 0, "Xor(x,y):  Prints x^y") ;
	  mvprintw(++i, 0, "ones(x): Prints the number of ones in binary representation of x") ;
	  mvprintw(++i, 0, "zeros(x): Prints the number of zeroes in binary representation of x") ;
	  mvprintw(++i, 0, "nearPower(x) : prints the nearest power of 2 closest to x") ;
	  mvprintw(++i, 0, "firstOne(x):  Prints the mask of number x (Location of first one from LSB)") ;
	}
	else 
	  mvprintw(++i, 0, "%d", status) ;
      }
      else
	mvprintw(++i, 0, "Invalid Input!") ;  
    }
    ++i;
   if(i == LINES + 1|| i == LINES - 1 || i == LINES + 2 || i == LINES - 2){
      i = 0;
      refresh();
      clear(); 
   }
  }  
  refresh();
  getch();
  clear();

  endwin();
  
  return 0;
  
  
}