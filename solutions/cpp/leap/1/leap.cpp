#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year){
        while (year%100 == 0){
            if (year%400 == 0){
                return true;
            } else {
                return false;
            }
        }
        
        if (year%4 == 0){
            return true;
        } else {
            return false;
        }
        
    }

}  // namespace leap
