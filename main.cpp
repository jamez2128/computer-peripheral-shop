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
    cout << "******************************************************************" << endl;
}

string stringToLower(string convertFrom) {
    for (int i = 0; i < convertFrom.length(); i++) {
        convertFrom[i] = tolower(convertFrom[i]);
    }
    return convertFrom;
}

void clearMessage() {
    system("clear || cls");
}

void validateCinInt(int &number, int failReturn) {
    int confirmCin;
    cin >> confirmCin;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        number = failReturn;
    } else {
        cin.ignore(255, '\n');
        number = confirmCin;
    }
}

string itemNames[45] = {
    // Keyboard Fantech
    "Fantech MK853 Max Power BLUE SWITCH RGB Gaming Keyboard", // 0
    "Fantech K513 Booster Gaming Keyboard                   ", // 1
    "Fantech K613L Fighter II Full Size Gaming Keyboard     ", // 2
    
    // Keyboard Logitech
    "Logitech G213 Prodigy Keyboard                         ", // 3
    "Logitech G813 Keyboard                                 ", // 4
    "Logitech G915 Lightspeed Keyboard                      ", // 5
    
    // Keyboard Rakk
    "Rakk Lam-Ang Lite Keyboard                             ", // 6
    "Rakk Tandus Wired Keyboard, Mechanical                 ", // 7
    "Rakk Ilis Wired Keyboard, Mechanical                   ", // 8
    
    // Mouse Razer
    "Razer Viper Mini Mouse                                 ", // 9
    "Razer DeathAdder V2 Mouse                              ", // 10
    "Razer Basilisk V3 Mouse                                ", // 11
    
    // Mouse Logitech
    "Logitech MX ERGO Mouse                                 ", // 12
    "Logitech MX Master Mouse                               ", // 13
    "Logitech MX Vertical Mouse                             ", // 14
    
    // Mouse Asus
    "ASUS TUF Gaming M5 Mouse                               ", // 15
    "ASUS P504 ROG Gladius II Origin Mouse                  ", // 16
    "ASUS ROG GX1000 Eagle Eye Mouse                        ", // 17
    
    // Headset Razer
    "Razer Kraken V3 X Headset                              ", // 18
    "Razer BlackShark V2 Headset                            ", // 19
    "Razer Kraken Ultimate Headset                          ", // 20
            
    // Headset Corsair
    "Corsair H535 Stereo Gaming Headset                     ", // 21
    "Corsair VOID RGB ELITE Premium Gaming Headset          ", // 22
    "Corsair HS60 SURROUND Gaming Headset                   ", // 23
    
    // Headset Steel Series
    "Steel Series Arctis 3 Black Headset                    ", // 24
    "Steel Series Arctis Prime Headset                      ", // 25
    "Steel Series Arctis Pro Headset                        ", // 26
    
    // Webcam Logitech
    "Logitech C920 Pro 120° Webcam                          ", // 27
    "Logitech C925e 1080p Business HD Webcam                ", // 28
    "Logitech C922 HD Pro Stream Webcam                     ", // 29
            
    // Webcam Microsoft
    "Microsoft LifeCam HD-3000 Webcam                       ", // 30
    "Microsoft LifeCam Cinema 720 HD Webcam                 ", // 31
    "Microsoft Lifecam Studio Webcam                        ", // 32
            
    // Webcam Ausdom
    "AUSDOM AW620 Webcam                                    ", // 33
    "AUSDOM AW651 Webcam                                    ", // 34
    "AUSDOM AW635 Webcam                                    ", // 35
    
    // Gamepad Senze
    "Senze Dual Analogic 3D Gamepad                         ", // 36
    "Senze Sz-4011b Gamepad                                 ", // 37
    "Senze Sz-5001b Gamepad                                 ", // 38
    
    // Gamepad Razer
    "Razer Raion Fightpad Gamepad                           ", // 39
    "Razer Wolverine V2 Gamepad                             ", // 40
    "Razer Wolverine V2 Chroma Gamepad                      ", // 41
    
    //Gamepad Sony
    "Sony Dualshock 3 Gamepad                               ", // 42
    "Sony Dualshock 4 Gamepad                               ", // 43
    "Sony Dualshock 5 Gamepad                               " // 44
};

int items[45][2] = {
    // Keyboard Fantech
    {2708, 0}, // 0
    {1201, 0}, // 1
    {973, 0}, // 2
    
    // Keyboard Logitech
    {2423, 0}, // 3
    {8031, 0}, // 4
    {12485, 0}, // 5
    
    // Keyboard Rakk
    {1803, 0}, // 6
    {1200, 0}, // 7
    {2406, 0}, // 8
    
    // Mouse Razer
    {1998, 0}, // 9
    {3496, 0}, // 10
    {3511, 0}, // 11
    
    // Mouse Logitech
    {4985, 0}, // 12
    {4991, 0}, // 13
    {4993, 0}, // 14
    
    // Mouse Asus
    {1248, 0}, // 15
    {3496, 0}, // 16
    {6243, 0}, // 17
    
    // Headset Razer
    {3496, 0}, // 18
    {4994, 0}, // 19
    {6492, 0}, // 20
    
    // Headset Corsair
    {1998, 0}, // 21
    {2996, 0}, // 22
    {3496, 0}, // 23
    
    // Headset Steel Series
    {3995, 0}, // 24
    {5993, 0}, // 25
    {6000, 0}, // 26
    
    // Webcam Logitech
    {2803, 0}, // 27
    {3772, 0}, // 28
    {4995, 0}, // 29
    
    // Webcam Microsoft
    {1648, 0}, // 30
    {2996, 0}, // 31
    {3995, 0}, // 32
    
    // Webcam Ausdom
    {3502, 0}, // 33
    {725, 0}, // 34
    {1448, 0}, // 35
    
    // Gamepad Senze
    {585, 0}, // 36
    {725, 0}, // 37
    {1448, 0}, // 38
    
    // Gamepad Razer
    {3995, 0}, // 39
    {4994, 0}, // 40
    {7491, 0}, // 41
    
    // Gamepad Sony
    {2752, 0}, // 42
    {1599, 0}, // 43
    {3602, 0}, // 44
};

int itemCounter = 0;
string cartItemsNames[45];
int cart[45];
bool repeatMenu;

void clearCart() {
    itemCounter = 0;
    
    for (int i = 0; i < 45; i++) {
        cartItemsNames[i].clear();
        items[i][1] = 0;
        cart[i] = 0;
    }
}

void showShoppingCart() {
     cout << "#: Item Name:\t\t\t\t\t\t   \tPrice:  *:\t=:" << endl;
    for (int i = 0; i < itemCounter; i++) {
        cout << (i+1) << ". " << cartItemsNames[i] << "\t" << "P" << items[cart[i]][0] << "\t" << items[cart[i]][1] << "\tP" << items[cart[i]][0] * items[cart[i]][1] << endl;
    }
}

void addToCart(int itemID) {
    if (items[itemID][1] > 0) {
        cout << "How many will you modify?" << endl;
        cout << "Current quantity: " << items[itemID][1] << endl;
        cout << "(+/-)(#): ";
        char operation;
        int newQuantity = 0;
        cin >> operation;
        switch (operation) {
            case '+':
                validateCinInt(newQuantity, 0);
                if (newQuantity > 0) {
                    items[itemID][1] += newQuantity;
                    clearMessage();
                    cout << newQuantity << " quantities has been added for" << endl << itemNames[itemID] << endl << endl;
                } else {
                    clearMessage();
                    cout << "The quantity for " << itemNames[itemID] << endl << "is not added to the cart" << endl << endl;
                }
                break;
            case '-':
                validateCinInt(newQuantity, 0);
                if (newQuantity >= items[itemID][1]) {
                    items[itemID][1] = 1;
                    clearMessage();
                    cout << "The quantity for " << itemNames[itemID] << endl << "has been reduced to 1" << endl << endl;
                } else if (newQuantity == 0) {
                    clearMessage();
                    cout << "The quantity for " << itemNames[itemID] << endl << "is not reduced from the cart" << endl << endl;
                } else {
                    items[itemID][1] -= newQuantity;
                    clearMessage();
                    cout << newQuantity << " quantities has been reduced for" << endl << itemNames[itemID] << endl << endl;
                }
                break;
            default:
                clearMessage();
                cout << "Please specify the operation first then type the number" << endl << endl;
                break;
        }
    } else {
        cout << "Enter the quantity: ";
        int checkQuantity = 0;
        validateCinInt(checkQuantity, 0);
        if (checkQuantity >= 1) {
            items[itemID][1] = checkQuantity;
            cartItemsNames[itemCounter] = itemNames[itemID];
            cart[itemCounter] = itemID;
            itemCounter++;
            clearMessage();
            cout << itemNames[itemID] << endl << "with " << items[itemID][1] << " quantitites has been successfully added." << endl << endl;
        } else {
            clearMessage();
            cout << "Your item was not added to the cart" << endl << endl;
        }
    }
}

void removeFromCart(int cartID) {
    string removedItem = itemNames[cart[cartID]];
    items[cart[cartID]][1] = 0;
    for (int i = cartID; i < itemCounter; i++) {
        if (i+1 == itemCounter) {
            cart[itemCounter] = 0;
            cartItemsNames[itemCounter].clear();
        } else {
            cart[i] = cart[i+1];
            cartItemsNames[i] = cartItemsNames[i+1];
        }
    }
    itemCounter--;
    clearMessage();
    cout << removedItem << endl << "has been removed from the cart successfully" << endl << endl;
}

void subcategoryMenu(int firstCase, int secondCase, int thirdCase) {
    cout << "#: Price: Item Name:" << endl;
    cout << "1. P" << items[firstCase][0] << " " << itemNames[firstCase] << endl;
    cout << "2. P" << items[secondCase][0] << " " << itemNames[secondCase] << endl;
    cout << "3. P" << items[thirdCase][0] << " " << itemNames[thirdCase] << endl;
    cout << "4. Back to previous menu" << endl;
    cout << "0. Back to main menu" << endl;
    cout << "Enter a number: ";
}

void subcategorySwitch(string brandName, int firstCase, int secondCase, int thirdCase) {
    int selection;
    bool back = true;
    clearMessage();
    do {    
        cout << brandName << ":" << endl;
        subcategoryMenu(firstCase, secondCase, thirdCase);
        validateCinInt(selection, 5);
        switch (selection) {
            case 0:
                back = false;
                repeatMenu = false;
                clearMessage();
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
                clearMessage();
                break;
            default:
                clearMessage();
                cout << "Not in the choices. Please try again." << endl << endl;
                break;
        }
    } while (back);
}

void categoryMenu(string subcategory, string firstCase, string secondCase, string thirdCase) {
    cout <<  subcategory << endl;
    cout << "1. " << firstCase << endl;
    cout << "2. " << secondCase << endl;
    cout << "3. " << thirdCase << endl;
    cout << "0. Go back to Main Menu" << endl;
    cout << "Enter a number: ";
}

void categorySwitch(string cat, string s1, int s1c1, int s1c2, int s1c3, string s2, int s2c1, int s2c2, int s2c3, string s3, int s3c1, int s3c2, int s3c3) {
    int selection;
    clearMessage();
    do {
        repeatMenu = true;
        categoryMenu(cat, s1, s2, s3);
        validateCinInt(selection, 4);
        switch (selection) {
            case 0:
                repeatMenu = false;
                clearMessage();
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
                clearMessage();
                cout << "Not in the choices. Please try again." << endl << endl;
                break;
        }
    } while (repeatMenu);    
}

string mainMenuChoices[10] = {"Checkout", "Keyboard", "Mouse", "Headset", "Webcam", "Gamepad", "Clear Cart", "Remove Item From Cart", "About Us", "Exit"};

void mainMenu() {
    for (int i = 0; i < 10; i++) {
        cout << i << ". " <<mainMenuChoices[i] << endl;
    }
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
        totalPrice += (items[cart[i]][0] * items[cart[i]][1]);
    }
    
    return totalPrice;
}

int main() {
    bool run = true;
    int totalPrice;

     while (run) {
        clearCart();
        clearMessage();
        cout << "Hi! Welcome to our Computer Peripheral shop" << endl;
        cout << "Enter your first name: ";
        string firstName;
        getline(cin, firstName);

        cout << "Enter you last name: ";
        string lastName;
        getline(cin, lastName);

        cout << "Hi! " << firstName << ", nice to meet you!" << endl << endl;

        bool back = true;
        while (back) {
            cout << "Shopping cart: " << endl;
            if (itemCounter == 0) {
                cout << "None" << endl << endl;
            } else {
                showShoppingCart();
                cout << endl << "\t\t\t\t\t\t\t\t   Total price: P" << calculateTotalPrice(totalPrice) << endl;
            }

            cout << "Hi " << firstName << ", " << "how may we help you?" << endl;
            mainMenu();
            int selection;
            validateCinInt(selection, 10);
            switch (selection) {
                case 0:
                    if (itemCounter == 0) {
                        clearMessage();
                        cout << "The command can't be processed as nothing is in the cart" << endl << endl;
                    } else {
                        clearMessage();
                        totalPrice = calculateTotalPrice(totalPrice);
                        cout << "You're about to buy the following items:" << endl << endl;
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
                            clearMessage();
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
                                clearMessage();
                                cout << "The checkout has been cancelled" << endl << endl;
                            } else {
                                clearMessage();
                                cout << "The amount you entered is in insufficient." << endl;
                                cout << "Please try again." << endl << endl;
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
                    clearMessage();
                    clearCart();
                    cout << "The cart has been cleared successfully" << endl << endl;
                    break;
                case 7:
                    if (itemCounter == 0) {
                        clearMessage();
                        cout << "The command can't be processed as nothing is in the cart" << endl << endl;
                    } else {
                        clearMessage();
                        showShoppingCart();
                        cout << "0. Back to main menu" << endl; 
                        int removeItem;
                        cout << "Choose a number to remove an item: ";
                        validateCinInt(removeItem, 0);
                        if (removeItem >= 1 && removeItem <= itemCounter) {
                            removeFromCart(removeItem-1);
                        } else {
                            clearMessage();
                            cout << "The number that you entered is not in one of the choices." << endl << endl;
                        }
                    }
                    break;
                case 8:
                    clearMessage();
                    about();
                    cout << endl;
                    break;
                case 9:
                    cout << endl;
                    back = false;
                    run = repeat(2);
                    break;
                default:
                    clearMessage();
                    cout << "Not in the choices. Please try again." << endl << endl;
                    break;
            }
        }
    }
    cout << endl << "Thank you for coming to our shop!" << endl;
    cout << "We hope to see you again." << endl;
    return 0;
}