#include <iostream>

using namespace std;

//global variable
int Choose;
char Choose_str;
string cs;
string folder;

//banner
void banner() {
    cout << "__          ___             __   __ " << endl;
    cout << "\\ \\        / / |           /_ | / /" << endl;
    cout << " \\ \\  /\\  / /| |__   ___ ___| |/ /_" << endl;
    cout << "  \\ \\/  \\/ / | '_ \\ / __/ __| | '_ \\ " << endl;
    cout << "   \\  /\\  /  | | | | (__\\__ \\ | (_) |" << endl;
    cout << "    \\/  \\/   |_| |_|\\___|___/_|\\___/  " << endl;
    cout << "                                  v0.1 by Agustony0" << endl;
}

//meniu
void meniu() {
    cout << "[1].Injection" << endl;
    cout << "[2].How to use" << endl;
    cout << "[3].Exit" << endl;
}

//info
void info() {
    system("cls");
    cout << endl;
    cout << "     In order to use the wall hack you have to go to the menu" << endl;
    cout << "     and press 1 (Injection), after writing where the folder" << endl;
    cout << "     with Counter Strike 1.6 is located and where this program is." << endl;
    cout << "     To use wall hack enter the game, enter a match and press f1," << endl;
    cout << "     you can adjust according to your preferences (it has 3 adjustments)" << endl;
    cout << "     ,to close press again f1." << endl;
    cout << endl;
    cout << "Back to Menu? y ==>";

    //injection
}
void injection() {
    system("cls");
    cout << "[+]Let's begin...";
    cout << "First of all, we need 2 things, the location of the folder where the cs is." << endl;
    cout << "And the location of this program." << endl;
    cout << endl;
    cout << "[+] Location folder cs 1.6 ==> ";
    cin >> cs;
    cout << endl;
    cout << "[+]The location of this program ==> ";
    cin >> folder;
    string folder_all = folder + "\\wh\\opengl32.dll";
    string all = "copy " + folder_all + " " + cs;
    cout << all << endl;
    system(all.c_str());
    cout << endl;
    cout << endl;
    cout << "Is done! To activate the wall hack press F1 (must be in the game)";
    cout << endl;
    cout << endl;
    system("pause");
}

//main
int main()
{
    system("cls");
    banner();
    meniu();
    cout << endl;
    cout << "Choose==>> ";
    cin >> Choose;
    switch (Choose) {
    case 1:
        injection();
        break;
    case 2:
        system("cls");
        info();
        cin >> Choose_str;
        if (Choose_str == 'y' || Choose_str == 'Y')
            main();
    case 3:
        system("exit");
        break;
    default:
        system("cls");
        cout << "[!]Incorrect value." << endl;
        system("pause");
        main();
    }
    return 0;
}
