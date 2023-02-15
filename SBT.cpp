#include<iostream>
#include<windows.h>
using namespace std;

/*------------------------------------------------------- Variables -----------------------------------------------------------------*/
int options[3];
/*------------------------------------------------------- Functions ----------------------------------------------------------------*/
void printHeader();
void printLOGO();

/*------------------------------------------------------ Main ---------------------------------------------------------------------*/
main()
{
    system("cls");
    printLOGO();
    Sleep(5000);
    system("cls");
    printHeaderandMenu();
    system("cls");
     
}   
void printHeader()
{
    cout << "   ##        ##        ##     ########  ########  #######   " << endl;
    cout << "  ## #      # ##     ##  ##        ##   ##        ##     #  " << endl;
    cout << "  ##  #    #  ##    ##    ##      ##    ########  #######   " << endl;
    cout << "  ##   #  #   ##    ## ## ##    ##      ##        ## ##     " << endl;
    cout << "  ##    ##    ##    ##    ##  ## #####  ########  ##   ##   " << endl;

    cout << "      #######   ###      ##     ###     ## " << endl;
    cout << "      ##    ##   ##      ##     ## ##   ## " << endl;
    cout << "      #######    ##      ##     ##   ## ## " << endl;
    cout << "      ## ##      ##      ##     ##    #### " << endl;
    cout << "      ##   ###    ########      ##     ### " << endl; 
    
}    

    int option_No ;
    cout << "1. Start Game :" <<endl;
    cout << "2. Options :   " <<endl;
    cout << "3. Exit : "  << endl;
    cout << "Enter the option number : "<< endl;
    cin >> option_No;
    return option_No;
}
void printLOGO()
{
   char Box = 223;
    cout << "      ##      ##     &&       " << endl;
    cout << "    **  **  $$  %%   ##       " << endl;
    cout << "    **  **  ## $$ ## @##)>>   " << endl;
    cout << "    ## $%%    $$ %%*$         " << endl;
    cout << "     $$)       %$   %^*)>     " << endl;
    cout << endl;
    cout << endl;
    cout << "       " << Box << "UNI GAMES  " << endl;
}
