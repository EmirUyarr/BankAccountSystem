#ifndef BANK_H
#define BANK_H

#include <iostream>

using namespace std;

class Customer {
public:
    Customer(string _name="Emir", string _surname="Uyar", int _age=20, int _accountNumber=123456, int _Balance=0); 
    ~Customer(); 
    
     
    string GetName();
    string Getsurname();
    int GetAge();
    int GetaccountNumber();
    int GetBalance();
    void Deposit(int amount);
    void Withdraw(int amount);
    
    
    friend void DisplayCustomerInfo(Customer customer);
    
private:
    string name;
    string surname;
    int age;
    int accountNumber;
    int Balance;
};

#endif































	
	
	
	

