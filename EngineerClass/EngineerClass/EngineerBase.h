//
//  EngineerBase.hpp
//  EngineerClass
//
//  Created by Ahdab Nasir on 01/04/2018.
//  Copyright © 2018 Ahdab Nasir. All rights reserved.
//

#ifndef EngineerBase_h
#define EngineerBase_h

#include <string>

class EngineerBase {
    
private:
    std::string firstName;
    std::string lastName;
    std::string engineerID;
    
public:
    EngineerBase(const std::string &, const std::string &, const std::string &);
    virtual ~EngineerBase() {}
    
    void setFName(const std::string &);
    std::string getFName() const;
    void setLName(const std::string &);
    std::string getLName() const;
    void setID(const std::string &);
    std::string getID() const;
    
    virtual double totalSalary() const=0;
    virtual void print() const;
    
};



#endif /* EngineerBase_h */
