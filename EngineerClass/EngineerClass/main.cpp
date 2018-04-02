//
//  main.cpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#include <iostream>
#include "SeniorEngineer.h"
using namespace std;


int main() {

    Engineer engineer ("Thomas", "Walkers", "4", 700, 200);
    SeniorEngineer senior ("Anne", "Smith", "6", 2000, 300, 1000);
    
    engineer.print();
    cout << engineer.totalSalary();

    senior.print();
    cout << senior.totalSalary();
    
}
