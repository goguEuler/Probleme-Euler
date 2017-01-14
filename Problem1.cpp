//============================================================================
// Name        : ProjectEuler.cpp
// Author      : Angheloiu Grigore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

int n=1000;
int i=0;
long sum=0;

while (i<n)
{
	if ( ((i%3)==0) || ((i%5)==0))
	{
		sum=sum+i;
	    cout<<"i="<<i<<endl;
	    cout << "Suma este: "<<sum<<endl;
	    
	}	
	else {
		
	}
	i++;
	
}
	cout << "Suma este: "<<sum<<endl; // prints !!!Hello World!!
	return 0;
}
