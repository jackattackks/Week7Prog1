//
//  Birthday.cpp
//  Week7Prog1
//
//  Created by Jackie on 3/6/21.
//

#include "Birthday.hpp"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y){
    month = m;
    day = d;
    year = y;
    
    
}

void Birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
}
