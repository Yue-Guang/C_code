#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
int arr[10] = { 0 };
int i = 1;
int sz = sizeof(arr) / sizeof(arr[0]);
for (i = 0; i < sz; i++)
{
	scanf("%d", &arr[i]);

}
int sum = 0;
for (i = 0; i < sz; i++)
{
	sum += arr[i];

}
printf("%d ", sum);
return 0;
}