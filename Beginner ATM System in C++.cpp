#include <iostream>
using namespace std;

// ===== Functions for ATM ===== 

// ===== Show Menu Function =====
void showMenu(){
    
    cout << "\n========== ATM MENU ==========\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";

};

// ===== Deposit Function =====
void deposit(double balance){
    double amount;

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;

    balance = balance + amount;

    cout << "Deposit Successful\n";
    cout << "New Balance = " << balance << endl;
}

// ===== Check Balance Function =====

void checkBalance(double balance){
    cout << "\nCurrent Balance = " << balance << " EGP\n";
}

// ===== Withdraw Function =====
void withdraw(double balance){
    double amount;

    cout << "\nEnter Withdraw Amount: ";
    cin >> amount;

    if(amount <= balance){
        balance = balance - amount;

        cout << "Withdraw Successful\n";
        cout << "New Balance = " << balance << endl;
    }
    else
    {
        cout << "Insufficient Balance\n";
    }

};


// ===== Main =====

int main(){
    
    double balance = 2000;
    int choice;

    do
    {
        
        showMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                deposit(balance);
                break;

            case 2:
                withdraw(balance);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                cout << "\nThank You For Using ATM System\n";
                cout << "Created by Abdullah Ahmed\n";
                break;
            default:
                cout << "\nInvalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}
