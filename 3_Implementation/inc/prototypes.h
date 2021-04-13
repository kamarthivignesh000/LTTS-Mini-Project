/**
 * @file prototypes.h
 * @author Vinay B C (https://github.com/vinaybc)
 * @brief This file includes function prototypes, global variables and structure declaration
 * @date 2021-04-08
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief Gets the data from user and updates the list of data
 * 
 * @param s 
 */
void add(struct student s[]);

/**
 * @brief shows the previous attendance percentage required for exams and get the data from the user and update the eligibility for the exams.
 * 
 * @param s 
 */
void eligibleStudents(struct student s[]);

/**
 * @brief shows the available choices for the software and will perform the below functionality using Switch Statements.
 * 
 */
void execute();

/**
 * @brief  iterate over the list of students and print the details of the student.
 * 
 * @param s 
 */
void printStudents(struct student s[]);
/**
 * @brief gets the student roll number to delete the student record and update the student’s list.
 * 
 * @param s 
 */
void deleteRecord(struct student s[]);

int option = 0;
int i = 0;
int n = 0;
int j = 0;
float present = 75.00;
char money = 'P';
float tdays = 1;

/**
 * @brief Student structure (conatins the details about student)
 * 
 */
struct student {
	char name[20];
	int rno;
	char fees;
	float days;
	float attend;
} s[50];
