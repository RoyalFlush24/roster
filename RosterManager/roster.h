//
//  roster.hpp
//  RosterManager
//
//  Created by Caroline Savio-Ramos on 7/1/20.
//  Copyright © 2020 Caroline. All rights reserved.
//

#ifndef roster_h
#define roster_h

#include <stdio.h>
#include <iostream>
#include "student.h"
#include "degree.h"



////Create a Roster class (roster.cpp) by doing the following:
//
//1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//2.  Create a student object for each student in the data table and populate classRosterArray.
//
//a.  Parse each set of data identified in the “studentData Table.”
//
//b.  Add each student object to classRosterArray.

class Roster {
public:
    Roster(const string studentData[], int sizeofStudentData, int maxCapacity);
    ~Roster();
    void ParseId(string data);

    //E3a through f Define the following functions:
    void add(string id, string fName, string lName, string eMail, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string id);
    void printAll();
    void printAverageDaysInCourse(string id);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

// assuming that there is a max capacity of students on the roster
private:
    int maxCapacity;
    int studentCount;
    Student* *classRosterArray;
};

#endif /* roster_h */
