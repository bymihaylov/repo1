#include <iostream>
#include <iomanip>
using namespace std;

void setupGrid(int dim){
	int num = 0;
	for (size_t x = 0; x < dim; x++){
		for (size_t y = 0; y < dim; y++){
			cout << "|";
			cout << "  " << num << "  ";
			cout << "|";
			num++;
		}
		cout << endl;
	}
	
}
void updateGrid(int dim, const bool playerXMoves[], const bool playerOMoves[]){
	char playerX = 'X';
	char playerO = 'o';
	int playerMovesIter = 0;
	int num = 0;
	for (size_t x = 0; x < dim; x++){
		for (size_t y = 0; y < dim; y++){
			
			cout << "[";
			if(playerXMoves[playerMovesIter]){
				cout << "  " << playerX << "  ";
			} else if(playerOMoves[playerMovesIter])
				cout << "  " << playerO << "  ";
			else{
				cout << "  " << num << "  ";
			}
			// cout << "  " << num << "  ";
			cout << "]";

			playerMovesIter++;
			num++;
		}
		cout << endl;
	}
}


bool isWin(const bool arr[]){
	int wins[8][3] = {
		{0,1,2}, 
		{3,4,5}, 
		{6,7,8}, 
		{0,3,6},
		{1,4,7}, 
		{2,5,8},
		{0,4,8}, 
		{6,4,2}
	};
	// for (size_t row = 0; row < 8; row++)
	// {
	// 	for (size_t col = 0; col < 3; col++)
	// 	{
	// 		cout << "Row: " << wins[row][col] << ", ";
	// 	}
	// 	cout << endl;
		
	// }
	
	return true;
}


bool isValidMove(int currentMove, const bool playerXMoves[], const bool playerOMoves[]){
	return !(playerXMoves[currentMove] || playerOMoves[currentMove]);
}

void makeMove(char player, bool playerXMoves[], bool playerOMoves[], int numberOfSquares){
	int currentMove;
	do{
		cout << "\t" << player <<" е на ход. Въведете индекса на желаната клетка.\n";
		cin >> currentMove;
	} while (currentMove < 0 || currentMove > numberOfSquares);
	
	if(isValidMove(currentMove, playerXMoves, playerOMoves)){
		//player == 'X' ? playerXMoves[currentMove] = true : playerOMoves[currentMove] = true;
		if(player == 'X'){
			playerXMoves[currentMove] = true;
			isWin(playerXMoves);
		} else{
			playerOMoves[currentMove] = true;
			isWin(playerOMoves);
		}

	} else {
		cout << "Този ход вече е зает! Опитайте отново." << endl;
		makeMove(player, playerXMoves, playerOMoves, numberOfSquares);
	}
}
int main(){
	int dim;
	do
	{
		cout << "Въведете размер на игралното поле(3-9): ";
		cin >> dim;
	} while (dim < 3 || dim > 9);
	//dim = 3;
	setupGrid(dim);
	cout << "За да маркирате Вашия ход напишете числото отговарящо на неговата клетка.\n";

	
	int numberOfSquares = dim * dim;
	int currentMove;
	short board[9][9] = {0}; // 0 - prazno, 1 - X, 2 - O

	for(int i = 0; i < numberOfSquares; i++){
		makeMove(playerX, playerXMoves, playerOMoves, numberOfSquares);
		updateGrid(dim, playerXMoves, playerOMoves);
		makeMove(playerO, playerXMoves, playerOMoves, numberOfSquares);
		updateGrid(dim, playerXMoves, playerOMoves);
		cout << "\t\t\t\t Iter: " << i << endl;
	}


}