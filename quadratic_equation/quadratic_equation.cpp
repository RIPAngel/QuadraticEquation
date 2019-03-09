// quadratic_equation.cpp : main algorithm	
//
//		Quadratic Equation Algorithm
//		Made By HyunCha (telegram @sakurafc)
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#pragma execution_character_Set("utf-8")


float a, b, c = 0;
int GetEquationNum();

int main()
{
	float d = 0;
	float droot = 0;
	float resf, rese = 0;
	GetEquationNum();
	d = (b * b) - (4 * a * c); // 판별식
	if (d < 0) { // 근이 없을때
		printf("\n근이 존재하지 않습니다.");
		system("pause");
	}
	else {
		if (d == 0) { // 중근
			b = -b;
			resf =  b / (a * 2);
			rese = resf;
			printf("\n근은 %f입니다. (중근)", resf);
			system("pause");

		}
		else if (d > 0) { // 근 두개
			droot = sqrt(d);
			b = -b;
			resf = (b - droot) / (a * 2);
			rese = (b + droot) / (a * 2);
			printf("\n근은 %f와 %f입니다.", resf, rese);
			system("pause");
		}
	}
	return 0;
}
int GetEquationNum() {
	printf("이차항의 계수?\n"); // get ax^2 part
	scanf_s("%f", &a);
	
	printf("일차항의 계수?\n"); // get bx part
	scanf_s("%f", &b);

	printf("상수항?\n"); // get c (number)
	scanf_s("%f", &c);
	return 0;
}

    