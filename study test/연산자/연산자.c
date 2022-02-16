#include<stdio.h>

int main()
{
	//int sum = 427;
	//int num = 127; // char 범위가 -128~127이기 때문에 127까지는 정상적으로 계산이 되지만 128을 넘어가면 원하는 계산값이 나오지 않음
	//int a = (char)num;

	//printf("평균 = %d\n", sum / num);
	//printf("평균 = %f\n", (double)sum / (char)num); double은 실수로 바꿔준다.

	int sum = 300;
	int num = 231;
	
	printf("정수평균 = %d\n", sum / num);
	printf("실수평균 = %f\n", sum / (double)num);



//}
	//int a = 3;
	//double d = 2.41;

	//int b = a + d;
	//printf("b = %d\n", b);    // %d 정수 값 출력 %f는 실수 값 출력한다.
	// 
	//---------------------------------------------
	// 
	int a = 5;
	a = a * 2 + 1;
	printf("a=%d\n", a);

	a = 5;
	a  *= 2 + 1;
	printf("a=%d\n", a);
	// 둘이서 복합대입연산자로 같아 보이지만 두개를 풀어서 써보면 위에것은 (a*2)+1 밑에는 a*(2+1)임 복합대입연산자의 경우는 잘 생각해서 진행해야한다.
	
}
	//int a, b;

	//a = 3;
	//b = ++a;
	//printf("전위형으로 썼을 때 : %d\n", b);

	//a = 3;
	//b = a++;
	//printf("후위형으로 썼을 때 : %d\n", b);

    //후위형 위주로 사용한다 대신 이거 나중에 반복문할때 주의점 전위형은 ++가 먼저니 a=3을 입력하면 4가 나오고 후위형은 a가 먼저니 b=3이다.
	
	//printf("3+2 = %d\n", 3 + 2);
	//printf("3-2 = %d\n", 3 - 2);
	//printf("3*2 = %d\n", 3 * 2);
	//printf("3/2 = %d\n", 3 / 2);
	//printf("5%2 = %d\n", 5 % 2); //%연산자는 남는 몫을 내보내는 것임 

//}

//int main()
//{
	//int value = 386;

	//int h = value / 100;
	//int d = value / 10 % 10;
	//int n = value % 10;

	//printf("%d\n", d);
//}