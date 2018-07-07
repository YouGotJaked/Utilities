#include "Roommate.h"

// CONSTRUCTOR
Roommate::Roommate(string first, string last) {
    this->first = first;
    this->last = last;
    this->active = true;
    this->payments = 0;
}

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Roommate& r) {
    out << "Name:\t" << r.get_first() << " " << r.get_last() << std::endl;
    out << "Status:\t" << bool_to_str(r.get_status()) << std::endl;
    out << "Payments Made:\t" << r.get_payments() << std::endl;
    return out;
}
