/* FILE: Payment.h
 * CLASS PROVIDED: Payment
 *
 * CONSTRUCTOR
 * MODIFICATION MEMBER FUNCTIONS
 * CONSTANT MEMBER FUNCTIONS
 */

#ifndef PAYMENT_H
#define PAYMENT_H
#include <vector> // provides vector
#include "Roommate.h" // provides Roommate class
#include "Date.h" // provides Date class

using std::vector;

class Payment {
    
public:
    // CONSTRUCTOR
    Payment();
    Payment(int num_roommates);
    
    // HELPER MEMBER FUNCTIONS
    void submenu(void (*usr_input)());
    
    // MODIFICATION MEMBER FUNCTIONS
    void add_roommate(Roommate r) { roommates.push_back(r); }
    void add_due_date(Date d) { this->due_date = &d; }
    
    // CONSTANT MEMBER FUNCTIONS
    double get_total() const { return this->total; }
    double get_split_total() const { return this->total / this->num_roommates; }
    double get_interest() const;
    Date get_due_date() const { return *this->due_date; }
    
private:
    double total;
    int num_roommates;
    Date *due_date;
    vector<Roommate> roommates;
    
    // PRIVATE HELPER FUNCTIONS

};

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Payment& p);

#endif /* PAYMENT_H */
