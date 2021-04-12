# Requirements 
 ## Introduction
 The primary purpose of school examination management Software is to simplify teachers and staff work, by automating all school exam related operations and streamlining their routine tasks.

## Research 
The education system is witnessing unparalleled growth with technology. The new technology module came into existence with a revolutionary change in the pattern and arrangements of the exam system reducing time and manual efforts.

As the conduction of the exam process is also different for all Schools, ensuring the best software embedded with awesome features will support in overall Examination Management Software.

The primary functionality of Student Management Software is to manage student exam data efficiently. Maintain security in exams with automated processes of Exam Management Software for School.

The software helps the schools to reward students with a merit system and promote them to the next standard.

One major concern on exams is it should be beneficially conducted to ensure that the deserving and right students to gain maximum rewards to their academic performance and merit-based results to their hardworking.

## Key Features of Student Academics Examination Management
1. Add/Delete the Details of the Students
2. Attendance Monitoring of the students
3. Set/Edit Eligibility criteria for exams
4. Check Eligible Students for Exams
5. Print all the records of the students

## Approach 
The idea is to form an individual function for each operation. All the functions are unified together with switch cases to form software. Below is the illustration of the functions:
1. execute(): This function will shows the available choices for the software and will perform the below functionality using Switch Statements.
Functionality:
 a. Add Student Details
 b. Show Eligible Students
 c. Delete Student Record
 d. Update Eligibility Criteria
 e. Print Details of Students

2. add(): This function that get the data from the user and update the list of the students. While adding the student into the list, check for the uniqueness of the Roll Number of the student. Details of the students to be added are:
a. Name of Student
b. Roll Number
c. Fees Status
d. Attendance Record of student

3. eligibleStudents(): This function shows the previous attendance percentage required for exams and get the data from the user and update the eligibility for the exams. It also updates the fee status required for the eligibility of exams by iterating over the List of the student records and for every student check the attendance percentage is above the percentage required and fee status of the student.

4. print_student(): This function iterate over the list of students and print the details of the student.

5. delete(): This function get the student roll number to delete the student record and update the student’s list.
