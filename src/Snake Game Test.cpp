//============================================================================
// Name        : Snake.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;
int board[5][5]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

string FOOD[2][3]{
	" "," "," ",
	"*","*","*"
};
string row = "--- --- --- --- ---";
string wall = "||";
string ceiling = "##===================##";
string inwall = "|";
string space = "   ";
string MrSnake[3][3]{
	" "," "," ",
	" "," "," ",
	"(","!",")",
};


void db(int snake, int v, int i, int snakePlace, int s, int mapy, int mapx){
	cout << ceiling << endl;
		for(int t = 0, x = 0, mapx =0 ; t < 5 ; t++, x++, mapx++){
			for(int c = 0, y = 0, mapy=0 ; c < 5 ; c++, y++, mapy++){
				if(c == 0){cout << wall;}

				if(board[x][y] != 1 && board[mapx][mapy] != 2){cout << space;}

				if(board[x][y] == 1){
					for(int q = 0 ; q < 3 ; q++){
						cout << FOOD[v][q];
					}
				}
				if(board[mapx][mapy] == 2){
					for(int q=0; q<3; q++){
					cout << MrSnake[snake][q];}}

				if(c != 4){cout << inwall;}
				if(c == 4){cout << wall << endl;}
			}
			if(t != 4){cout<< wall << row << wall << endl;}
		}
		cout << ceiling << endl;
}

int MapStarter(int snake, int v,int i, int snakePlace, int s, int mapy, int mapx, int snek){
	//int george;


cout << ceiling << endl;
	for(int t = 0, x = 0, mapx =0 ; t < 5 ; t++, x++, mapx++){
		for(int c = 0, y = 0, mapy=0 ; c < 5 ; c++, y++, mapy++){
			if(c == 0){cout << wall;}

			if(board[x][y] != 1 && board[mapx][mapy] != 2){cout << space;}

			if(board[x][y] == 1){
				for(int q = 0 ; q < 3 ; q++){
					cout << FOOD[v][q];
				}
			}
			if(board[mapx][mapy] == 2){
				for(int q=0; q<3; q++){
				cout << MrSnake[snake][q];}}

			if(c != 4){cout << inwall;}
			if(c == 4){cout << wall << endl;}
		}
		if(t != 4){cout<< wall << row << wall << endl;}
	}
	cout << ceiling << endl;
	return 0;
}




int main(){
	//void db ();
	//db();
	bool newfood;
	int mapx =2;
	int mapy =2;
	int i=0;
	int snake=0;
	int v=0;
	int snakePlace=0;
	int scorecount = 0;
	srand(time(NULL));
		int s = rand()%25;
	int db(int snake, int v, int i, int snakePlace, int s, int mapy, int mapx);
	int MapStarter(int snake, int v, int i, int snakePlace, int s, int mapy, int mapx, int snek);
	char z;
	int x = 0, y = 0;
	bool keepplaying = true;

	int snek;

	board[mapx][mapy] = 2;
	snek = 2;
	snake = board[2][2];

	do{
	if(i==0){
	switch(s){
	case 0: board[0][0] = 1; v = board[0][0];  break;
	case 1: board[0][1] = 1; v = board[0][1];  break;
	case 2: board[0][2] = 1; v = board[0][2];  break;
	case 3: board[0][3] = 1; v = board[0][3];  break;
	case 4: board[0][4] = 1; v = board[0][4];  break;
	case 5: board[1][0] = 1; v = board[1][0];  break;
	case 6: board[1][1] = 1; v = board[1][1];  break;
	case 7: board[1][2] = 1; v = board[1][2];  break;
	case 8: board[1][3] = 1; v = board[1][3];  break;
	case 9: board[1][4] = 1; v = board[1][4];  break;
	case 10: board[2][0] = 1; v = board[2][0]; break;
	case 11: board[2][1] = 1; v = board[2][1]; break;
	case 12: board[2][2] = 1; v = board[2][2]; break;
	case 13: board[2][3] = 1; v = board[2][3]; break;
	case 14: board[2][4] = 1; v = board[2][4]; break;
	case 15: board[3][0] = 1; v = board[3][0]; break;
	case 16: board[3][1] = 1; v = board[3][1]; break;
	case 17: board[3][2] = 1; v = board[3][2]; break;
	case 18: board[3][3] = 1; v = board[3][3]; break;
	case 19: board[3][4] = 1; v = board[3][4]; break;
	case 20: board[4][0] = 1; v = board[4][0]; break;
	case 21: board[4][1] = 1; v = board[4][1]; break;
	case 22: board[4][2] = 1; v = board[0][2]; break;
	case 23: board[4][3] = 1; v = board[4][3]; break;
	case 24: board[4][4] = 1; v = board[4][4]; break;
	}
	}
	}while(s == snek);

	MapStarter(snake, v, i, snakePlace, s, mapy, mapx, snek);
//	cout << &v;

	do{
		i=0;
		if(newfood == true){
		do{
		if(i==0){
			scorecount++;
			int s = rand()%25;
		switch(s){
		case 0: board[0][0] = 1; v = board[0][0];  break;
		case 1: board[0][1] = 1; v = board[0][1];  break;
		case 2: board[0][2] = 1; v = board[0][2];  break;
		case 3: board[0][3] = 1; v = board[0][3];  break;
		case 4: board[0][4] = 1; v = board[0][4];  break;
		case 5: board[1][0] = 1; v = board[1][0];  break;
		case 6: board[1][1] = 1; v = board[1][1];  break;
		case 7: board[1][2] = 1; v = board[1][2];  break;
		case 8: board[1][3] = 1; v = board[1][3];  break;
		case 9: board[1][4] = 1; v = board[1][4];  break;
		case 10: board[2][0] = 1; v = board[2][0]; break;
		case 11: board[2][1] = 1; v = board[2][1]; break;
		case 12: board[2][2] = 1; v = board[2][2]; break;
		case 13: board[2][3] = 1; v = board[2][3]; break;
		case 14: board[2][4] = 1; v = board[2][4]; break;
		case 15: board[3][0] = 1; v = board[3][0]; break;
		case 16: board[3][1] = 1; v = board[3][1]; break;
		case 17: board[3][2] = 1; v = board[3][2]; break;
		case 18: board[3][3] = 1; v = board[3][3]; break;
		case 19: board[3][4] = 1; v = board[3][4]; break;
		case 20: board[4][0] = 1; v = board[4][0]; break;
		case 21: board[4][1] = 1; v = board[4][1]; break;
		case 22: board[4][2] = 1; v = board[0][2]; break;
		case 23: board[4][3] = 1; v = board[4][3]; break;
		case 24: board[4][4] = 1; v = board[4][4]; break;
		}
		}
		}while(s == snek);
		}


		if(keepplaying == true){
	do{
		newfood = false;
		i=1;
		snakePlace=1;

		cin  >> z;

		switch(z){
		case'w':
//			for(int snakelength = -1; snakelength < scorecount; snakelength++){
			board[mapx][mapy]=0;
			mapx=mapx-1;
			board[mapx][mapy]=2;
//			}
//			cout<< "it works 1";
			break;
		case'a':
			board[mapx][mapy]=0;
			mapy=mapy-1;
			board[mapx][mapy]=2;
//			cout<< "it works 2";
			break;
		case's':
			board[mapx][mapy]=0;
			mapx=mapx+1;
			board[mapx][mapy]=2;
//			cout<< "it works 3";
			break;
		case'd':
			board[mapx][mapy]=0;
			mapy=mapy+1;
			board[mapx][mapy]=2;
//			cout<< "it works 4";
			break;
		}
		db(snake, v, i, snakePlace, s, mapy, mapx);

		if((mapx>4) || (mapx<0) || (mapy>4) || (mapy<0)){
			keepplaying = false;
			break;
		}
		if(board[0][0] != 1 && board[0][1] != 1 && board[0][2] != 1 && board[0][3] != 1 && board[0][4] != 1
				&& board[1][0] != 1 && board[1][1] != 1 && board[1][2] != 1 && board[1][3] != 1 && board[1][4] != 1
				&& board[2][0] != 1 && board[2][1] != 1 && board[2][2] != 1 && board[2][3] != 1 && board[2][4] != 1
				&& board[3][0] != 1 && board[3][1] != 1 && board[3][2] != 1 && board[3][3] != 1 && board[3][4] != 1
				&& board[4][0] != 1 && board[4][1] != 1 && board[4][2] != 1 && board[4][3] != 1 && board[4][4] != 1)
			newfood=true;

	}while( newfood == false);}
	}while(keepplaying == true);
	cout << "Game Over! Better Luck Next Time"<< endl;
	cout << "Your score is: " << scorecount<< endl;


	cout << endl << &snake;
	cout << endl << &board[3][2] - 5 <<  "  "  <<&board[2][2];

	return 0;
}
