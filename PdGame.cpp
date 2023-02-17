#include<iostream>
#include<windows.h>
#include<conio.h>
#include<c.math>
using namespace std;
      // Functions
void printMaze(); 
void printTank(); 
void printEnemy();    
      //Player Character
char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};
       // Enemy Character
char enemy1[6] = {' ', ' ', ' ', '_', '_', '_'};
char enemy2[6] = {'<', '=', '=', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};
        //Player Coordinates
 int tankX = 5;
 int tankY = 5;
        //Enemy Coordinates
int enemyX = 30;
int enemyY = 10;                       
main()
{
  system("cls");
  printMaze();
  printTank();
  printEnemy();
}
void printMaze()
{
   cout << " ################################################################### " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;   
   cout << " #                                                                 # " <<endl;     
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " #                                                                 # " <<endl;
   cout << " ################################################################### " <<endl;
}
void printTank()
{
  gotoxy(tankX, tankY);
  for (int idx = 0; idx < 6; idx++)
   {
    cout << tank1[idx];
   }  
  for (int idx = 0; idx <6 ;idx++)
   {
    cout << tank2[idx];
   } 
} 
void printEnemy()
{
  gotoxy(enemyX, enemyY) ;
  for (int idx = 0; idx <6 ; idx++)
   {
    cout << enemy1[idx];
   }
  gotoxy(enemyX, enemyY + 1) ;
  for (int idx = 0; idx <6 ; idx++)
   {
    cout << enemy2[idx];
   }
  gotoxy(enemyX, enemyY + 2) ;
  for (int idx = 0; idx <6 ; idx++)
   {
    cout << enemy3[idx];
   }
  gotoxy(enemyX, enemyY + 3) ;
  for (int idx = 0; idx <6 ; idx++)
   {
    cout << enemy4[idx];
   }   
}