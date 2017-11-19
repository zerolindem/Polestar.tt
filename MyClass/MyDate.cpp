#include "MyDate.h"
#include<iostream>
using namespace std;
MyDate::MyDate(){
	cout<<"Mydate"<<endl;
}
MyDate::MyDate(int year,int month,int day){
	this->year=year;
	this->month=month;
	this->day=day;
}
MyDate::~MyDate(){
	cout<<"~MyDate"<<endl;
}
void MyDate::setDate(MyDate date){
	this->year=date.year;
	this->month=date.month;
	this->day=date.day;
}
void MyDate::setDate(int year,int month,int day){
	this->year=year;
	this->month=month;
	this->day=day;
}
int MyDate::getYear(){
	return this->year;
}