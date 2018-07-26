/* FILE: Roomate.h
 * CLASS PROVIDED: Roommate
 *
 * CONSTRUCTOR
 * MODIFICATION MEMBER FUNCTIONS
 *      void make_payment()
 *      void make_active()
 *      void make_inactive()
 * CONSTANT MEMBER FUNCTIONS
 *      string get_first() const
 *      string get_last() const
 *      bool get_status() const
 *      int payments_made() const
 * NON-MEMBER OUTPUT FUNCTIONS
 *      ostream& operator <<(ostream& out, Roommate& d)
 */

#ifndef ROOMMATE_H
#define ROOMMATE_H
#include <iostream> // provides ostream

using std::string;

class Roommate {

public:
    // CONSTRUCTOR
    Roommate();
    Roommate(string first, string last);
    
    // MODIFICATION MEMBER FUNCTIONS
    void make_payment() { this->payments++; }
    void make_active() { this->active = true; }
    void make_inactive() { this->active = false; }
    
    // CONSTANT MEMBER FUNCTIONS
    string get_first() const { return this->first; }
    string get_last() const { return this->last; }
    bool get_status() const { return this->active; }
    int get_payments() const { return this->payments; }

private:
    string first;
    string last;
    bool active;
    int payments;
    
    // PRIVATE HELPER FUNCTIONS

};

// NON-MEMBER HELPER FUNCTIONS
inline string bool_to_str(bool b) { return b ? "Active" : "Inactive"; }

// NON-MEMBER OUTPUT FUNCTIONS
std::ostream& operator <<(std::ostream& out, const Roommate& r);

#endif /* ROOMMATE_H */
