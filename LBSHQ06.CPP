/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 14
Labsite Question No. 06 "Write a program to print area of triangle."
Programme: BCS
Date: 15 November 2016
*/

#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	float height, base, area, ;
	printf("Enter height of a traingle: \n");
	scanf("%f", &height);
	printf("Enter base of a triangle: \n");
	scanf("%f", &base);
	area=height*base/2;
	printf("The area of a triangle is: %.2f", area);
	getch();
}
