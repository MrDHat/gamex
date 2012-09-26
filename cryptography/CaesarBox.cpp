//sg

#include<math.h>
#include<string.h>
#include<iostream>
#include "CaesarBox.h"
using namespace std;
CaesarBox::CaesarBox(char * message)
{
this->message=message;	
length=strlen(message);
/*Adjust power if not already a power of two*/
	if(length&1!=0) //length not power of 2
	{
			int newL=power2(length);
			cout<<newL<<"\n";
			char * temp=new char[length];
			strcpy(temp,message);
			//delete message;
			message=new char[newL];
			strcpy(message,temp);
			delete temp; 	
			for(int i=length;i<newL;i++)
			{
				message[i]='_';
			}
			message[newL]='\0';
			length=newL;
	}
	dimension=sqrt(length);
	matrix=new char * [dimension];	
	int ptr=0;
	for(int i=0;i<dimension;i++)
	{
		matrix[i]=new char[dimension+1];
		for(int j=0;j<dimension;j++)
		{
			matrix[i][j]=message[ptr++];
		}
		matrix[i][dimension]='\0';
	}
}
/*Finding closest power of 2 for 32 bit numbers*/
int CaesarBox::power2(int x)
{
	--x;
	x=x|(x>>1);
	x=x|(x>>2);
	x=x|(x>>4);
	x=x|(x>>8);
	x=x|(x>>16);
	++x;
	return x;
}
void CaesarBox::encrypt()
{
	
	transpose();
	
}
void CaesarBox::transpose()
{
	int temp;
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<i;j++)
		{
		//	cout<<"matrix (" <<i<<","<<j<<" ) = " <<matrix[i][j]<<"\n";
		//	cout<<"matrix (" <<j<<","<<i<<" ) = " <<matrix[j][i]<<"\n";
			
			temp=matrix[j][i];
			matrix[j][i]=matrix[i][j];
			matrix[i][j]=temp;
		}
	}
	
}
void CaesarBox::decrypt()
{
	transpose();
}
void CaesarBox::dumpMatrix()
{
	for(int i=0;i<dimension;i++)
	{
		
		cout<<matrix[i]<<"\n";
	}
cout<<"\n\n";
}

int main()
{
	CaesarBox c("thisisgoo");
	c.dumpMatrix();
	c.encrypt();
	c.dumpMatrix();
	c.decrypt();
	c.dumpMatrix();
	return 0;
}


