//
//  People.hpp
//  Week7Prog1
//
//  Created by Jackie on 3/6/21.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
#include <string>
using namespace std;
#include "Birthday.hpp"

class People{
public:
    People(string x, Birthday bo);
    void printInfo();
private:
    string name;
    Birthday dateOfBirth;
    
};


#endif /* People_hpp */
