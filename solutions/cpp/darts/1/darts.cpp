#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(float x, float y){
        float distance = std::sqrt(x*x + y*y);
        
        if (distance <=1){
            return 10;
        } else if (distance <=5){
            return 5;
        } else if (distance <= 10){
            return 1;
        } else {
            return 0;
        }
    }

}  // namespace darts
