//
//  main.cpp
//  Week7Prog1
//
//  Created by Jackie on 3/6/21.
//

#include <iostream>
using namespace std;
#include "Birthday.hpp"
#include "People.hpp"


int main() {
    cout << "Name: Jackie Ocaña - Prog1 - Date: March 6, 2021" << endl;
    Birthday birthObj(12, 28, 1986);
    
    People buckyRoberts("Bucky the King", birthObj);
    buckyRoberts.printInfo();
    
}
