//
//  EngineerBase.cpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 01/04/2018.
//  Copyright © 2018 Ahdab Nasir. All rights reserved.
//

#include "EngineerBase.h"
#include <stdio.h>
#include <iostream>
using namespace std;

EngineerBase::EngineerBase(const string &fname, const string &lname, const string &id) : firstName(fname), lastName(lname), engineerID(id) {
}

void EngineerBase::setFName(const string &fname) {
    firstName = fname;
}

string EngineerBase::getFName() const {
    return firstName;
}

void EngineerBase::setLName(const string &lname) {
    lastName = lname;
}

string EngineerBase::getLName() const {
    return lastName;
}

void EngineerBase::setID(const string &id) {
    engineerID = id;
}

string EngineerBase::getID() const {
    return engineerID;
}

void EngineerBase::print() const {
    cout << getFName() << " " << getLName() << " " << getID() << endl;
}
