#include "main.h"

int main() {
	/*
	Human h("김사람", 10);
	Student s("이학생", 15, 1234567);
	Human* pH;
	pH = &h;
	pH->intro();
	pH->eat();
	pH = &s;
	pH->intro();
	pH->eat();
	*/
	//Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() };

	//for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
	//	ar[i]->draw();
//	}
	//for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
	//	delete ar[i];
	//}
	/*
	point p(1, 1, 'P');
	Circle c(20, 10, 'C', 12);

	p.show();
	c.show();

	_getch();
	p.move(40, 1);
	_getch();
	c.move(40, 10);
	getch();
	*/
	/*
	Base* pB;
	pB = new Derived;
	delete pB;
	*/
	/*Shape* pS[3];
	pS[0] = new Line;
	pS[1] = new Circle;
	pS[2] = new Rect;

	for (int i = 0; i < 3; i++) {
		pS[i]->draw();
	}

	for (int i = 0; i < 3; i++) {
		delete pS[i];
	}
	*/
	int a = max(1, 2);
	double b = max(1.1, 2.2);
	int c = max<int>(2, 3.14);

	printf("c=%d\n", c);

	unsigned u = cast<unsigned>(1234);
	double d = cast<double>(5678);
	
	printf("u=%d, d= %f\n", u, d);
}
  