
#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

using namespace std;

void runEmployeeTests(Employee & e);

int main() {
  // Test default Employee constructor
  Employee defaultE;
  cout << "Testing Employee default constructor:" << endl;
  runEmployeeTests(defaultE);

  cout << endl << endl;

  // Test parameterized Employee constructor
  // ID: 1248, years: 2, hourlyRate: 15.23, hoursWorked: 3
  Employee parameterizedE(1248, 2, 15.23, 3);
  cout << "Testing Employee parameterized constructor:" << endl;
  runEmployeeTests(parameterizedE);

  cout << endl << endl;
  
  // Test default Supervisor constructor
  Supervisor defaultS;
  cout << "Testing Supervisor default constructor:" << endl;
  runEmployeeTests(defaultS);

  cout << endl << endl;

  // Test parameterized Supervisor constructor
  // ID: 422, years: 9, hourlyRate: 55.44, hoursWorked: 20, numSupervised 52
  cout << "Testing Supervisor parameterized constructor:" << endl;
  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  runEmployeeTests(parameterizedS);

  cout << endl << endl;

  // Test default Officer constructor
  Officer defaultO;
  cout << "Testing Officer default constructor:" << endl;
  runEmployeeTests(defaultO);

  cout << endl << endl;

  // Test parameterized Officer constructor
  // ID: 2, years = 94, hourlyRate: 10.859, hoursWorked: 2, evilness 9000.1
  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  cout << "Testing Officer parameterized constructor:" << endl;
  runEmployeeTests(parameterizedO);
  
  return 0;
}

void runEmployeeTests(Employee &e) {
  
  cout << "Initial print():" << endl;
  e.print();
  cout << "Calculated Pay: " << e.calculatePay() << endl;
  cout << "Anniversary Test: ";
  e.anniversary();
  cout << "Final print():" << endl;
  e.print();

}
