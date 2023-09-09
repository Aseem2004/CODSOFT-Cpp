#include <iostream>
using namespace std;

int main(){
int square[3][3]={{1,2,3},{4,5,6},{7,8,9}};
string p1,p2;
cout << "\n\n";
cout << "                                                              TIC-TAC-TOE";
cout << "\n"; 
cout << "Player 1 --> Enter your name: ";
cin >> p1;
cout << "Player 2 --> Enter your name: ";
cin >> p2;
cout << "\n";
cout << p1 << " will make the first move \n";
cout << p2 << " will make the second move \n";
cout << "\n";

cout<<("     |     |     \n");
printf("  %d  |  %d  |  %d  \n",square[0][0],square[0][1],square[0][2]);
cout<<("_____|_____|_____\n");
cout<<("     |     |     \n");
printf("  %d  |  %d  |  %d  \n",square[1][0],square[1][1],square[1][2]);
cout<<("_____|_____|_____\n");
cout<<("     |     |     \n");
printf("  %d  |  %d  |  %d  \n",square[2][0],square[2][1],square[2][2]);
cout<<("     |     |     \n");	

}



