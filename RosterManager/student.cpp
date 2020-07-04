//
//  student.cpp
//  RosterManager
//
//  Created by Caroline Savio-Ramos on 6/30/20.
//  Copyright © 2020 Caroline. All rights reserved.
//

#include "student.h"
#include "degree.h"

Student::Student(string id, string fName, string lName, string eMail, int age, int daysToComplete[], DegreeProgram degreeProgram) {
    this->id = id;
    this->fName = fName;
    this->lName = lName;
    this->age = age;
    this->eMail = eMail;
    this->daysToComplete = new int[NUMCOURSES];
    for (int i = 0; i < NUMCOURSES; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

//garbage collection
Student::~Student(){
    delete[] daysToComplete;
}

//D2a. getter implementations
string Student::GetId() {
    return id;
}

string Student::GetfName() {
    return fName;
}

string Student::GetlName() {
    return lName;
}

int Student::GetAge() {
    return age;
}

string Student::GetEmail() {
    return eMail;
}

int *Student::GetDaystoComplete() {
    return daysToComplete;
}
DegreeProgram Student::GetDegreeProgram() {
    return degreeProgram;
}


//D2b. setter implementations
void Student::SetId(string id) {
    this->id = id;
    return;
}
void Student::SetfName(string fName) {
    this->fName = fName;
    return;
}
void Student::SetlName(string lName) {
    this->lName = lName;
    return;
}

void Student::SetAge(int age) {
    this->age = age;
    return;
}

void Student::SetEmail(string eMail) {
    this->eMail = eMail;
    return;
}

void Student::SetDaystoComplete(int daysToComplete[]) {
    for (int i = 0; i < NUMCOURSES; i++)  {
        this->daysToComplete[i] = daysToComplete[i];
    }
}

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
    return;
}


//D2e. print() to print specific student data
//E3c. print in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
void Student::print(){
    cout << id  << '\t' << "First name: " << fName << '\t' << "Last name: " << lName << '\t';
    cout << "Email: " << eMail << '\t' << "Age: " << age << '\t' << "Days In Course: " ;
    
    cout << "{";
    
    for (int i = 0; i < NUMCOURSES; i++) {
        cout << daysToComplete[i];
        if (i != NUMCOURSES-1) {
            cout << ", ";
        }
    }
    cout << "}";
    cout << '\t';
    cout << "Degree Program: ";
    
    switch(degreeProgram) {
        case SECURITY :
            cout << "SECURITY";
            break;
        case NETWORK :
            cout << "NETWORK";
            break;
        case SOFTWARE :
            cout << "SOFTWARE";
            break;
        case INVALID :
            cout << "INVALID";
            break;
    }
    cout << endl;
    return;
}
