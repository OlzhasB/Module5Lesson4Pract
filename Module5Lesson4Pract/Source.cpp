#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{
	/*1. Дано целое число в двоичной системе счисления, т.е. последовательность цифр 0 и 1.
	Составить программу перевода этого числа в десятичную систему счисления*/
	int i, A[6] = { 0 };

	printf("Number in binary is:");
	for (i = 0; i < 6; i++)
	{
		A[i] = 0 + rand() % 2;
		printf("%d", A[i]);
	}

	int num = 0, j = 5;
	for (i = 0; i < 6; i++)
	{
		num += A[j] * pow(2, i);
		j--;
	}

	printf("\nNumber in decimal is: %d\n", num);
	system("pause");
}

void task2()
{
	int i, A[5][4] = { {0},{0} }, min = 20, max = 0, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		min = 20;
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] < min)
			{
				min = A[i][j];
			}
		}
		if (min > max)
		{
			max = min;
		}
	}

	printf("Max number in min numbers is %d\n", max);

	system("pause");
}




void task3()
{
	int i, A[10] = { 0 }, des, ed;

	for (i = 0; i < 10; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (i = 0; i < 10; i++)
	{
		des = A[i] / 10;
		ed = A[i] % 10;
		A[i] = (ed * 10) + des;
	}
	printf("\nNew array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}


	system("pause");
}


void task4()
{

	int i, A[10] = { 0 }, des, ed, B[10] = { 0 }, j;

	for (i = 0; i < 10; i++)
	{
		des = 1 + rand() % 7;
		ed = 1 + rand() % 7;

		A[i] = (des * 10) + ed;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNew array:\n");


	for (i = 0; i < 10; i++)
	{
		B[i] = ((A[i] / 10) * 8) + (A[i] % 10);
		printf("B[%d] = %d\n", i, B[i]);
	}


	system("pause");
}


void task6()
{
	int i, A[10] = { 0 }, count = 0, ind = 0;

	for (i = 0; i < 10; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNumbers more than right numbers:\n");
	for (i = 0; i < 9; i++)
	{
		if (A[i] > A[i + 1])
		{
			printf("A[%d] = %d\n", i, A[i]);
			count++;
		}
	}

	printf("Amount of these numbers is %d\n", count);

	system("pause");
}

void task7()
{

	int i, A[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		printf("Write number %d: ", i);
		scanf_s("%d", &A[i]);
	}

	printf("Given array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	int c, d = 0, count = 0;
	for (i = 0; i < 9; i++)
	{
		c = d;
		d = A[i + 1] - A[i];
		if (c == d)
		{
			count++;
		}
	}

	if (count == 8)
		printf("It is an arithmetic progression\n");

	else printf("It is not an arithmetic progression\n");


	system("pause");
}

void task8()
{
	int A[10] = { 0 }, i, j, R;

	printf("Given array:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 19;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("Write any number: ");
	scanf_s("%d", &R);

	int num, num1 = 20, ind;

	for (i = 0; i < 10; i++)
	{
		num = abs(R - A[i]);
		if (num < num1)
		{
			num1 = num;
			ind = i;
		}
	}
	printf("Number nearest to %d is A[%d] = %d\n", R, ind, A[ind]);

	system("pause");
}


void task9()
{
	int A[3][4] = { {0}, {0} }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 19;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int c;
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j >= i; j--)
		{
			if (A[2][j] > A[2][j + 1])
			{
				c = A[2][j];
				A[2][j] = A[2][j + 1];
				A[2][j + 1] = c;
			}
		}

	}

	printf("\nNew array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task10()
{
	/* 10. Дан двухмерный массив 7×7. Найти сумму модулей  отрицательных нечетных элементов*/

	int A[7][7] = { {0},{0} }, i, j;

	printf("Given array:\n");

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			A[i][j] = -5 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}



	printf("Odd negative numbers\n");
	int sum = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (j % 2 != 0 && A[i][j] < 0)
			{
				printf("A[%d][%d] = %d\n", i, j, A[i][j]);
				sum += abs(A[i][j]);
			}
		}
	}

	printf("\nSum of these numbers is %d\n", sum);
	system("pause");
}

void task11()
{

	int A[5][6] = { {0},{0} }, i, j, sum = 0;
	float av;

	printf("Given array:\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			A[i][j] = -5 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int count;
	for (i = 0; i < 6; i++)
	{
		sum = 0;
		count = 0;
		for (j = 0; j < 5; j++)
		{
			if (A[j][i] > 0)
			{
				count++;
				sum += A[j][i];
			}
		}
		if (count > 0)
		{
			printf("Sum of positive numbers in coloumn %d is %d\n", i, sum);
			av = float(sum) / float(count);
			printf("Average of positive numbers in coloumn %d is %.1f\n\n", i, av);
		}
		else
			printf("In coloumn %d no positive numbers\n\n", i);
	}

	system("pause");
}

void task12()
{

	int A[4][3] = { {0},{0} }, i, j;


	printf("Given array:\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int max1 = 0, max2 = 0, ind1, ind2;
	for (i = 0; i < 4; i++)
	{
		if (A[i][0] > max1)
		{
			max1 = A[i][0];
			ind1 = i;
		}
		if (A[i][2] > max2)
		{
			max2 = A[i][2];
			ind2 = i;
		}
	}

	printf("Max number in coloumn 0 is %d\n", max1);
	printf("Max number in coloumn 2 is %d\n", max2);

	A[ind1][0] = max2;
	A[ind2][2] = max1;

	printf("Changed array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
}


void task13()
{
	int A[4][4] = { {0},{0} }, i, j;

	printf("Given array:\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int min = 40, prod = 1;
	for (i = 0; i < 4; i++)
	{
		min = 40;
		for (j = 0; j < 4; j++)
		{
			if (A[j][i] < min)
			{
				min = A[j][i];
			}
		}
		printf("Min number in coloumn %d is %d\n", i, min);
		prod *= min;
	}

	printf("\nTheir production is %d\n", prod);
	system("pause");
}

void task14()
{
	int A[7][8] = { {0},{0} }, i, j;

	printf("Given array:\n");

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int odd = 0;
	for (i = 0; i < 8; i++)
	{
		odd = 0;
		for (j = 0; j < 7; j++)
		{
			if (A[j][i] % 2 != 0)
				odd++;
		}
		printf("%d odd numbers in coloumn %d\n", odd, i);
	}
	system("pause");
}

void task15()
{
	int A[4][3] = { {0},{0} }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int max = 0;
	for (i = 0; i < 3; i++)
	{
		max = 0;
		for (j = 0; j < 4; j++)
		{
			if (A[j][i] > max)
			{
				max = A[j][i];
			}
		}
		printf("Max number in %d coloumn is %d\n", i, max);
	}

	system("pause");
}


void task16()
{
	int A[4][4] = { {0},{0} }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum += A[i][3];
	}

	printf("Sum of numbers in the last coloumn is %d\n", sum);
	system("pause");
}



int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task6();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task11();

		break;
	}
	case 12:
	{
		task12();

		break;
	}
	case 13:
	{
		task13();

		break;
	}
	case 14:
	{
		task14();

		break;
	}
	case 15:
	{
		task15();

		break;
	}
	case 16:
	{
		task16();

		break;
	}
	}

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}