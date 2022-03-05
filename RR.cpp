#include"roundrobin.h"
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	roundrobin r;
	r.read();
	r.calc();
	r.display();
	cout<<"Press any key to exit...";
	_getch();
}