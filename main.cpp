#include <iostream>

using namespace std;

void groupMembers() {
    cout << "*****************************************" << endl;
    cout << "* Section: IT11S1                       *" << endl;
    cout << "* Group 4:                              *" << endl;
    cout << "* Cabrigas, Darlene Faye                *" << endl;
    cout << "* Cuello, Diether John                  *" << endl;
    cout << "* Geron, Aaron Josh                     *" << endl;
    cout << "* Hernando, James Angelo                *" << endl;
    cout << "* Oandasan, Marjorie                    *" << endl;
    cout << "* Verbo, Keith Michael                  *" << endl;
    cout << "*****************************************" << endl;
}

string stringToLower(string convertFrom) {
    for (int i = 0; i < convertFrom.length(); i++) {
        convertFrom[i] = tolower(convertFrom[i]);
    }
    return convertFrom;
}

void cleanCin() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1, '\n');
        cout << "Please type a number" << endl;
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

int priceList(int itemID) {
    int priceIDs[45];
    priceIDs[0] = 2708;
    priceIDs[1] = 1221;
    priceIDs[2] = 973;
    priceIDs[3] = 2423;
    priceIDs[4] = 8031;
    priceIDs[5] = 12485;
    priceIDs[6] = 1803;
    priceIDs[7] = 1200;
    priceIDs[8] = 2406;
    priceIDs[9] = 1998;
    priceIDs[10] = 3496;
    priceIDs[11] = 3501;
    priceIDs[12] = 4986;
    priceIDs[13] = 4991;
    priceIDs[14] = 4994;
    priceIDs[15] = 1248;
    priceIDs[16] = 3496;
    priceIDs[17] = 6243;
    priceIDs[18] = 3496;
    priceIDs[19] = 4994;
    priceIDs[20] = 6492;
    priceIDs[21] = 1998;
    priceIDs[22] = 2996;
    priceIDs[23] = 3496;
    priceIDs[24] = 3995;
    priceIDs[25] = 5993;
    priceIDs[26] = 6000;
    priceIDs[27] = 2803;
    priceIDs[28] = 3772;
    priceIDs[29] = 4995;
    priceIDs[30] = 1648;
    priceIDs[31] = 2996;
    priceIDs[32] = 3995;
    priceIDs[33] = 3502;
    priceIDs[34] = 4502;
    priceIDs[35] = 5003;
    priceIDs[36] = 585;
    priceIDs[37] = 725;
    priceIDs[38] = 1449;
    priceIDs[39] = 3995;
    priceIDs[40] = 4994;
    priceIDs[41] = 7490;
    priceIDs[42] = 2752;
    priceIDs[43] = 1599;
    priceIDs[44] = 3602;
    return priceIDs[itemID];
}

int itemCounter = 0;
string cartItems[45];
int cartPrices[45];
int itemQuantity[45];
bool inCart[45];
int cartIndex[45];
bool repeatMenu;

void clearCart() {
    itemCounter = 0;
    for (int i = 0; i < 45; i++) {
        cartItems[i].clear();
        cartPrices[i] = 0;
        itemQuantity[i] = 0;
        inCart[i] = false;
        cartIndex[i] = 0;
    }
}

void showShoppingCart() {
     cout << "Item Name:\t\t\t\t\t\tPrice:  *:\t=:" << endl;
    for (int i = 0; i < itemCounter; i++) {
        cout << cartItems[i] << "\t" << "P" << cartPrices[i] << "\t" << itemQuantity[i] << "\tP" << cartPrices[i] * itemQuantity[i] << endl;
    }
}

void addToCart(int itemID) {
    if (inCart[itemID]) {
        cout << "Current quantity: " << itemQuantity[cartIndex[itemID]] << endl;
        cout << "How many will you add?" << endl;
        cout << "Enter the number: ";
        int addQuantity = 0;
        cin >> addQuantity;
        cleanCin();
        itemQuantity[cartIndex[itemID]] = itemQuantity[cartIndex[itemID]] + addQuantity;
        cout << endl;
    } else {
        cout << "Enter the quantity: ";
        int checkQuantity = 0;
        cin >> checkQuantity;
        cleanCin();
        if (checkQuantity >= 1) {
            inCart[itemID] = true;
            cartIndex[itemID] = itemCounter;
            cartItems[cartIndex[itemID]] = itemList(itemID);
            cartPrices[cartIndex[itemID]] = priceList(itemID);
            itemQuantity[cartIndex[itemID]] = checkQuantity;
            cout << endl;
            itemCounter++;
        } else {
            cout << "Your item was not added to the cart" << endl << endl;
        }
    }
}

void subcategoryMenu(int firstCase, int secondCase, int thirdCase) {
    cout << "#: Price: Item Name:" << endl;
    cout << "1. P" << priceList(firstCase) << " " << itemList(firstCase) << endl;
    cout << "2. P" << priceList(secondCase) << " " << itemList(secondCase) << endl;
    cout << "3. P" << priceList(thirdCase) << " " << itemList(thirdCase) << endl;
    cout << "4. Back to previous menu" << endl;
    cout << "0. Back to main menu" << endl;
    cout << "Enter a number: ";
}

void subcategorySwitch(string brandName, int firstCase, int secondCase, int thirdCase) {
    char selection;
    bool back = true;
    do {\
        cout << brandName << ":" << endl;
        subcategoryMenu(firstCase, secondCase, thirdCase);
        cin >> selection;
        switch (selection) {
            case '0':
                back = false;
                repeatMenu = false;
                break;
            case '1':
                addToCart(firstCase);
                break;
            case '2':
                addToCart(secondCase);
                break;
            case '3':
                addToCart(thirdCase);
                break;
            case '4':
                back = false;
                break;
            default:
                cout << "Not in the choices. Please try again." << endl << endl;
                break;
        }
    } while (back);
}

void categoryMenu(string subcategory, string firstCase, string secondCase, string thirdCase) {
    cout << subcategory << endl;
    cout << "1. " << firstCase << endl;
    cout << "2. " << secondCase << endl;
    cout << "3. " << thirdCase << endl;
    cout << "0. Go back to Main Menu" << endl;
    cout << "Enter a number: ";
}

void categorySwitch(string cat, string s1, int s1c1, int s1c2, int s1c3, string s2, int s2c1, int s2c2, int s2c3, string s3, int s3c1, int s3c2, int s3c3) {
    char selection;
    do {
        repeatMenu = true;
        cout << endl;
        categoryMenu(cat, s1, s2, s3);
        cin >> selection;
        switch (selection) {
            case '0':
                repeatMenu = false;
                break;
            case '1': 
                cout << endl;
                subcategorySwitch(s1, s1c1, s1c2, s1c3);
                break;
            case '2':
                cout << endl;
                subcategorySwitch(s2, s2c1, s2c2, s2c3);
                break;
            case '3':
                cout << endl;
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
    cout << "7. Exit" << endl;
    cout << "Enter a number: ";
}

bool repeat() {
    cout << "Do you want another transaction?" << endl;
    cout << "(Y/n): ";
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
    totalPrice = totalPrice + (cartPrices[i] * itemQuantity[i]);
    }
    return totalPrice;
}

int main() {
    groupMembers();
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
                cout << endl << "\t\t\t\t\t\t\t   Total price: P" << calculateTotalPrice(totalPrice) << endl << endl;
            }

            cout << "How may we help you?" << endl;
            mainMenu();
            char selection;
            cin >> selection;
            switch (selection) {
                case '0':
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
                                cout << "Customer name: " << lastName << ", " << firstName << endl << endl;
                                showShoppingCart();
                                cout << endl << "\t\t\t\t\t\t\t   Total price: P" << totalPrice << endl;
                                cout << "\t\t\t\t\t\t\t   Amount paid: P" << amount << endl;
                                cout << "\t\t\t\t\t\t\t        Change: P" << change << endl;
                                cout << endl;
                                back = false;
                                run = repeat();
                            }
                            } else if (amount == 0) {
                                cout << "The checkout is successfully cancelled" << endl;
                            } else {
                                cout << "The amount you entered is in insufficient." << endl;
                                cout << "Please try again." << endl;
                            }
                    }
                    break;
                case '1':
                    categorySwitch("Keyboard:", "Fantech", 0, 1, 2, "Logitech", 3, 4, 5, "Rakk", 6, 7, 8);
                    break;
                case '2':
                    categorySwitch("Mouse:", "Razer", 9, 10, 11, "Logitech", 12, 13, 14, "Asus", 15, 16, 17);
                    break;
                case '3':
                    categorySwitch("Headset:", "Razer", 18, 19, 20, "Corsair", 21, 22, 23, "Steel Series", 24, 25, 26);
                    break;
                case '4':
                    categorySwitch("Webcam:", "Logitech", 27, 28, 29, "Microsoft", 30, 31, 32, "Ausdom", 33, 34, 35);
                    break;
                case '5':
                    categorySwitch("Gamepad:", "Senze", 36, 37, 38, "Razer", 39, 40, 41, "Sony", 42, 43, 44);
                    break;
                case '6':
                    clearCart();
                    break;
                case '7':
                    back = false;
                    run = false;
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