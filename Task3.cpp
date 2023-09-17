#include <iostream>
using namespace std;

const int n=3;

// Defining the Structure of the Board
void BoardStructure(char array[][n]){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}
}

// Checking the Winner of the game i.e. if 3 simultaneous boxes are marked in either diagonal, horizontal or vertical direction
bool CheckingWinner(char array[][n], char ch){
	int count;
	for (int i=0;i<n;i++){
		count=0;
		for (int j=0;j<n;j++){
			if (array[i][j] == ch)
			count++;
		}
		if (count == n)
		return true;
	}
	for (int i=0;i<n;i++){
		count=0;
		for (int j=0;j<n;j++){
			if (array[j][i] == ch)
			count++;
		}
		if (count == n)
		return true;
	}
	count=0;
	for (int i=0;i<n;i++){
		if (array[i][i] == ch)
			count++;
	}
	if (count == n)
	return true;
	return false;
}

// Checking if the Game is a Draw
bool CheckingDraw(char array[][n]){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (array[i][j] == '-')
			return false;
		}
	}
	return true;
}

int main(){
    
bool x=true;
while(x){

string p1,p2;
cout << "\n\n";
cout << "                                                              TIC-TAC-TOE";
cout << "\n"; 
cout << "Player 1 --> Enter your name: ";
cin >> p1;
cout << "Player 2 --> Enter your name: ";
cin >> p2;
cout << "\n";
cout << p1 << " will make the first move (Will be assigned X) \n";
cout << p2 << " will make the second move (Will be assigned 0) \n";
cout << "\n";

char board[n][n];
for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			board[i][j] = '-';
		}
	}
bool EndGame=false;
int r,c,turn=1;
char player;

while (!EndGame){
	BoardStructure(board);
		if (turn == 1){
			player = 'X';
			turn = 2;
		}
		else if (turn == 2){
			player = '0';
			turn = 1;
		}
        
		do{
			cout << "Player assigned with " << player << ": Make your move" << endl;
			cout << "Enter Row Number (1/2/3): "; 
            cin >> r;
			cout << "Enter Column Number (1/2/3): "; 
            cin >> c;
			r--;
			c--;
            cout << "The game is ongoing" << endl;
            cout << "\n";
		} while (!(r>=0 && r<n && c>=0 && c<n && board[r][c] == '-'));
		board[r][c] = player;
		if (CheckingWinner(board, player)){
			BoardStructure(board);
			cout << "Player assigned with " << player << " Wins" << endl;
			EndGame = true;
        }
		else if (CheckingDraw(board)){
			BoardStructure(board);
			cout << "The Game has ended in a Draw" << endl;
			EndGame = true;
		}}
        cout<<"Do you want to play again? Enter 1 for Yes and 0 for No: ";
        cin>>x;	
}
	return (0);
}
