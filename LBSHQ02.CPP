/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 14
Labsite Question No. 02 "Write a program to print sum of two numbers"
Programme: BCS
Date: 15 November 2016
*/

#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int num1, num2, sum;
	printf("Enter first number \n");
	scanf("%d", &num1);
	printf("Enter second number \n");
	scanf("%d", &num2);
	sum=num1+num2;
	printf("Sum of %d & %d is %d", num1, num2, sum);
	getch();
}