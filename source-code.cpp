#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]) {
    //declaring variables
    string name;
    double balance, price, change, total = 0;
    int selection, secondarySelection, tertiarySelection, age;
    bool firstOperation = true;
    bool isSenior = false;
    float discount = 0.07;
    double AAAqty, AABqty, AACqty, ABAqty, ABBqty, ABCqty, ACAqty, ACBqty, ACCqty, BAAqty, BABqty, BACqty, BBAqty, BBBqty, BBCqty, BCAqty, BCBqty, BCCqty, CAAqty, CABqty, CACqty,CBAqty, CBBqty, CBCqty, CCAqty, CCBqty, CCCqty;
    //defining qty variables - causes issues when declared and defined on the same line
    AAAqty = AABqty = AACqty = ABAqty = ABBqty = ABCqty = ACAqty = ACBqty = ACCqty = BAAqty = BABqty = BACqty = BBAqty = BBBqty = BBCqty = BCAqty = BCBqty = BCCqty = CAAqty =  CABqty = CACqty = CBAqty = CBBqty = CBCqty = CCAqty = CCBqty = CCCqty = 0;
    //time system
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "=====================================================================\n";
    cout << "TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES\n";
    cout << "Quezon City\n";
    cout << "ITE001 - Computer Programming 1\n";
    cout << "1st Semester S.Y. 2022-2023\n";
    cout << "=====================================================================\n";
    cout << "Final Project\n";
    cout << "Computerized Transaction Processing System for Uncle Andy's Pharmacy\n";
    cout << "=====================================================================\n";
    cout << "Members:\n";
    cout << "Abelar, Randi Phyliz Gail -BSCS\n";
    cout << "Callope, Armiel Andrei - BSCS\n";
    cout << "Cerenio, Mac Kenzie - BSCS\n";
    cout << "Flores, Richard William - BSCS\n";
    cout << "Herrera, Antonio Rafael - BSCS\n";
    cout << "Instructor: Ms. Jasmin A. Caliwag\n";
    cout << "=====================================================================\n";
    cout << "Press any key to continue:";
    getch();
    system("cls");
    // Customer information input
    // sytem header - start - reference
    cout << "=====================================================================\n";
    cout << "Uncle Andy's Pharmacy\n";
    cout << "Computerized Transaction Processing System\n";
    cout << "=====================================================================\n";
    // system header - end - reference
    cout << "Time: " << dt <<"\n\n";
    cout << "Customer Information Input\n";
    cout << "Please enter your name: ";
    //getline action to avoid issues using string
    getline(cin,name);

    cout << "Please enter your age: ";
    cin >> age;
    //main selection
    do {
        total = (3.50 * AAAqty) + (8.70 * AABqty) + (20.25 * AACqty) + (18.75 * ABAqty) + (23.50 * ABBqty) + (88.73 * ABCqty) + (15.00 * ACAqty) + (8.75 * ACBqty) + (20.50 * ACCqty) * (2.00 * BAAqty) + (6.00 * BABqty) + (5.00 * BACqty) + (10.00 * BBAqty) + (12.00 * BBBqty) + (18.50 * BBCqty) + (6.00 * BCAqty) + (60.00 * BCBqty) + (7.00 * BCCqty) * (26.50 * CAAqty) + (52.50 * CABqty) + (140.00 * CACqty) + (35.50 * CBAqty) + (59.00 * CBBqty) + (82.14 * CBCqty) + (60.00 * CCAqty) + (35.00 * CCBqty) + (75.00 * CCCqty);
        system("cls");

        if (age >= 60 && age <= 80) {
            cout << "Approved for senior citizen discount! Enjoy your 7% discount!";
            isSenior = true;
        }
        //top half system - live display of current purchases - cart system
        cout << "=====================================================================\n";
        cout << "Uncle Andy's Pharmacy\n";
        cout << "Computerized Transaction Processing System\n";
        cout << "=====================================================================\n";
        cout << "Welcome to Uncle Andy's Pharmacy\n";
        cout << "Customer Name: " << name << "\n";
        cout << "=====================================================================\n";
        //instructions
        if (firstOperation) {
        cout << "Instructions: Pay attention to the interface and options displayed. \nPlease select the category or product of your choice by entering the \nnumberbeside it into the space provided\n";
        cout << "=====================================================================\n";
        }   
        else { 
        cout << "\nSummary of Ordered Items:\n\n";
        cout << "=====================================================================\n\n";

        cout << "Item\t\t\t\t\tQuantity\tTotal\n";

        //Medicine // Analgesics
        if (AAAqty) {
            cout << "Acetylsalicylic Acid (Aspirin)\t\t" << AAAqty << " \t\t" << AAAqty * 3.50 << "\n";
        }
        if (AABqty) {
            cout << "Ibuprofen\t\t\t\t" << AABqty << "\t\t" << AABqty * 8.70 << "\n";
        }
        if (AACqty) {
            cout << "Naproxen Sodium\t\t\t\t" << AACqty << "\t\t" << AACqty * 20.25 << "\n";
        }

        // Medicine // Antibiotics
        if (ABAqty) {
            cout << "Amoxicillin\t\t\t\t" << ABAqty << "\t\t" << ABAqty * 18.75 << "\n";
        }
        if (ABBqty) {
            cout << "Ampicillin\t\t\t\t" << ABBqty << "\t\t" << ABBqty * 23.50 << "\n";
        }
        if (ABCqty) {
            cout << "Azithromycin\t\t\t\t" << ABCqty << "\t\t" << ABCqty * 88.75 << "\n";
        }
        
        // Medicine // Antihistamines
        if (ACAqty) {
            cout << "Cetirizine\t\t\t\t" << ACAqty<< "\t\t" << ACAqty * 15.00 << "\n";
        }
        if (ACBqty) {
            cout << "Diphenhydramine\t\t\t\t" << ACBqty<< "\t\t" << ACBqty * 8.75 << "\n";
        }
        if (ACCqty) {
            cout << "Loratadine\t\t\t\t" << ACCqty<< "\t\t" << ACCqty * 20.50 << "\n";
        }
        
        //
        //
        // Vitamins & Supplements
        //
        //

        // Vitamins & Supplements // Vitamins
        if (BAAqty) {
            cout << "Ascorbic Acid (Vitamin C)\t\t" << BAAqty<< "\t\t" << BAAqty * 2.00 << "\n";
        }
        if (BABqty) {
            cout << "Vitamin B - Complex\t\t\t" << BABqty<< "\t\t" << BABqty * 6.00 << "\n";
        }
        if (BACqty) {
            cout << "Cholecalciferol (Vitamin D3)\t\t" << BACqty<< "\t\t" << BACqty * 5.00 << "\n";
        }

        // Vitamins & Supplements // Food & Dietary Supplements
        
        if (BBAqty) {
            cout << "Multivitamin + Mineral + Folic + Zinc\t" << BBAqty<< "\t\t" << BBAqty * 10.00 << "\n";
        }
        if (BBBqty) {
            cout << "Triple Magnesium Complex\t\t" << BBBqty<< "\t\t" << BBBqty * 12.00 << "\n";
        }
        if (BBCqty) {
            cout << "Collagen\t\t\t\t" << BBCqty<< "\t\t" << BBCqty * 18.50 << "\n";
        }

        // Vitamins & Supplements // Mineral Supplements

        if (BCAqty) {
            cout << "Calcium\t\t\t\t\t" << BCAqty<< "\t\t" << BCAqty * 6.00 << "\n";
        }
        if (BCBqty) {
            cout << "Magnesium\t\t\t\t" << BCBqty<< "\t\t" << BCBqty * 60.00 << "\n";
        }
        if (BCCqty) {
            cout << "Zinc\t\t\t\t\t" << BCCqty<< "\t\t" << BCCqty * 7.00 << "\n";
        }

        //
        //
        // First Aid Equipment
        //
        //

        // First Aid Equipment  //  Plasters
        if (CAAqty) {
            cout << "Plasters - 12 Strips Pack\t\t" << CAAqty<< "\t\t" << CAAqty * 2.00 << "\n";
        }
        if (CABqty) {
            cout << "Plasters - 25 Strips Pack\t\t\t" << CABqty<< "\t\t" << CABqty * 6.00 << "\n";
        }
        if (CACqty) {
            cout << "Plasters - 100 Strips Pack\t\t" << CACqty<< "\t\t" << CACqty * 5.00 << "\n";
        }

        // First Aid Equipment // Elastic Bandages

        if (CBAqty) {
            cout << "Rubber Bandage - 2 x 5 yards\t\t" << CBAqty<< "\t\t" << CBAqty * 10.00 << "\n";
        }
        if (CBBqty) {
            cout << "Rubber Bandage - 4 x 5 yards\t\t" << CBBqty<< "\t\t" << CBBqty * 12.00 << "\n";
        }
        if (CBCqty) {
            cout << "Rubber Bandage - 6 x 5 yards\t\t" << CBCqty<< "\t\t" << CBCqty * 18.50 << "\n";
        }

        // First Aid Equipment // Cotton Items

        if (CCAqty) {
            cout << "Cotton Balls - 100pc Pack\t\t" << CCAqty<< "\t\t" << CCAqty * 6.00 << "\n";
        }
        if (CCBqty) {
            cout << "Cotton Buds - 200pc Pack\t\t" << CCBqty<< "\t\t" << CCBqty * 60.00 << "\n";
        }
        if (CCCqty) {
            cout << "Cotton Rounds - 80pc Pack\t\t" << CCCqty<< "\t\t" << CCCqty * 7.00 << "\n";
        }

        cout << "=====================================================================\n";
        cout << "Subtotal:\t\t\t\t\t\t"<<total<<"\n";
        cout << "=====================================================================\n";
        }
        //lower half system - service options
        cout << "[1] Medicine\n\n";
        cout << "[2] Vitamins & Supplements\n\n";
        cout << "[3] First Aid Equipment \n\n";
        //option update based on presence of transaction
        if (firstOperation)
        {
            cout<<"[4] Exit\n";
            cout << "=====================================================================\n";
        }
        else
        {
            cout<<"[4] Confirm Purchases\n";
            cout << "=====================================================================\n";
        }
        cin >> selection;
        
        switch (selection) {
            case 1: // Medicine Selection
                do {
                    system("cls");
                    cout << "=====================================================================\n";
                    cout << "Medicine\n";
                    cout << "=====================================================================\n";
                    cout << "Instructions: Pay attention to the interface and options displayed. \nPlease select the category or product of your choice by entering the \nnumberbeside it into the space provided\n";
                    cout << "=====================================================================\n";
                    cout << "You've selected Medicine. Please specify the classification based on the options given below:\n";
                    cout << "=====================================================================\n";
                    cout << "[1] Analgesics\n";
                    cout << "[2] Antibiotics\n";
                    cout << "[3] Antihistamines \n";
                    cout << "=====================================================================\n";
                    cout << "[4] Back\n";
                    cout << "=====================================================================\n";
                    cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Analgesic Selection
                            do {
                                system("cls");
                                cout << "Analgesics\n";
                                cout << "\n=====================================================================\n";
                                cout << "Select analgesic medicine:\n";
                                cout << "\n=====================================================================\n";
                                cout << "[1] Acetylsalicylic Acid (Aspirin)\t\tPhp. 3.50\n";
                                cout << "[2] Ibuprofen\t\t\t\t\tPhp. 8.70\n";
                                cout << "[3] Naproxen Sodium\t\t\t\tPhp. 20.25\n";
                                cout << "\n=====================================================================\n";
                                cout << "[4] Back\n";
                                cout << "\n=====================================================================\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newAAAqty;

                                        cout << "How many tablets: ";
                                        cin >> newAAAqty;

                                        AAAqty = AAAqty + newAAAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newAABqty;

                                        cout << "How many tablets: ";
                                        cin >> newAABqty;

                                        AAAqty = AABqty + newAABqty;             
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;
                                        break;
                                    case 3:
                                        int newAACqty;

                                        cout << "How many tablets: ";
                                        cin >> newAACqty;

                                        AACqty = AAAqty + newAACqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;
                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Antibiotic Selection
                            do {
                                system("cls");

                                cout << "Antibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "[1] Amoxicillin\t\t\t\tPhp. 18.75\n";
                                cout << "[2] Ampicillin\t\t\t\tPhp. 23.50\n";
                                cout << "[3] Azithromycin\t\t\tPhp. 88.75\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        int newABAqty;

                                        cout << "How many tablets: ";
                                        cin >> newABAqty;

                                        ABAqty = ABAqty + newABAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newABBqty;

                                        cout << "How many tablets: ";
                                        cin >> newABBqty;

                                        ABBqty = ABBqty + newABBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newABCqty;
                                        
                                        cout << "How many tablets: ";
                                        cin >> newABCqty;
                                        
                                        ABCqty = ABCqty + newABCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

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

                                cout << "Antihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cetirizine\t\t\t\tPhp. 15.00\n";
                                cout << "[2] Diphenhydramine\t\t\tPhp. 8.75\n";
                                cout << "[3] Loratadine\t\t\t\tPhp. 20.50\n";
                                cout << "[4] Back\n";
                                cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newACAqty;

                                        cout << "How many tablets: ";
                                        cin >> newACAqty;
                                        
                                        ACAqty = ACAqty + newACAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newACBqty;

                                        cout << "How many tablets: ";
                                        cin >> newACBqty;
                                        
                                        ACBqty = ACBqty + newACBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newACCqty;
                                        cout << "How many tablets: ";
                                        cin >> newACCqty;

                                        ACCqty = ACCqty + newACCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4; 

                                        break;
                                    default:
                                        break;
                                }   //end of tertiary selection
                                
                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            break;
                        }   //end of secondary selection
                } while (secondarySelection<=3);
                
                    break;  //end of main case 1

            case 2: // Vitamins & Supplements Selection
do {
                    system("cls");

                    cout << "Vitamins & Supplements\n";
                    cout << "Select Category:\n";
                    cout << "\n=====================================================================\n";
                    cout << "[1] Vitamins\t\t\t [2] Food & Dietary Supplements\n";
                    cout << "[3] Mineral Supplements \t [4] Back\n";
                    cout << "===============================================\n";
                    cout << "Enter Number (1-4): ";cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Vitamins Section
                            do {
                                system("cls");
                                cout << "\nVitamins\n";
                                cout << "Select Vitamins:\n";
                                cout << "\n=====================================================================\n";
                                cout << "[1] Ascorbic Acid(Vitamin C)\t\t\tPhp. 3.50\n";
                                cout << "[2] Vitamin B - Complex\t\t\t\tPhp. 8.70\n";
                                cout << "[3] Cholecalciferol (Vitamin D3)\t\tPhp. 20.25\n";
                                cout << "\n=====================================================================\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newBAAqty;

                                        cout << "How many tablets: ";
                                        cin >> newBAAqty;

                                        BAAqty = BAAqty + newBAAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newBABqty;

                                        cout << "How many tablets: ";
                                        cin >> newBABqty;             

                                        BABqty = BABqty + newBABqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newBACqty;

                                        cout << "How many tablets: ";
                                        cin >> newBACqty;
                                        
                                        BACqty = BACqty + newBACqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Food & Dietary Supplements Section
                            do {
                                system("cls");

                                cout << "\nFood & Dietary Supplements\n";
                                cout << "Select Food & Dietary Supplements:\n";
                                cout << "[1] Multivitamin + Mineral + Folic + Zinc\tPhp. 18.75\n";
                                cout << "[2] Triple Magnesium Complex\t\t\tPhp. 23.50\n";
                                cout << "[3] Collagen\t\t\t\t\tPhp. 88.75\n";
                                cout << "\n=====================================================================\n";
                                cout << "[4] Back\n";
                                cout << "=====================================================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        int newBBAqty;

                                        cout << "How many tablets: ";
                                        cin >> newBBAqty;
                                        
                                        BBAqty = BBAqty + newBBAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newBBBqty;
                                        cout << "How many tablets: ";
                                        cin >> newBBBqty;

                                        BBBqty = BBBqty + newBBBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newBBCqty;
                                        
                                        cout << "How many tablets: ";
                                        cin >> newBBCqty;
                                        
                                        BBCqty = BBCqty + newBBCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    default:
                                        break;
                                }

                            }
                            while (tertiarySelection<=3);

                            break;
                        case 3: // Mineral Supplements
                            do {
                                system("cls");

                                cout << "\nMineral Supplements\n";
                                cout << "Select Mineral Supplements\n";
                                cout << "[1] Calcium\t\t\t\tPhp. 15.00\n";
                                cout << "[2] Magnesium\t\t\t\tPhp. 8.75\n";
                                cout << "[3] Zinc\t\t\t\tPhp. 20.50\n";
                                cout << "[4] Back\n";
                                cout << "=====================================================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newBCAqty;

                                        cout << "How many tablets: ";
                                        cin >> newBCAqty;
                                        
                                        BCAqty = BCAqty + newBCAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4; 

                                        break;
                                    case 2:
                                        int newBCBqty;
                                        cout << "How many tablets: ";
                                        cin >> newBCBqty;

                                        BCBqty = BCBqty + newBCBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newBCCqty;
                                        cout << "How many tablets: ";
                                        cin >> newBCCqty;

                                        BCCqty = BCCqty + newBCCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;  //end of secondary selection
                        }
                } while (secondarySelection<=3);

                break; //end of main case 2

            case 3: //first aid & equipment
do {
                    system("cls");

                    cout << "First Aid Equipment\n";
                    cout << "Select Desired Product Category\n";
                    cout << "[1] Plasters\n";
                    cout << "[2] Rubber Bandages\n";
                    cout << "[3] Cotton Items\n";
                    cout << "[4] Back\n";
                    cout << "===============================================\n";
                    cout << "Enter Number (1-4): ";cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Plasters
                            do {
                                system("cls");
                                cout << "Plasters\n";
                                cout << "Please Select pack variety:\n";
                                cout << "[1] Box of 12 strips\t\t\t\tPhp. 26.50\n";
                                cout << "[2] Box of 25 strips\t\t\t\tPhp. 52.50\n";
                                cout << "[3] Box of 100 strips\t\t\t\tPhp. 140.00\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newCAAqty;

                                        cout << "How many packs?: ";
                                        cin >> newCAAqty;

                                        CAAqty = CAAqty + newCAAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newCBAqty;

                                        cout << "How many packs?: ";
                                        cin >> newCBAqty;             

                                        CBAqty = CBAqty + newCBAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newCACqty;

                                        cout << "How many packs?: ";
                                        cin >> newCACqty;
                                        
                                        CACqty = CACqty + newCACqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Rubber Bandages
                            do {
                                system("cls");

                                cout << "Rubber Bandagess\n";
                                cout << "Please select banage length:\n";
                                cout << "[1] 2 x 5 yards\t\t\t\tPhp. 60.00\n";
                                cout << "[2] 4 x 5 yards\t\t\t\tPhp. 59.00\n";
                                cout << "[3] 6 x 5 yards\t\t\t\tPhp. 82.14\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        int newCBAqty;

                                        cout << "How many packs?: ";
                                        cin >> newCBAqty;
                                        
                                        CBAqty = CBAqty + newCBAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newCBBqty;
                                        cout << "How many packs: ";
                                        cin >> newCBBqty;

                                        CBBqty = CBBqty + newCBBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newCBCqty;
                                        
                                        cout << "How many packs: ";
                                        cin >> newCBCqty;
                                        
                                        CBCqty = CBCqty + newCBCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

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

                                cout << "Cotton Items\n";
                                cout << "Select Cotton Item Packs\n";
                                cout << "[1] Cotton Balls 100s\t\t\tPhp. 60.00\n";
                                cout << "[2] Cotton Nids 200s\t\t\tPhp. 35.00\n";
                                cout << "[3] Cotton Rounds 80s\t\t\tPhp. 75.50\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        int newCCAqty;

                                        cout << "How many packs: ";
                                        cin >> newCCAqty;
                                        
                                        CCAqty = CCAqty + newCCAqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 2:
                                        int newCCBqty;
                                        cout << "How many packs: ";
                                        cin >> newCCBqty;

                                        CCBqty = CCBqty + newCCBqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    case 3:
                                        int newCCCqty;
                                        cout << "How many packs: ";
                                        cin >> newCCCqty;

                                        CCCqty = CCCqty + newCCCqty;
                                        firstOperation = false;
                                        tertiarySelection = 4;
                                        secondarySelection = 4;

                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;  //end of secondary selection
                        }
                } while (secondarySelection<=3);
                default:
                    break;  //end of main case
        }
    } while (selection <= 3); //end of switch 1

    //exit condition
    if (!firstOperation) {
        system("cls");
        total = (3.50 * AAAqty) + (8.70 * AABqty) + (20.25 * AACqty) + (18.75 * ABAqty) + (23.50 * ABBqty) + (88.73 * ABCqty) + (15.00 * ACAqty) + (8.75 * ACBqty) + (20.50 * ACCqty) * (2.00 * BAAqty) + (6.00 * BABqty) + (5.00 * BACqty) + (10.00 * BBAqty) + (12.00 * BBBqty) + (18.50 * BBCqty) + (6.00 * BCAqty) + (60.00 * BCBqty) + (7.00 * BCCqty) * (26.50 * CAAqty) + (52.50 * CABqty) + (140.00 * CACqty) + (35.50 * CBAqty) + (59.00 * CBBqty) + (82.14 * CBCqty) + (60.00 * CCAqty) + (35.00 * CCBqty) + (75.00 * CCCqty);
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
        
        //
        //
        // Vitamins & Supplements Vitamins
        //
        //

        if (BAAqty) {
            cout << "Ascorbic Acid (Vitamin C)\t\t" << BAAqty<< "\t\t" << BAAqty * 2.00 << "\n";
        }
        if (BABqty) {
            cout << "Vitamin B - Complex\t\t\t" << BABqty<< "\t\t" << BABqty * 6.00 << "\n";
        }
        if (BACqty) {
            cout << "Cholecalciferol (Vitamin D3)\t\t" << BACqty<< "\t\t" << BACqty * 5.00 << "\n";
        }

        // Vitamins & Supplements Food & Dietary Supplements
        
        if (BBAqty) {
            cout << "Multivitamin + Mineral + Folic + Zinc\t" << BBAqty<< "\t\t" << BBAqty * 10.00 << "\n";
        }
        if (BBBqty) {
            cout << "Triple Magnesium Complex\t\t" << BBBqty<< "\t\t" << BBBqty * 12.00 << "\n";
        }
        if (BBCqty) {
            cout << "Collagen\t\t\t\t" << BBCqty<< "\t\t" << BBCqty * 18.50 << "\n";
        }

        // Vitamins & Supplements Mineral Supplements

        if (BCAqty) {
            cout << "Calcium\t\t\t\t\t" << BCAqty<< "\t\t" << BCAqty * 6.00 << "\n";
        }
        if (BCBqty) {
            cout << "Magnesium\t\t\t\t" << BCBqty<< "\t\t" << BCBqty * 60.00 << "\n";
        }
        if (BCCqty) {
            cout << "Zinc\t\t\t\t\t" << BCCqty<< "\t\t" << BCCqty * 7.00 << "\n";
        }

        //
        //
        // First Aid Equipment  //  Plasters
        //
        //


        if (CAAqty) {
            cout << "Plasters - 12 Strips Pack\t\t" << CAAqty<< "\t\t" << CAAqty * 2.00 << "\n";
        }
        if (CABqty) {
            cout << "Plasters - 25 Strips Pack\t\t\t" << CABqty<< "\t\t" << CABqty * 6.00 << "\n";
        }
        if (CACqty) {
            cout << "Plasters - 100 Strips Pack\t\t" << CACqty<< "\t\t" << CACqty * 5.00 << "\n";
        }

        // First Aid Equipment // Elastic Bandages

        if (CBAqty) {
            cout << "Rubber Bandage - 2 x 5 yards\t\t" << CBAqty<< "\t\t" << CBAqty * 10.00 << "\n";
        }
        if (CBBqty) {
            cout << "Rubber Bandage - 4 x 5 yards\t\t" << CBBqty<< "\t\t" << CBBqty * 12.00 << "\n";
        }
        if (CBCqty) {
            cout << "Rubber Bandage - 6 x 5 yards\t\t" << CBCqty<< "\t\t" << CBCqty * 18.50 << "\n";
        }

        // First Aid Equipment // Cotton Items

        if (CCAqty) {
            cout << "Cotton Balls - 100pc Pack\t\t" << CCAqty<< "\t\t" << CCAqty * 6.00 << "\n";
        }
        if (CCBqty) {
            cout << "Cotton Buds - 200pc Pack\t\t" << CCBqty<< "\t\t" << CCBqty * 60.00 << "\n";
        }
        if (CCCqty) {
            cout << "Cotton Rounds - 80pc Pack\t\t" << CCCqty<< "\t\t" << CCCqty * 7.00 << "\n";
        }

        //
        //
        //
        //
        //

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
        cout << "\n=====================================================================\n";
        cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
    }
    else
    cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
}