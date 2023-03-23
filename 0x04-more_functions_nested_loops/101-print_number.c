#include "main.h" 
 
/** 
* main - tests function that prints if integer is positive or negative 
* Return: 0 
*/ 
 
int main(void) 
{ 
 int i; 
 
 i = 98 % 2; 
 positive_or_negative(i); 
 
 return (0); 
}
0-main.c
مديني الايرور ده
#include "main.h" 
 
/** 
 * print_number - Prints an integer. 
 * 
 * @n: The integer to be printed. 
*/ 
 
void print_number(int n) 
{ 
 unsigned int num = n; 
 
 /*first check if its negative*/ 
 if (n < 0) 
 { 
  _putchar('-'); 
  num = -num; 
 } 
 
 /*print the first few digits*/ 
 if ((num / 10) > 0) 
  print_number(num / 10); 
 
 /*print the last digit*/ 
 _putchar((num % 10) + 48); 
}
