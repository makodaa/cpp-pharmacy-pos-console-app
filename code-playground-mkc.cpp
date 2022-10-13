#include <iostream>
#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //Variable Declaration (Use camelCase)
    string name;
    float balance, price, change;
    int selection, secondarySelection, tertiarySelection;

    cout << "Please enter your name: ";  //Customer Information Input

    getline(cin,name);
    
    cout << "\n";
    cout << "Enter Account Balance: ";   //Account Balance Input
    cin >> balance;
    cout << "\n";
    
    do {
        cout << "Welcome to Uncle Andy's Pharmacy\n";
        cout << "Customer Name:"<<name<<"\n";
        cout << "Account Balance: Php."<<balance<<"\n";
        cout << "Please select your desired service\n";
        cout << "[1] Medicine\t\t[2] Vitamins & Supplements\n";
        cout << "[3] First Aid Equipment \t\t[4] Exit\n";
        cin >> selection;
        
        
        switch (selection) {
            case 1: //Medicine Selection
                do {
                    cout << "Medicine\n";
                    cout << "Select Category:\n";
                    cout << "[1] Analgesics\t\t[2] Antibiotics\n";
                    cout << "[3] Antihistamines\t\t[4] Exit\n";
                    cin >> secondarySelection;
                    
                    switch (secondarySelection) {
                        case 1: // Analgesic Selection
                            do {
                                cout << "Analgesics\n";
                                cout << "Select analgesic:\n";
                                cout << "[1] Acetylsalicylic Acid (Aspirin)\t\tPhp. 3.50";
                                cout << "[2] Ibuprofen\t\tPhp. 8.70";
                                cout << "[3] Naproxen Sodium\t\tPhp. 20.25";
                                cin >> tertiarySelection;
                                switch (tertiarySelection)
                                {
                                case 1:

                                    break;
                                
                                default:
                                    break;
                                }

                                /*Case 2:
                                balance = balance - 8.70;
                                */
                                
                            } while (tertiarySelection <= 4 || tertiarySelection > 4);
                            
                            break;
                        case 2: //Antibiotic Selection
                            do {
                                cout << "\nAntibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "\n[1] Amoxicillin\t Php. 18.75";
                                cout << "\n[2] Ampicillin\t Php. 23.50";
                                cout << "\n[3] Azithromycin\t Php. 88.73";
                                cout << "\n[4] Exit ";
                                cin >> tertiarySelection;
                                switch(tertiarySelection) {
                                    case 1: 
                                        cout << "\nYou have purchased Amoxicillin\n "; 
                                        break;
                                    case 2: 
                                        cout << "\nYou have purchased Ampicillin\n ";
                                        break;
                                    case 3: 
                                        cout << "\nYou have purchased Ampicillin\n ";
                                        break;
                                }
                            }
                            while (tertiarySelection<=4 ||  tertiarySelection>4); break;
                        case 3: //Antihistamines Selection
                            do {
                                cout << "Antihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cetirizine\t\t\t Php. 15.00\n";
                                cout << "[2] Diphenhydramine\t\t Php. 8.75\n";
                                cout << "[3] Loratadine\t\t\t Php. 20.50\n";

                            } while (tertiarySelection <= 4);
                            break;
                        default:
                            break;
                        }
                } while (secondarySelection<=4);
                
                    break;
                default:
                    break;
        }
    } while (selection <= 4);
}