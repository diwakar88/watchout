/*
Student Name:Diwakar kandel
Subject:Programming Fund
Roll No:
Program:WAP to print area of triangle
Lab No:01
Date:28sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float first_side,second_side,third_side,side,area;
printf("Enter the first side:");
scanf("%f",&first_side);
printf("Enter the second side:");
scanf("%f",&second_side);
printf("Enter the third side:");
scanf("%f",&third_side);
side=(first_side+second_side+third_side)/2;
printf("total side of triangle=%f\n",side);
area=(squrt*side*(side-first_side)*(side-second_side)*(side-third_side));
printf("area of triangle=%f",area);
getch();
}
