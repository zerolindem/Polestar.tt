#include <iostream>
//C++里编译器是根据运算符重载函数参数表里是否插入关键字int来区分前置还是后置运算
class TDPoint//三维坐标
{
private:
	int x;
	int y;
	int z;
public:
	TDPoint(int x=0,int y=0,int z=0)
	{
		this->x=x;
		this->y=y;
		this->z=z;
	}
	TDPoint operator++();//成员函数重载前置运算符++
	TDPoint operator++(int);//成员函数重载后置运算符++
	friend TDPoint operator++(TDPoint& point);//友元函数重载前置运算符++
	friend TDPoint operator++(TDPoint& point,int);//友元函数重载后置运算符++
	void showPoint();
};

TDPoint TDPoint::operator++()
{
	++this->x;
	++this->y;
	++this->z;
	return*this;//返回自增后的对象
}

TDPoint TDPoint::operator++(int)
{
	TDPoint point(*this);
	this->x++;
	this->y++;
	this->z++;
	return point;//返回自增前的对象
}

TDPoint operator++(TDPoint& point)
{
	++point.x;
	++point.y;
	++point.z;
	return point;//返回自增后的对象
}

TDPoint operator++(TDPoint& point,int)
{
	TDPoint point1(point);
	point.x++;
	point.y++;
	point.z++;
	return point1;//返回自增前的对象
}

void TDPoint::showPoint()
{
	std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
}

int main()
{
	TDPoint point(1,1,1);
	point.operator++();//或++point
	point.showPoint();//前置++运算结果

	point=point.operator++(0);//或point=point++
	point.showPoint();//后置++运算结果

	operator++(point);//或++point;
	point.showPoint();//前置++运算结果

	point=operator++(point,0);//或point=point++;
	point.showPoint();//后置++运算结果

	return 0;
}