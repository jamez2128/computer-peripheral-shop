#include <iostream>

using namespace std;

void about() {
    cout << "******************************************************************" << endl;
    cout << "* School: TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES - QC        *" << endl;
    cout << "* Group 4:                                                       *" << endl;
    cout << "* Cabrigas, Darlene Faye                                         *" << endl;
    cout << "* Cuello, Diether John                                           *" << endl;
    cout << "* Geron, Aaron Josh                                              *" << endl;
    cout << "* Hernando, James Angelo                                         *" << endl;
    cout << "* Oandasan, Marjorie                                             *" << endl;
    cout << "* Verbo, Keith Michael                                           *" << endl;
    cout << "* Program: BSIT                                                  *" << endl;
    cout << "* Section: IT11S1                                                *" << endl;
    cout << "* Final Project                                                  *" << endl;
    cout << "*****************************************************************" << endl;
}

string stringToLower(string convertFrom) {
    for (int i = 0; i < convertFrom.length(); i++) {
        convertFrom[i] = tolower(convertFrom[i]);
    }
    return convertFrom;
}

void validateCinInt(int &number, int failReturn) {
    int confirmCin;
    cin >> confirmCin;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Please type a number" << endl;
        number = failReturn;
    } else {
        cin.ignore(255, '\n');
        number = confirmCin;
    }
}

string itemList(int itemID) {
    string itemIDs[45];
    itemIDs[0] = "Fantech MK853 Max Power BLUE SWITCH RGB Gaming Keyboard";
    itemIDs[1] = "Fantech K513 Booster Gaming Keyboard                   ";
    itemIDs[2] = "Fantech K613L Fighter II Full Size Gaming Keyboard     ";
    itemIDs[3] = "Logitech G213 Prodigy Keyboard                         ";
    itemIDs[4] = "Logitech G813 Keyboard                                 ";
    itemIDs[5] = "Logitech G915 Lightspeed Keyboard                      ";
    itemIDs[6] = "Rakk Lam-Ang Lite Keyboard                             ";
    itemIDs[7] = "Rakk Tandus Wired Keyboard, Mechanical                 ";
    itemIDs[8] = "Rakk Ilis Wired Keyboard, Mechanical                   ";
    itemIDs[9] = "Razer Viper Mini Mouse                                 ";
    itemIDs[10] = "Razer DeathAdder V2 Mouse                              ";
    itemIDs[11] = "Razer Basilisk V3 Mouse                                ";
    itemIDs[12] = "Logitech MX ERGO Mouse                                 ";
    itemIDs[13] = "Logitech MX Master Mouse                               ";
    itemIDs[14] = "Logitech MX Vertical Mouse                             ";
    itemIDs[15] = "ASUS TUF Gaming M5 Mouse                               ";
    itemIDs[16] = "ASUS P504 ROG Gladius II Origin Mouse                  ";
    itemIDs[17] = "ASUS ROG GX1000 Eagle Eye Mouse                        ";
    itemIDs[18] = "Razer Kraken V3 X Headset                              ";
    itemIDs[19] = "Razer BlackShark V2 Headset                            ";
    itemIDs[20] = "Razer Kraken Ultimate Headset                          ";
    itemIDs[21] = "Corsair H535 Stereo Gaming Headset                     ";
    itemIDs[22] = "Corsair VOID RGB ELITE Premium Gaming Headset          ";
    itemIDs[23] = "Corsair HS60 SURROUND Gaming Headset                   ";
    itemIDs[24] = "Steel Series Arctis 3 Black Headset                    ";
    itemIDs[25] = "Steel Series Arctis Prime Headset                      ";
    itemIDs[26] = "Steel Series Arctis Pro Headset                        ";
    itemIDs[27] = "Logitech C920 Pro 120° Webcam                          ";
    itemIDs[28] = "Logitech C925e 1080p Business HD Webcam                ";
    itemIDs[29] = "Logitech C922 HD Pro Stream Webcam                     ";
    itemIDs[30] = "Microsoft LifeCam HD-3000 Webcam                       ";
    itemIDs[31] = "Microsoft LifeCam Cinema 720 HD Webcam                 ";
    itemIDs[32] = "Microsoft Lifecam Studio Webcam                        ";
    itemIDs[33] = "AUSDOM AW620 Webcam                                    ";
    itemIDs[34] = "AUSDOM AW651 Webcam                                    ";
    itemIDs[35] = "AUSDOM AW635 Webcam                                    ";
    itemIDs[36] = "Senze Dual Analogic 3D Gamepad                         ";
    itemIDs[37] = "Senze Sz-4011b Gamepad                                 ";
    itemIDs[38] = "Senze Sz-5001b Gamepad                                 ";
    itemIDs[39] = "Razer Raion Fightpad Gamepad                           ";
    itemIDs[40] = "Razer Wolverine V2 Gamepad                             ";
    itemIDs[41] = "Razer Wolverine V2 Chroma Gamepad                      ";
    itemIDs[42] = "Sony Dualshock 3 Gamepad                               ";
    itemIDs[43] = "Sony Dualshock 4 Gamepad                               ";
    itemIDs[44] = "Sony Dualshock 5 Gamepad                               ";
    return itemIDs[itemID];
}

int items[45][3] = {
    // Keyboard Fantech
    {2708, false, 0}, // 0
    {1201, false, 0}, // 1
    {973, false, 0}, // 2
    
    // Keyboard Logitech
    {2423, false, 0}, // 3
    {8031, false, 0}, // 4
    {12485, false, 0}, // 5
    
    //Keyboard Rakk
    {1803, false, 0}, // 6
    {1200, false, 0}, // 7
    {2406, false, 0}, // 8
    
    //Mouse Razer
    {1998, false, 0}, // 9
    {3496, false, 0}, // 10
    {3511, false, 0}, // 11
    
    //Mouse Logitech
    {4985, false, 0}, // 12
    {4991, false, 0}, // 13
    {4993, false, 0}, // 14
    
    //Mouse Asus
    {1248, false, 0}, // 15
    {3496, false, 0}, // 16
    {6243, false, 0}, // 17
    
    //Headset Razer
    {3496, false, 0}, // 18
    {4994, false, 0}, // 19
    {6492, false, 0}, // 20
    
    //Headset Corsair
    {1998, false, 0}, // 21
    {2996, false, 0}, // 22
    {3496, false, 0}, // 23
    
    //Headset Steel Series
    {3995, false, 0}, // 24
    {5993, false, 0}, // 25
    {6000, false, 0}, // 26
    
    //Webcam Logitech
    {2803, false, 0}, // 27
    {3772, false, 0}, // 28
    {4995, false, 0}, // 29
    
    //Webcam Microsoft
    {1648, false, 0}, // 30
    {2996, false, 0}, // 31
    {3995, false, 0}, // 32
    
    //Webcam Ausdom
    {3502, false, 0}, // 33
    {725, false, 0}, // 34
    {1448, false, 0}, // 35
    
    //Gamepad Senze
    {585, false, 0}, // 36
    {725, false, 0}, // 37
    {1448, false, 0}, // 38
    
    //Gamepad Razer
    {3995, false, 0}, // 39
    {4994, false, 0}, // 40
    {7491, false, 0}, // 41
    
    //Gamepad Sony
    {2752, false, 0}, // 42
    {1599, false, 0}, // 43
    {3602, false, 0}, // 44
};

int itemCounter = 0;
string cartItemsNames[45];
int cart[45];
bool repeatMenu;

void clearCart() {
    itemCounter = 0;
    
    for (int i = 0; i < 45; i++) {
        cartItemsNames[i].clear();
        items[i][1] = false;
        items[i][2] = 0;
        cart[i] = 0;
    }
}

void showShoppingCart() {
     cout << "#: Item Name:\t\t\t\t\t   \tPrice:  *:\t=:" << endl;
    for (int i = 0; i < itemCounter; i++) {
        cout << (i+1) << ". " << cartItemsNames[i] << "\t" << "P" << items[cart[i]][0] << "\t" << items[cart[i]][2] << "\tP" << items[cart[i]][0] * items[cart[i]][2] << endl;
    }
}

void addToCart(int itemID) {
    if (items[itemID][2] > 0) {
        cout << "How many will you modify?" << endl;
        cout << "Current quantity: " << items[itemID][2] << endl;
        cout << "(+/-)(#): ";
        char operation;
        int newQuantity = 0;
        cin >> operation;
        switch (operation) {
            case '+':
                validateCinInt(newQuantity, 0);
                if (newQuantity > 0) {
                    items[itemID][2] += newQuantity;
                    cout << newQuantity << " quantities have been successfully added." << endl;
                } else {
                    cout << "The quantity of this item is not added to the cart" << endl;
                }
                break;
            case '-':
                validateCinInt(newQuantity, 0);
                if (newQuantity >= items[itemID][2]) {
                    items[itemID][2] = 1;
                    cout << "The quantity is subtracted to 1" << endl;
                } else {
                    items[itemID][2] -= newQuantity;
                    cout << newQuantity << " quantities have been successfully subtracted" << endl;
                }
                break;
            default:
                cout << "Please specify the operation" << endl;
                break;
        }
    } else {
        cout << "Enter the quantity: ";
        int checkQuantity = 0;
        validateCinInt(checkQuantity, 0);
        if (checkQuantity >= 1) {
            items[itemID][1] = true;
            items[itemID][2] = checkQuantity;
            cartItemsNames[itemCounter] = itemList(itemID);
            cart[itemCounter] = itemID;
            itemCounter++;
        } else {
            cout << "Your item was not added to the cart" << endl << endl;
        }
    }
}

void removeFromCart(int cartID) {
    items[cart[cartID]][1] = false;    
    items[cart[cartID]][2] = 0;
    for (int i = cartID; i < itemCounter; i++) {
        if (i+1 == itemCounter) {
            
        } else {
            cart[i] = cart[i+1];
            cartItemsNames[i] = cartItemsNames[i+1];
        }
    }
            
    itemCounter--;
}

void subcategoryMenu(int firstCase, int secondCase, int thirdCase) {
    cout << "#: Price: Item Name:" << endl;
    cout << "1. P" << items[firstCase][0] << " " << itemList(firstCase) << endl;
    cout << "2. P" << items[secondCase][0] << " " << itemList(secondCase) << endl;
    cout << "3. P" << items[thirdCase][0] << " " << itemList(thirdCase) << endl;
    cout << "4. Back to previous menu" << endl;
    cout << "0. Back to main menu" << endl;
    cout << "Enter a number: ";
}

void subcategorySwitch(string brandName, int firstCase, int secondCase, int thirdCase) {
    int selection;
    bool back = true;
    do {
        cout << endl << brandName << ":" << endl;
        subcategoryMenu(firstCase, secondCase, thirdCase);
        validateCinInt(selection, 5);
        switch (selection) {
            case 0:
                back = false;
                repeatMenu = false;
                break;
            case 1:
                addToCart(firstCase);
                break;
            case 2:
                addToCart(secondCase);
                break;
            case 3:
                addToCart(thirdCase);
                break;
            case 4:
                back = false;
                break;
            default:
                cout << "Not in the choices. Please try again." << endl << endl;
                break;
        }
    } while (back);
}

void categoryMenu(string subcategory, string firstCase, string secondCase, string thirdCase) {
    cout << endl <<  subcategory << endl;
    cout << "1. " << firstCase << endl;
    cout << "2. " << secondCase << endl;
    cout << "3. " << thirdCase << endl;
    cout << "0. Go back to Main Menu" << endl;
    cout << "Enter a number: ";
}

void categorySwitch(string cat, string s1, int s1c1, int s1c2, int s1c3, string s2, int s2c1, int s2c2, int s2c3, string s3, int s3c1, int s3c2, int s3c3) {
    int selection;
    do {
        repeatMenu = true;
        categoryMenu(cat, s1, s2, s3);
        validateCinInt(selection, 4);
        switch (selection) {
            case 0:
                repeatMenu = false;
                break;
            case 1: 
                subcategorySwitch(s1, s1c1, s1c2, s1c3);
                break;
            case 2:
                subcategorySwitch(s2, s2c1, s2c2, s2c3);
                break;
            case 3:
                subcategorySwitch(s3 , s3c1, s3c2, s3c3);
                break;
            default:
                cout << "Not in the choices. Please try again." << endl;
                break;
        }
    } while (repeatMenu);    
}

void mainMenu() {
    cout << "0. Checkout" << endl;
    cout << "1. Keyboard" << endl;
    cout << "2. Mouse" << endl;
    cout << "3. Headset" << endl;
    cout << "4. Webcam" << endl;
    cout << "5. Gamepad" << endl;
    cout << "6. Clear Cart" << endl;
    cout << "7. Remove Item From Cart" << endl;
    cout << "8. About Us" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter a number: ";
}

bool repeat(int mode) {
    switch (mode) {
        case 1:
            cout << "Do you want another transaction?" << endl;
            cout << "(Y/n): ";
            break;
        case 2:
            cout << "Continue as a new user:" << endl;
            cout << "(Y/n): ";
            break;
    }
    string confirm;
    getline(cin, confirm);
    confirm = stringToLower(confirm);
    if (confirm == "yes" || confirm == "y" || confirm == "") {
        cout << endl;
        return true;
    } else {
        return false;
    }
}

int calculateTotalPrice(int totalPrice) {
    totalPrice = 0;
    
    for (int i = 0; i < itemCounter; i++) {
        totalPrice += (items[cart[i]][0] * items[cart[i]][2]);
    }
    
    return totalPrice;
}

int main() {
    bool run = true;
    int totalPrice;

     while (run) {
        clearCart();
        cout << "Hi! Welcome to our Computer Peripheral shop" << endl;
        cout << "Enter your first name: ";
        string firstName;
        getline(cin, firstName);

        cout << "Enter you last name: ";
        string lastName;
        getline(cin, lastName);

        cout << "Hi! " << firstName << ", nice to meet you!" << endl;

        bool back = true;
        while (back) {
            cout << endl << "Shopping cart: " << endl;
            if (itemCounter == 0) {
                cout << "None" << endl << endl;
            } else {
                showShoppingCart();
                cout << endl << "\t\t\t\t\t\t\t\t   Total price: P" << calculateTotalPrice(totalPrice) << endl;
            }

            cout << "How may we help you?" << endl;
            mainMenu();
            int selection;
            validateCinInt(selection, 9);
            switch (selection) {
                case 0:
                    if (itemCounter == 0) {
                        cout << "Nothing is in the cart" << endl;
                    } else {
                        totalPrice = calculateTotalPrice(totalPrice);
                        cout << endl << "You're about to buy" << endl;
                        showShoppingCart();
                        cout << "Total Price: P" << totalPrice << endl;
                        cout << "Type the amount: P";
                        int amount = 0;
                        cin >> amount;
                        if (amount >= totalPrice) {
                            int change = 0;
                            if (amount > totalPrice) {
                                change = amount - totalPrice;
                            }
                            cout << "You are about to pay P" << amount << endl;
                            cout << "Are you sure about your purchase?" << endl;
                            cout << "(y/N): ";
                            string confirm;
                            cin.ignore();
                            getline(cin, confirm);
                            confirm = stringToLower(confirm);
                            cout << endl;
                            if (confirm == "y" || confirm == "yes") {
                                cout << "RECEIPT:" << endl;
                                cout << "Customer name: " << lastName << ", " << firstName << endl;
                                showShoppingCart();
                                cout << endl << "\t\t\t\t\t\t\t\t   Total price: P" << totalPrice << endl;
                                cout << "\t\t\t\t\t\t\t\t   Amount paid: P" << amount << endl;
                                cout << "\t\t\t\t\t\t\t\t        Change: P" << change << endl;
                                cout << endl;
                                back = false;
                                run = repeat(1);
                            }
                            } else if (amount == 0) {
                                cout << "The checkout is successfully cancelled" << endl;
                            } else {
                                cout << "The amount you entered is in insufficient." << endl;
                                cout << "Please try again." << endl;
                            }
                    }
                    break;
                case 1:
                    categorySwitch("Keyboard:", "Fantech", 0, 1, 2, "Logitech", 3, 4, 5, "Rakk", 6, 7, 8);
                    break;
                case 2:
                    categorySwitch("Mouse:", "Razer", 9, 10, 11, "Logitech", 12, 13, 14, "Asus", 15, 16, 17);
                    break;
                case 3:
                    categorySwitch("Headset:", "Razer", 18, 19, 20, "Corsair", 21, 22, 23, "Steel Series", 24, 25, 26);
                    break;
                case 4:
                    categorySwitch("Webcam:", "Logitech", 27, 28, 29, "Microsoft", 30, 31, 32, "Ausdom", 33, 34, 35);
                    break;
                case 5:
                    categorySwitch("Gamepad:", "Senze", 36, 37, 38, "Razer", 39, 40, 41, "Sony", 42, 43, 44);
                    break;
                case 6:
                    clearCart();
                    break;
                case 7:
                    cout << endl;
                    if (itemCounter == 0) {
                        cout << "Nothing is in the cart" << endl;
                    } else {
                        showShoppingCart();
                        cout << "0. Exit" << endl; 
                        int removeItem;
                        cout << "Choose a number to remove an item: ";
                        validateCinInt(removeItem, 0);
                        if (removeItem >= 1 && removeItem <= itemCounter) {
                            removeFromCart(removeItem-1);
                        }
                    }
                    break;
                case 8:
                    cout << endl;
                    about();
                    break;
                case 9:
                    cout << endl;
                    back = false;
                    run = repeat(2);
                    break;
                default:
                    cout << "Not in the choices. Please try again." << endl;
                    break;
            }
        }
    }
    cout << endl << "Thank you for coming to our shop!" << endl;
    cout << "We hope to see you again." << endl;
    return 0;
}