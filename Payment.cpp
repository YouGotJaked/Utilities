#include "Payment.h"

using std::cout;
using std::endl;

// CONSTRUCTOR
Payment::Payment(int num_roommates) {
    this->total = 0;
    this->num_roommates = num_roommates;
    this->due_date = new Date();
}

// HELPER MEMBER FUNCTIONS
void Payment::submenu(void (*usr_input)()) {
    cout << " --------------" << endl
         << "| Payment Menu |" << endl
         << " --------------" << endl
         << "Enter the number of the action you would like to perform:" << endl
         << "[1]\tStart a new payment" << endl
         << "[2]\tView most recent payment" << endl
         << "[3]\tView/edit an existing payment" << endl
         << "[4]\tReturn to main menu" << endl
         << "[-1]\tExit program" << endl;
    
    char line[64];
    int choice;
    
    // loop until user inputs a valid integer
    while (true) {
        fgets(line, sizeof(line), stdin);
        // select from 1-4 and -1
        if (sscanf(line, "%d", &choice) != 1|| !(choice >= 1 && choice <= 4)) {
            cout << "Please enter a valid input." << endl;
        } else {
            break;
        }
    }
    
    switch (choice) {
        case 1:
            // start new payment
            cout << "Start new payment from Payment menu" << endl;
            break;
        case 2:
            // view most recent (last entry in vector)
            cout << "View most recent payment" << endl;
            break;
        case 3:
            // view edit an existing payment (list all payments and their index)
            cout << "
            break;
        case 4:
            // return to main menu
            (*usr_input)();
        case -1:
            return;
        default:
            break;
    }
}

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Payment &p) {
    out << "Total:\t\t$" << p.get_total() << endl;
    out << "Split Total:\t$" << p.get_split_total() << " per person" << endl;
    out << "Due Date:\t" << p.get_due_date();
    return out;
}
