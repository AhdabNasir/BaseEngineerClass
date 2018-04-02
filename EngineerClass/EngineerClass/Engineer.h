//
//  Engineer.h
//  EngineerClass
//
//  Created by Ahdab Nasir on 08/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#ifndef Engineer_h
#define Engineer_h

#include "EngineerBase.h"
#include <string>

class Engineer: public EngineerBase {
    
private:
    double baseSalary;
    double awardedBonus;
    
public:
    Engineer(const std::string &, const std::string &, const std::string &, double=0.0, double=0.0);
    virtual ~ Engineer() {}
    
    void setBaseSalary(double);
    double getBaseSalary() const;
    void setAwardedBonus(double);
    double getAwardedBonus() const;
    
    virtual double totalSalary() const override;
    virtual void print() const override;
    
};

#endif /* Engineer_h */
