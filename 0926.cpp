#include<stdio.h>
int main()
{
	char a;
	short b;
	int c;
	long d;
	float e;
	double f;
	printf("%d",sizeof(char), sizeof(short),sizeof(int),sizeof(long));
	printf("%d %d\n",sizeof(float),sizeof(double));
	
	printf("%d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),
	sizeof(e));
	printf("%d %d\n",sizeof(e),sizeof(f));
	return 0;
	//sizeof 메모리 몇바이트인지 알려주는 연산자 
	
	}



