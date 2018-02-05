//its just an array example
//find the sum of all the value inside the array
#include <iostream>
using namespace std;

int ary[]={4,8,4,6,4};

int n, result=0;

int main()
{
  
	for(n=0;n<5;n++)
	{
		result += ary[n];
	}
	cout<<result;
	

}
