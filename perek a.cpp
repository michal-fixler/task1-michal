//אופרטורים מקוצרים switch,if
//א
//K=4
//ב
//6 -6 0 1
//ג
//20
//ד
//
//222
//33
//
//ה
//1
//מספרים אקראיים
//שינוי
//א
//1
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0)); 
    int num = rand() % 201; 
    printf("%d\n",num);

}
//2
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));  
    int num = rand() % 200;  
    printf("%d\n", num);
}
//3
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(0));
	int num = rand() % 50;
	while (num % 2 != 0)
	{
		num = rand() % 50;
	}
	printf("%d\n", num);
}

//4
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int num = rand() % 30 + 1;
    printf("%d\n", num);
}
//5
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int num = rand() % 101 + 100;
    printf("%d\n", num);
}
//6
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int num = rand() % 90 + 10; 
}
//7
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int num = rand() % 62 + (-40);
}
//8
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int num = rand() % 81 + 20;
    while (num % 2 != 0)
    {
        int num = rand() % 81 + 20;
    }
    printf("%d\n", num);
}
//ב
//num=rand()%5+2;   בין 2 ל 6 
//num=rand()%6+4;   בין 4 ל 9
//num=rand()%10-6;  בין -6 ל 3
//num=rand()%6*10;  בין 0 ל 50
//num=rand()%100/4; בין 0 ל-24 
//פונקציות
//הפלט של המעקב
//a= 7 b= 8 c= 9 x= 8 y= 2 z= 0 
//a= 9 b= 3 c= 7 x= 7 y= 4 z= 6 
//a= 7 b= 3 c= 7 x= 7 y= 4 z= 6 
//a= 2 b= 5 c= 4 x= 8 y= 5 z= 6 
//a= 4 b= 6 c= 2 x= 2 y= 7 z= 1 
//a= 2 b= 6 c= 2 x= 2 y= 7 z= 1
//פונקציות מערכים ומטריצות
//א
//#include <stdbool.h>
#include <stdio.h>
enum boolean { false, true };

enum boolian ismoreofone(int num)
{
	int monim[10] = { 0 };
	int digit;
	while (num > 0)
	{
		digit = num % 10;
		monim[digit]++;
		if (monim[digit] > 1)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}
int longs(int arr[], int len)
{
	int mikum = 0;
	int maxmikum = 0;
	for (int i = 0; i < len;)
	{
		while (!ismoreofone(arr[i]))
		{
			i++;
			mikum++;
		}
		if (mikum > maxmikum)
		{
			maxmikum = mikum;
		}
		mikum = 0;
	}
	return maxmikum;
}
//ב
#include <stdio.h>
#include <stdlib.h>
#define _SRT_SECURE_NO_WARNINGS
enum boolean { false, true };
int num1, num2;

int ezer(int mat[][num2], int row, int num2)
{
	int sum = 0;
	for (int j = 0; j < num2; j++)
	{
		sum += mat[row][j];
	}
	return sum;
}

enum boolean check(int mat[][num2], int num1, int num2)
{
	for (int i = 0; i < num1 - 1; i++)
	{
		int sum1 = ezer(mat, i, num2);
		int sum2 = ezer(mat, i + 1, num2);

		if (sum1 >= sum2)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int mat;
	printf("enter the mat len");
	scanf("%d %d", &num1, &num2);
	mat[num1][num2];
	for (int i = 0; i < num1; i++)
	{
		for (int j = 0; j < num2; j++)
		{
			scanf("%d%d", &mat[i][j]);
		}
	}

	enum boolean isRanked = check(mat, num1, num2);
	if (isRanked) {
		printf("The matrix memuienet");
	}
	else {
		printf("The matrix is not memuienet");
	}

	return 0;
}

//ג
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3
enum Boolean { false, true };
enum Boolean Func1(int arr[], int lens, int i)
{
	if (i == 0)
	{
		return true;
	}
	else if (arr[lens - i - 1] > arr[lens - i])
	{
		return false;
	}
	else
	{
		i--;
		Func1(arr, lens, i);
	}
}
int main() 
{
	int arr[N];
for (int i = 0; i < N; i++)
{
	arr[i] = i;

}
if (Func1(arr, N, N - 1))
{
	printf("good");
}
else
{
	printf("worth");
}

