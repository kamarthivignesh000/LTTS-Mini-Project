#include<stdio.h>

void add(struct student s[]);
void eligibleStudents(struct student s[]);
void execute();
void printStudents(struct student s[]);
void deleteRecord(struct student s[]);

int option = 0;
int i = 0;
int n = 0;
int j = 0;
float present = 75.00;
char money = 'P';
float tdays = 1;

struct student {
	char name[20];
	int rno;
	char fees;
	float days;
	float attend;
} s[50];
