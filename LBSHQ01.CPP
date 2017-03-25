/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 14
Labsheet Question No.1 "Write a program to print any word."
Pogramme: BCS
Date: 15 November 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char new[20] = "TestDataInput";

    fp = fopen("new1.txt","w");
    fputc(new[20], fp);

    return 0;
}
