//
//  Birthday.hpp
//  Week7Prog1
//
//  Created by Jackie on 3/6/21.
//

#ifndef Birthday_hpp
#define Birthday_hpp

#include <stdio.h>

class Birthday {
    public:
        Birthday(int m, int d, int y);
        void printDate();
       
    private:
        int month;
        int day;
        int year;
};
#endif /* Birthday_hpp */
