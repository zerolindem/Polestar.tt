#include<iostream>
#include "MyDate.h"
using namespace std;
int main(){
	MyDate birthday(1991,9,22);
	//birthday.year=1991;
	cout<<"My age is:"<<(2014-birthday.year)<<endl;
	cout<<"#######################################"<<endl;
	MyDate mydate;;
	mydate.year=1991;
	cout<<"My age is:"<<(2014-birthday.year)<<endl;
	cout<<"sss"<<endl;
}