#include "defs.h"

FUNCTION printRoll(names, major, years, ids) {
    PRINT "Class Roll"

    FOR i from 0 to (size of names - 1) 
        IF years[i] is Freshman 
            yearsString = "Freshman"
        ELSE IF years[i] is Sophmore 
            yearsString = "Sophmore"
        ELSE IF years[i] = "Junior"
            yearString = "Junior"
        ELSE
            yearString = "Senior"
    for (lengthof(vector)){
        PRINT names[i], major[i], yearString, ids[i]
    }
    
    END function
}