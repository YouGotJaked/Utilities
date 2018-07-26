#include <iostream>
#include <ctime>
#include "Payment.h"
#include "Date.h"
#include "Roommate.h"
#include <unistd.h>

using std::cout;
using std::endl;

// print startup banner
void startup() {
    /*
    cout << "#########################################" << endl
         << "#\tB7 Utilities Application\t#" << endl
         << "#########################################" << endl;
     */
    cout << " ____ ______   _    _ _   _ _ _ _   _                                  _ _           _   _" << endl
         << "|  _ \\____  | | |  | | | (_) (_) | (_)               /\\               | (_)         | | (_)" << endl
         << "| |_) |  / /  | |  | | |_ _| |_| |_ _  ___  ___     /  \\   _ __  _ __ | |_  ___ __ _| |_ _  ___  _ __" << endl
         << "|  _ <  / /   | |  | | __| | | | __| |/ _ \\/ __|   / /\\ \\ | '_ \\| '_ \\| | |/ __/ _` | __| |/ _ \\| '_ \\" << endl
         << "| |_) |/ /    | |__| | |_| | | | |_| |  __/\\__ \\  / ____ \\| |_) | |_) | | | (_| (_| | |_| | (_) | | | |" << endl
         << "|_____/_/     \\______/\\__|_|_|_|\\__|_|\\___||___/ /_/    \\_\\ .__/| .__/|_|_|\\___\\__,_|\\__|_|\\___/|_| |_|" << endl
         << "                                                          | |   | |" << endl
         << "                                                          |_|   |_|" << endl;
}

void initialize() {
    // check if a payment has been created yet, starts a new one if not
}

void menu() {
    cout << "##########################" << endl
         << "##\tMain Menu\t##" << endl
         << "##########################" << endl
         << "Enter the number of the action you would like to perform:" << endl
         << "[1]\tStart a new payment" << endl
         << "[2]\tView most recent payment" << endl
         << "[3]\tView/edit an existing payment" << endl //separate sub-menu for Payment" << endl
         << "[-1]\tExit" << endl;
}

// print current date
Date current_date() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    Date today(*ltm);
    cout << "Today's Date:\t" << today << endl;
    return today;
}

int main() {
    startup();
    menu();
    Date today = current_date();
    Payment p(4);
    cout << p << endl;
    p.submenu();
    // next payment: $amount due on $date
    // active members:
    // payments left:
    // interest due:
}

