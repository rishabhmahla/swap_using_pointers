#include <iostream>

using namespace std;

void myswap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}	

int main()
{
 int a=9;
 int b= 8;
 int *aptr=&a;
 int *bptr = &b;
 cout<<"The values before swapping a: "<<a<<" and b: "<<b<<endl;
 myswap(aptr,bptr);
 cout<<"The values after swapping  a: "<<a<<" and b: "<<b<<endl;
 
 return 0;
}


