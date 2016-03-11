#include <stdio.h>


void main()
{
	int i;
	puts("1을 누르면 이메일 주소 보여주기");
	scanf("%d", &i);
	switch (i)
	{
		case 1:
			puts("doskid2@naver.com");
		break;
		case 2:
			puts("010-7630-9994");
	}
}