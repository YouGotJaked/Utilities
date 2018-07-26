/* FILE: Date.h
 * CLASS PROVIDED:
 *
 * CONSTRUCTOR
 * MODIFICATION MEMBER FUNCTIONS
 * CONSTANT MEMBER FUNCTIONS
 * PRIVATE HELPER FUNCTIONS
 *      tm_to_Date(tm t)
 * NON-MEMBER OUTPUT FUNCTIONS
 *      ostream& operator <<(ostream& out, Date& d)
 */

#ifndef DATE_H
#define DATE_H
#include <ctime> // provides struct tm
#include <iostream> // provides ostream

class Date {

public:
    // CONSTRUCTORS
    Date();
    Date(int month, int day, int year);
    Date(tm t);
    Date(const Date& other);
    
    // MODIFICATION MEMBER FUNCTIONS
    Date& operator=(const Date& other);
    
    // CONSTANT MEMBER FUNCTIONS
    int get_month() const { return this->month; }
    int get_day() const { return this->day; }
    int get_year() const { return this->year; }
    Date get_today() const;
    
    //friend std::ostream& operator <<(std::ostream& out, const Date *d);
    
private:
    int month;
    int day;
    int year;
};

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Date &d);


#endif /* DATE_H */
