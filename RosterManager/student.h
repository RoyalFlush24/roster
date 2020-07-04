//
//  student.hpp
//  RosterManager
//
//  Created by Caroline Savio-Ramos on 6/30/20.
//  Copyright © 2020 Caroline. All rights reserved.
//

#ifndef student_h
#define student_h
#include "degree.h"
#include <string>
#include <iostream>

using namespace std;

#define NUMCOURSES 3

//Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
//•  student ID
//•  first name
//•  last name
//•  email address
//•  age
//•  array of number of days to complete each course
//•  degree program

class Student {
public:
 // D2d. constructor using all the input parameters provided in the table
    Student(string id, string fName, string lName, string eMail, int age, int daysToComplete[], DegreeProgram degreeProgram);
    ~Student();

//Getters
    string GetId();
    string GetfName();
    string GetlName();
    string GetEmail();
    int GetAge();
    int *GetDaystoComplete();
    DegreeProgram GetDegreeProgram();

//Setters
    void SetId(string id);
    void SetfName(string fName);
    void SetlName(string lName);
    void SetAge(int age);
    void SetEmail(string eMail);
    void SetDaystoComplete(int daysToComplete[]);
    void SetDegreeProgram(DegreeProgram degreeProgram);

//print() to print specific student data
    void print();

//D1, D2c. variables accessible only internally
private:
    string id;
    string fName;
    string lName;
    int age;
    string eMail;
    int *daysToComplete;
    DegreeProgram degreeProgram;
};

#endif /* student_hpp */
