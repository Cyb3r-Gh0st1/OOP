#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:
    string name;
    string subject;
    void introduce() {
        cout << "I am " << name << " and I teach " << subject << "." << endl;
    }
};

// Class for ATM
class ATM {
public:
    string location;
    double balance;
    void displayInfo() {
        cout << "ATM located at " << location << " has a balance of $" << balance << "." << endl;
    }
};

// Class for Biometric
class Biometric {
public:
    string type;
    string id;
    void authenticate() {
        cout << "Authenticating using " << type << " with ID " << id << "." << endl;
    }
};

// Class for Doctor
class Doctor {
public:
    string name;
    string specialty;
    void diagnose() {
        cout << "Dr. " << name << " specializes in " << specialty << "." << endl;
    }
};

// Class for Employee
class Employee {
public:
    string name;
    int id;
    void work() {
        cout << "Employee " << name << " with ID " << id << " is working." << endl;
    }
};

// Class for Driver
class Driver {
public:
    string name;
    string licenseNumber;
    void drive() {
        cout << "Driver " << name << " with license number " << licenseNumber << " is driving." << endl;
    }
};

// Class for Security Guard
class SecurityGuard {
public:
    string name;
    string shift;
    void patrol() {
        cout << "Security Guard " << name << " is on " << shift << " shift." << endl;
    }
};

// Class for Manager
class Manager {
public:
    string name;
    int teamSize;
    void manage() {
        cout << "Manager " << name << " manages a team of " << teamSize << " people." << endl;
    }
};

int main() {
    // Creating objects for each class
    Teacher teacher1;
    teacher1.name = "Alice";
    teacher1.subject = "Mathematics";
    teacher1.introduce();

    ATM atm1;
    atm1.location = "Downtown";
    atm1.balance = 50000.0;
    atm1.displayInfo();

    Biometric biometric1;
    biometric1.type = "Fingerprint";
    biometric1.id = "FP12345";
    biometric1.authenticate();

    Doctor doctor1;
    doctor1.name = "John";
    doctor1.specialty = "Cardiology";
    doctor1.diagnose();

    Employee employee1;
    employee1.name = "Emma";
    employee1.id = 101;
    employee1.work();

    Driver driver1;
    driver1.name = "Mike";
    driver1.licenseNumber = "DL67890";
    driver1.drive();

    SecurityGuard guard1;
    guard1.name = "Tom";
    guard1.shift = "Night";
    guard1.patrol();

    Manager manager1;
    manager1.name = "Sarah";
    manager1.teamSize = 10;
    manager1.manage();

    return 0;
}
