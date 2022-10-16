#include <iostream>
#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {
    // Variable Declaration (Use camelCase)
    string name;
    double balance, price, change, total = 0;
    int selection, secondarySelection, tertiarySelection, age;
    bool firstOperation = true;
    bool isSenior = false;
    float discount = 0.07;
    float AAAqty = 0;
    float AABqty = 0;
    float AACqty = 0;
    float ABAqty = 0; 
    float ABBqty = 0; 
    float ABCqty = 0;
    float ACAqty = 0;
    float ACBqty = 0;
    float ACCqty = 0;
    float CAAqty = 0;
    float CABqty = 0;
    float CACqty = 0;
    float CBAqty = 0; 
    float CBBqty = 0; 
    float CBCqty = 0;
    float CCAqty = 0;
    float CCBqty = 0;
    float CCCqty = 0;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "====================================================\n\n";
    cout << "    TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES     \n";
    cout << "                  Quezon City                      \n";
    cout << "         ITE001 - Computer Programming 1           \n";
    cout << "           1st Semester S.Y. 2022-2023             \n";
    cout << "                  Final Project                    \n";
    cout << "     Computerized Transaction Processing System    \n";
    cout << "                       for                         \n";
    cout << "               Uncle Andy's Pharmacy               \n";
    cout << "  Members:  Abelar, Randi Phyliz Gail -BSCS        \n";
    cout << "            Callope, Armiel Andrei - BSCS          \n";
    cout << "            Cerenio, Mac Kenzie - BSCS             \n";
    cout << "            Flores, Richard William - BSCS         \n";
    cout << "            Herrera, Antonio Rafael - BSCS         \n";
    cout << "Instructor: Ms. Jasmin A. Caliwag                  \n";
    cout << "====================================================\n\n\n\n";
    // Customer information input
    cout<<  "Customer Information Input\n";
    cout << "Please enter your name: ";

    getline(cin,name);

    cout << "Please enter your age: ";
    cin >> age;

    do {
        system("cls");

        if (age >= 60 && age <= 80) {
            cout << "Approved for senior citizen discount! Enjoy your 7% discount!";
            isSenior = true;
        }

        cout << "\n\nWelcome to Uncle Andy's Pharmacy\n";
        cout << "Customer Name: " << name << "\n";
        cout << "Please select your desired service\n";
        cout << "[1] Medicine\t\t\t[2] Vitamins & Supplements\n";
        cout << "[3] First Aid Equipment \t[4] Exit\n\n";
        cin >> selection;
        
        switch (selection) {
            case 1: // Medicine Selection
                do {
                    system("cls");

                    cout << "\nMedicine\n";
                    cout << "Select Category:\n";
                    cout << "[1] Analgesics\t\t[2] Antibiotics\n";
                    cout << "[3] Antihistamines \t [4] Back\n";
                    cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Analgesic Selection
                            do {
                                system("cls");
                                cout << "\nAnalgesics\n";
                                cout << "Select analgesic:\n";
                                cout << "[1] Acetylsalicylic Acid (Aspirin)\t\tPhp. 3.50\n";
                                cout << "[2] Ibuprofen\t\t\t\tPhp. 8.70\n";
                                cout << "[3] Naproxen Sodium\t\t\tPhp. 20.25\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> AAAqty;
                                        firstOperation = false;

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> AABqty;             
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> AACqty;
                                        firstOperation = false;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Antibiotic Selection
                            do {
                                system("cls");

                                cout << "\nAntibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "[1] Amoxicillin\t\t\tPhp. 18.75\n";
                                cout << "[2] Ampicillin\t\t\tPhp. 23.50\n";
                                cout << "[3] Azithromycin\t\t\tPhp. 88.75\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> ABAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> ABBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> ABCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }

                            }
                            while (tertiarySelection<=3);

                            break;
                        case 3: // Antihistamines Selection
                            do {
                                system("cls");

                                cout << "\nAntihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cetirizine\t\t\t Php. 15.00\n";
                                cout << "[2] Diphenhydramine\t\t Php. 8.75\n";
                                cout << "[3] Loratadine\t\t\t Php. 20.50\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> ACAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> ACBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> ACCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;
                        }
                } while (secondarySelection<=3);
                
                    break;

                    break;










            case 3: // First aid kit
                do {
                    system("cls");

                    cout << "\nFirst aid kits\n";
                    cout << "Select Category:\n";
                    cout << "[1] Plasters\t\t[2]  Elastic Bandage\n";
                    cout << "[3]  Cotton Items \t [4] Back\n";
                    cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Plasters
                            do {
                                system("cls");
                                cout << "\nPlasters\n";
                                cout << "Select Plasters:\n";
                                cout << "[1] 12 strips\t\tPhp. 26.50\n";
                                cout << "[2] 25 strips\t\t\t\tPhp. 52.50\n";
                                cout << "[3] 100 strips\t\t\tPhp. 140.00\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many 12 strips: ";
                                        cin >> CAAqty;
                                        firstOperation = false;

                                        break;
                                    case 2:
                                        cout << "How many 25 strips: ";
                                        cin >> CABqty;             
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many 100 strips: ";
                                        cin >> CACqty;
                                        firstOperation = false;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Elastic Bandage
                            do {
                                system("cls");

                                cout << "\nAntibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "[1] 2 x 5 yards\t\t\tPhp. 35.50\n";
                                cout << "[2] 4 x 5 yards\t\t\tPhp. 59.00\n";
                                cout << "[3] 6 x 5 yards\t\t\tPhp. 82.14\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        cout << "How many 2 x 5 yards : ";
                                        cin >> CBAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many 4 x 5 yards: ";
                                        cin >> CBBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many 6 x 5 yards: ";
                                        cin >> CBCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }

                            }
                            while (tertiarySelection<=3);

                            break;
                        case 3: // Cotton Items
                            do {
                                system("cls");

                                cout << "\nAntihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cotton Balls 100s\t\t\t Php. 60.00\n";
                                cout << "[2] Cotton Buds 200s\t\t Php. 35.00\n";
                                cout << "[3] Cotton Rounds 80s	\t\t\t Php. 75.00\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many Cotton Balls: ";
                                        cin >> CCAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many Cotton Buds: ";
                                        cin >> CCBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many Cotton Rounds: ";
                                        cin >> CCCqty;
                                        firstOperation = false; 


                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;
                        }
                } while (secondarySelection<=3);
                
                    break;
                 default:
                    break;
        }
    } while (selection <= 3);

    //exit condition
    if (!firstOperation) {
        total = (3.50 * AAAqty) + (8.70 * AABqty) + (20.25 * AACqty) + (18.75 * ABAqty) + (23.50 * ABBqty) + (88.73 * ABCqty) + (15.00 * ACAqty) + (8.75 * ACBqty) + (20.50 * ACCqty)+(26.50 * CAAqty) + (52.50 * CABqty) + (140.00 * CACqty) + (35.50 * CBAqty) + (59.00 * CBBqty) + (82.14 * CBCqty) + (60.00 * CCAqty) + (35.00 * CCBqty) + (75.00 * CCCqty);
        cout << "TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES\n";
        cout << "Review of Purchase:\n\n";
        cout << "Customer Name: " <<name<<"\n";
        cout << dt <<"\n";
        cout << "=====================================================================\n";
        cout << "Item\t\t\t\t\tQuantity\tTotal\n";
        cout << "=====================================================================\n";

        // Medicine Analgesics
        if (AAAqty) {
            cout << "Acetylsalicylic Acid (Aspirin)\t\t" << AAAqty << " \t\t" << AAAqty * 3.50 << "\n";
        }
        if (AABqty) {
            cout << "Ibuprofen\t\t\t\t" << AABqty << "\t\t" << AABqty * 8.70 << "\n";
        }
        if (AACqty) {
            cout << "Naproxen Sodium\t\t\t\t" << AACqty << "\t\t" << AACqty * 20.25 << "\n";
        }

        // Medicine Antibiotics
        if (ABAqty) {
            cout << "Amoxicillin\t\t\t\t" << ABAqty << "\t\t" << ABAqty * 18.75 << "\n";
        }
        if (ABBqty) {
            cout << "Ampicillin\t\t\t\t" << ABBqty << "\t\t" << ABBqty * 23.50 << "\n";
        }
        if (ABCqty) {
            cout << "Azithromycin\t\t\t\t" << ABCqty << "\t\t" << ABCqty * 88.75 << "\n";
        }
        
        // Medicine Antihistamines
        if (ACAqty) {
            cout << "Cetirizine\t\t\t\t" << ACAqty<< "\t\t" << ACAqty * 15.00 << "\n";
        }
        if (ACBqty) {
            cout << "Diphenhydramine\t\t\t\t" << ACBqty<< "\t\t" << ACBqty * 8.75 << "\n";
        }
        if (ACCqty) {
            cout << "Loratadine\t\t\t\t" << ACCqty<< "\t\t" << ACCqty * 20.50 << "\n";
        }


        
              // Case 1: Plasters
        if (CAAqty) {
            cout << "12 Strips Plasters\t\t\t\t" << CAAqty << " \t\t" << CAAqty * 26.50 << "\n";
        }
        if (CABqty) {
            cout << "25 Strips Plasters\t\t\t\t" << CABqty << "\t\t" << CABqty * 52.50 << "\n";
        }
        if (CACqty) {
            cout << "100 Strips Plasters\t\t\t\t" << CACqty << "\t\t" << CACqty * 140.00 << "\n";
        }

        // Case 2: Elastic Bandage
        if (CBAqty) {
            cout << "2 x 5 yard Bandage\t\t\t\t" << CBAqty << "\t\t" << CBAqty * 35.50 << "\n";
        }
        if (CBBqty) {
            cout << "4 x 5 yard Bandage\t\t\t\t" << CBBqty << "\t\t" << CBBqty * 59.00 << "\n";
        }
        if (CBCqty) {
            cout << "6 x 5 yard Bandage\t\t\t\t" << CBCqty << "\t\t" << CBCqty * 82.14 << "\n";
        }
        
        // Case 3: Cotton Items
        if (CCAqty) {
            cout << "Cotton Balls 100s\t\t\t\t" << CCAqty<< "\t\t" << CCAqty * 60.00 << "\n";
        }
        if (CCBqty) {
            cout << "Cotton Buds 200s\t\t\t\t" << CCBqty<< "\t\t" << CCBqty * 35.00 << "\n";
        }
        if (CCCqty) {
            cout << "Cotton Rounds 80s\t\t\t\t" << CCCqty<< "\t\t" << CCCqty * 85.00 << "\n";
        }

        
        cout << "=====================================================================\n";
        cout << "Total: " << "\t\t\t\t\t" << total;

        if (isSenior) {
            total = total - (total * discount);

            cout << " -7% = " << total;
        }

        cout << "\n=====================================================================\n";
        cout << "Enter Balance: ";
        cin >> balance;

        while (balance <= 0 || balance < total) {
            cout << "Invalid balance! Balance must be at least equal to the total price: ";
            cin >> balance;
        }

        change = balance - total;

        cout << "=====================================================================\n";
        cout << "Total Change:\t\t\t\t\t\tPhp. "<< change << "\n";
        cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
    }
    else
    cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
}