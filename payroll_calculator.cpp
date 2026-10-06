// ============================================================
// Description:  Calculates gross and average pay for an employee
//               using user input, a random employee ID, and an
//               aligned payroll table without conditional statements.
// Project name: Module 3 Group Project: Payroll Calculator
// Programmer:   Yadiel Rodriguez De La Cruz
// Date:         September 23, 2026
// ============================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int hoursWorked;
    double payRate;
    int employeeID;
    double grossPay;
    double avgPay;

    const int LABEL_WIDTH = 18;
    const int VALUE_WIDTH = 10;
    const int MIN_ID = 1000;
    const int MAX_ID = 9999;

    cout << "===============================================================\n"
         << "      Module 3 Group Project: Payroll Calculator               \n"
         << "                                                               \n"
         << " Description: Payroll Calculator                               \n"
         << " Project name: Module 3 Group Project: Payroll Calculator      \n"
         << " Programmer:   Yadiel Rodriguez De La Cruz                     \n"
         << " Date:         September 23, 2026                              \n"
         << "===============================================================\n\n";

    unsigned seed = time(0);
    srand(seed);
    employeeID = (rand() % (MAX_ID - MIN_ID + 1)) + MIN_ID;

    cout << "Assigned Employee ID: " << employeeID << "\n\n";

    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cin.ignore(10, '\n');

    cout << "Enter pay rate: ";
    cin >> payRate;
    cin.ignore(10, '\n');

    grossPay = hoursWorked * payRate;
    avgPay = grossPay / static_cast<double>(hoursWorked);

    cout << fixed << showpoint << setprecision(2);

    cout << "\n-----------------------------------\n";
    cout << "          PAYROLL TABLE            \n";
    cout << "-----------------------------------\n";

    cout << left << setw(LABEL_WIDTH) << "Employee ID:"
         << right << setw(VALUE_WIDTH) << employeeID << "\n";

    cout << left << setw(LABEL_WIDTH) << "Hours Worked:"
         << right << setw(VALUE_WIDTH) << hoursWorked << "\n";

    cout << left << setw(LABEL_WIDTH) << "Hourly Rate:"
         << "$" << right << setw(VALUE_WIDTH - 1) << payRate << "\n";

    cout << left << setw(LABEL_WIDTH) << "Gross Pay:"
         << "$" << right << setw(VALUE_WIDTH - 1) << grossPay << "\n";

    cout << "-----------------------------------\n";

    cout << left << setw(LABEL_WIDTH) << "Average Pay:"
         << "$" << right << setw(VALUE_WIDTH - 1) << avgPay << "\n";

    return 0;
}
