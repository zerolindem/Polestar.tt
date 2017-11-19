#include <stdio.h>
typedef void (*FunPointer)(int);
typedef struct {
	FunPointer myFunPointer;
}Pointer;
void output(int a) {
	printf("hello%d\n", a);
}
int main(){
	Pointer myPointer;
    myPointer.myFunPointer=output;
	myPointer.myFunPointer(7);
	return 0;
}