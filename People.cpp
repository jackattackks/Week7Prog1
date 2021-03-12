//
//  People.cpp
//  Week7Prog1
//
//  Created by Jackie on 3/6/21.
//

#include "People.hpp"
#include <iostream>
using namespace std;
#include "Birthday.hpp"

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{
    
    
}

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
