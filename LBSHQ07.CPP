/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 14
Labsite Question No. 07 "Write a program to are and perimeter of Rectangle"
Programme: BCS
Date: 15 November 2016
*/

#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	float length, width, area, perimeter;
	printf("Enter length of rectangle \n");
	scanf("%f", &length);
	printf("Enter width of rectangle \n");
	scanf("%f", &width);
	area=length*width;
	perimeter=2*(length+width);
	printf("Area of rectangle is %.2f \n", area);
	printf("Perimeter of rectangle is %.2f \n", perimeter);
	getch();
}