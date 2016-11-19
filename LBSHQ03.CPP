/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 14
Labsite Question No. 03 "Write a program to print product of two numbers"
Programme: BCS
Date: 15 November 2016
*/

#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int num1, num2, mul;
	printf("Enter first number \n");
	scanf("%d", &num1);
	printf("Enter second number \n	");
	scanf("%d", &num2);
	mul=num1*num2;
	printf("Multiplication of %d & %d is %d", num1, num2, mul);
	getch();
}
