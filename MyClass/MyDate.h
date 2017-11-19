class MyDate{
public:
	MyDate();
	MyDate(int year,int month,int day);
	~MyDate();
	void setDate(MyDate date);
	void setDate(int year,int month,int day);
	int getYear();
	int year;
	int month;
	int day;
};