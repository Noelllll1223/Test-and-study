#include <stdio.h>
#include <cursor.h>
#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;



/*class Human
{
public:
	char name[12];
	int age;

	void intro() {
		cout << "이름 = " << name << ", 나이 = " << age << endl;
	}
};

int main() {
	Human arFriend[10] = {
		{"문동욱", 49},
		{"김유진", 49},
		{"박상막", 49},
	};

	Human* pFriend;
	pFriend = &arFriend[1];
	pFriend->intro();
}
*/
/*class human
{
public:
	char name[12];
	int age;

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};
int main() {
	human lee = { "이승준", 30 };
	lee.intro();
}*/
//int GetSum(int from, int to, int step = 1, int base = 0);

//int main() {
//	printf("%d\n", GetSum(1, 10));
//	printf("%d\n", GetSum(1, 10, 2));
//	printf("%d\n", GetSum(1, 10, 2, 10));
//}


//int GetSum(int from, int to, int step/*=1*/, int base/*=0*/)
//{
//	int sum = base;
//	for (int i = from; i <= to; i += step) {
//		sum += i;
//	}
//	return sum;
//}

/*int ar[] = {1,2,3,4,5,6};
int& GetAr(int i) {
	return ar[i];
}

int main() {

	
	GetAr(3) = 6;
	printf("ar[3]=%d\n", ar[3]);
}
*/
/*void InputName(char*& Name) {
	Name = (char*)malloc(32);
	strcpy(Name, "Kim sang hyung");
}

int main()
{
	char* Name;

	InputName(Name);
	printf("이름은 %s입니다.\n", Name);
	free(Name);
}
*/
/*void plusref2(int& t) {
	t = t + 1;
}

int main()
{
	int a = 5;
	plusref2(a);
	printf("a=%d\n", a);
}
*/
/*int main() {
	int i = 3, j = 7;
	int& t = i;

	printf("i=%d, t=%d, j=%d\n", i, t, j);
	t = j;
	printf("i=%d, t=%d, j=%d\n", i, t, j);
}
*/
/*int main() {

	int i = 3;
	int& t = i;
	
	printf("i=%d, ri=%d\n", i, t);
	t++;
	printf("i=%d, t=%d\n", i, t);
	cout << "i번지 = " << &i << " t번지 = " << &t << endl;
}
*/
/*int main()
{
	int num1, num2;
	cout << "정수 두개를 입력하여 합을 구하시오 : " ;
	cin >> num1;     
	         


	                                                                  
	cin >> num2;
	cout << "합은 " << num1 + num2 << " 입니다." << endl;
	
}
*/

/*int main() {
	double* ar;
	ar = new double[100];
	for (int i = 0; i < 100; i++)
	{
		ar[i] = i;
	
	}
	ar[50] = 3.14;
	for (int i = 0; i < 100; i++) {
		printf("%d번째 = %f\n", i, ar[i]);

	}
	delete[] ar;
}
*/
/*
class RandomNumber
{
private:
	int num;

public:
	RandomNumber() { randomize(); }
	void Generate() { num = random(100) + 1; }
	BOOL Compare(int input) {
		if (input = num) {
			printf("맞췄습니다.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("입력한 숫자보다 작습니다.\n");
		}
		else {
			printf("입력한 숫자보다 큽니다.\n");
		}
		return FALSE;
	} 

};

class Ask
{
private:
	int input;

public:
	void Prompt() { printf("\n 제가 만든 숫자를 맞춰 보세요\n"); }
	BOOL AskUser() {
		printf("숫자를 입력하세요(끝낼때는 999) : ");
		scanf_s("%d", &input);
		if (input =999) {
			return TRUE;
		}
		return FALSE;
	}
	int GetInput() { return input; }


};

int main()
{
	
	RandomNumber R;
	Ask A;

	for (;;) {
		R.Generate();
		 
		A.Prompt();
		for (;;) {
			if (A.AskUser()) {
				exit(0);
			}
			if (R.Compare(A.GetInput())) {
				break;
			}
		}
	}
}
*/