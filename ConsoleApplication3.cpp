// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  <iostream>


float a;
float b;
float c;
float D;
float X1;
float X2;

float discriminant(float a, float b, float c)
{
	D = (b*b) - 4 * a*c;
	std::cout << "\nD=";
	std::cout << D;
	return D;
}


int main()
{
	

	std::cout << "Vedite A= ";
	std::cin >> a;

	std::cout << "Vedite B= ";
	std::cin >> b;

	std::cout << "Vedite С= ";
	std::cin >> c;

	if (a!=0 && b!=0 && c!= 0 )

	{
		D = discriminant(a, b, c);
		

		if (D > 0)
		{
			std::cout << "\nDiscriminant bolshe nuli";

			X1 = (-b + sqrt(D)) / (2 * a);
			X2 = (-b - sqrt(D)) / (2 * a);
			
			std::cout << "\n X1= ";
			std::cout << X1;
			std::cout << "\n X2= ";
			std::cout << X2;
			std::cout << "\n";
			system("\npause");
			getchar();
			return 0;
			
		}

		else if (D < 0)
		{
			std::cout << "\nNet deistv kornei";
		}

		else
		{
			std::cout << "\nEst odin koren ";
			X1 = (-b + 0) / (2 * a);
			std::cout << "\nX1= ";
			std::cout << X1;
			system("\npause");
			getchar();
			return 0;

		}

	}

	else if (a!=0 && b!=0 && c==0)
	{
		X1 = 0;
		X2 = -b/a;
		std::cout << "\nX1= ";
		std::cout << X1;
		std::cout << "\nX2= ";
		std::cout << X2;
		system("\npause");
		getchar();
		return 0;
	}

	else
	{

	}
}
