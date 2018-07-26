#include "Date.h"

// CONSTRUCTORS
Date::Date() {
    Date today = get_today();
    
    this->month = today.month;
    this->day = today.day;
    this->year = today.year;
}

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

Date::Date(const Date& other) {
    *this = other;
}

// MODIFICATION MEMBER FUNCTIONS
Date& Date::operator=(const Date& other) {
    if (this != &other) {
        month = other.month;
        day = other.day;
        year = other.year;
    }
    return *this;
}

// CONSTANT MEMBER FUNCTIONS
Date Date::get_today() const {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    Date today(*ltm);
    return today;
}

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Date &d) {
    out << d.get_month() << "-" << d.get_day() << "-" << d.get_year();
    return out;
}

/*std::ostream& operator <<(std::ostream& out, const Date *d) {
    out << d->month << "-" << d->day << "-" << d->year;
    return out;
}*/
