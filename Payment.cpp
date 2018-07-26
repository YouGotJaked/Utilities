#include "Payment.h"

using std::cout;
using std::endl;

// CONSTRUCTOR
Payment::Payment(int num_roommates) {
    this->total = 0;
    this->num_roommates = num_roommates;
    this->due_date = new Date();
}

// NON-MEMBER FUNCTIONS
void Payment::submenu() {
    cout << " --------------" << endl
         << "| Payment Menu |" << endl
         << " --------------" << endl
         << "Enter the number of the action you would like to perform:" << endl
         << "[1]\tStart a new payment" << endl
         << "[2]\tView most recent payment" << endl
         << "[3]\tView/edit an existing payment" << endl //separate sub-menu for Payment" << endl
         << "[-1]\tExit" << endl;
}

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Payment &p) {
    out << "Total:\t\t$" << p.get_total() << endl;
    out << "Split Total:\t$" << p.get_split_total() << " per person" << endl;
    out << "Due Date:\t" << p.get_due_date();
    return out;
}
