#include <iostream>
//C++��������Ǹ�����������غ������������Ƿ����ؼ���int������ǰ�û��Ǻ�������
class TDPoint//��ά����
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
	TDPoint operator++();//��Ա��������ǰ�������++
	TDPoint operator++(int);//��Ա�������غ��������++
	friend TDPoint operator++(TDPoint& point);//��Ԫ��������ǰ�������++
	friend TDPoint operator++(TDPoint& point,int);//��Ԫ�������غ��������++
	void showPoint();
};

TDPoint TDPoint::operator++()
{
	++this->x;
	++this->y;
	++this->z;
	return*this;//����������Ķ���
}

TDPoint TDPoint::operator++(int)
{
	TDPoint point(*this);
	this->x++;
	this->y++;
	this->z++;
	return point;//��������ǰ�Ķ���
}

TDPoint operator++(TDPoint& point)
{
	++point.x;
	++point.y;
	++point.z;
	return point;//����������Ķ���
}

TDPoint operator++(TDPoint& point,int)
{
	TDPoint point1(point);
	point.x++;
	point.y++;
	point.z++;
	return point1;//��������ǰ�Ķ���
}

void TDPoint::showPoint()
{
	std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
}

int main()
{
	TDPoint point(1,1,1);
	point.operator++();//��++point
	point.showPoint();//ǰ��++������

	point=point.operator++(0);//��point=point++
	point.showPoint();//����++������

	operator++(point);//��++point;
	point.showPoint();//ǰ��++������

	point=operator++(point,0);//��point=point++;
	point.showPoint();//����++������

	return 0;
}