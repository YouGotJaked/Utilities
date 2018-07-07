#include "Date.h"

// CONSTRUCTORS
Date::Date(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

Date::Date(tm t) {
    this->month = 1 + t.tm_mon; // starts with 0
    this->day = t.tm_mday;
    this->year = 1900 + t.tm_year; // starts with 1900
}

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Date& d) {
    out << "Date:\t" << d.get_month() << "-" << d.get_day() << "-" << d.get_year() << std::endl;
    return out;
}
