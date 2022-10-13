#include <iostream>
#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //Variable Declaration (Use camelCase)
    string name;
    float balance, price, change, total;
    int selection, secondarySelection, tertiarySelection;
    int AAAqty,AABqty,AACqty,ABAqty,ABBqty,ABCqty,ACAqty,ACBqty;
    cout << "Please enter your name: ";  //Customer Information Input

    getline(cin,name);
    
    cout << "\n";
    cout << "\n";
    system("cls");
    do {
        cout << "Welcome to Uncle Andy's Pharmacy\n";
        cout << "Customer Name:"<<name<<"\n";
        cout << "Please select your desired service\n";
        cout << "[1] Medicine\t\t[2] Vitamins & Supplements\n";
        cout << "[3] First Aid Equipment \t [4] Confirm Purhcase\n";
        cout << "[5] Exit";
        cin >> selection;
        
        switch (selection) {
            case 1: //Medicine Selection
                do {
                    cout << "Medicine\n";
                    cout << "Select Category:\n";
                    cout << "[1] Analgesics\t\t[2] Antibiotics\n";
                    cout << "[3] Antihistamines \t [4] Exit\n";
                    cin >> secondarySelection;
                    system ("cls");
                    switch (secondarySelection) {
                        case 1: // Analgesic Selection
                            do {
                                cout << "Analgesics\n";
                                cout << "Select analgesic:\n";
                                cout << "[1] Acetylsalicylic Acid (Aspirin)\t\tPhp. 3.50\n";
                                cout << "[2] Ibuprofen\t\tPhp. 8.70\n";
                                cout << "[3] Naproxen Sodium\t\tPhp. 20.25\n";
                                cout << "[4] Exit\n";
                                cin >> tertiarySelection;

                                int amount;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: \n";
                                        cin >> ABAqty; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: \n";
                                        cin >> ABBqty; 


                                        break;
                                    case 3:
                                        cout << "How many tablets: \n";
                                        cin >> ABCqty; 


                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: //Antibiotic Selection
                            do {
                                cout << "Antibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "[1] Amoxicillin\t\t\tPhp. 18.75";
                                cout << "[1] Ampicillin\t\t\tPhp. 23.50";
                                cout << "[1] Azithromycin\t\t\tPhp. 88.75";
                            }
                            while (tertiarySelection<=4);

                            break;
                        case 3: //Antihistamines Selection
                            do {
                                cout << "Antihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cetirizine\t\t\t Php. 15.00\n";
                                cout << "[2] Diphenhydramine\t\t Php. 8.75\n";
                                cout << "[3] Loratadine\t\t\t Php. 20.50\n";
                                cout << "[4] Exit\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:

                                            balance = balance - 8.75;
                                        cout << "You have purchased Cetirizine, your remaining balance is now" << balance << ".\n";
                                        break;

                                    case 2:

                                            balance = balance - 8.75;
                                        cout << "You have purchased Diphenhydramine, your remaining balance is now" << balance << ".\n";
                                        break;

                                    case 3:
                                    
                                            balance = balance - 20.50;
                                        cout << "You have purchased Loratadine, your remaining balance is now" << balance << ".\n";
                                        break;

                                    default:
                                break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            break;
                        }
                } while (secondarySelection<=3);
                
                    break;
                default:
                    break;
        }
    } while (selection <= 3);
    cout<<"Review of Purchase:\n\n";
    cout<<"Item\t\tQuantity\t\tTotal\n";
    /*if (acetylsalicylicAcid!=0)
    {
        cout<<"Acetylsalicylic Acid"/*<<Acetylsalicylic<<Acetylasicylic*3.50;
    }
    
    change= balance-total;
    if(change < 0){
        cout<<"Change=            "<<change;
    }*/
}