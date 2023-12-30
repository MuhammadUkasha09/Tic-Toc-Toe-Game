#include<iostream>
using namespace std;
	char A[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	char turn='X';
	int row, colum;
	bool draw;
void display()
{
	system("cls");
	cout<<"\t\tTic Tock Game produced By Dogar Programming\n\n";
	cout<<"   Player 1 [X] \n   Player 2 [O] \n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			A[i][j];
		}
	}
	cout<<"\t\t    |    |    \n";
	cout<<"\t\t "<<A[0][0]<<"  | "<<A[0][1]<<"  | "<<A[0][2]<<"   \n";
	cout<<"\t\t____|____|____\n";
	cout<<"\t\t    |    |    \n";
	cout<<"\t\t "<<A[1][0]<<"  | "<<A[1][1]<<"  | "<<A[1][2]<<"   \n";
	cout<<"\t\t____|____|____\n";
	cout<<"\t\t    |    |    \n";
	cout<<"\t\t "<<A[2][0]<<"  | "<<A[2][1]<<"  | "<<A[2][2]<<"   \n";
	cout<<"\t\t    |    |    \n"; 	
	
}
void palyerturn()
{
	int choice;
	if(turn=='X'){
	cout<<"\t player 1 [X] : ";}
	if(turn=='O'){
	cout<<"\t player 2 [O] : ";}
	cin>>choice;
switch(choice){

case 1:row=0;colum=0;break;
case 2:row=0;colum=1;break;
case 3:row=0;colum=2;break;
case 4:row=1;colum=0;break;
case 5:row=1;colum=1;break;
case 6:row=1;colum=2;break;
case 7:row=2;colum=0;break;
case 8:row=2;colum=1;break;
case 9:row=2;colum=2;break;
default:
cout<<"Invalid choice"<<endl;
	break;
	}
 if(turn=='X'&& A[row][colum]!='X'&&A[row][colum]!='O')
 {
 	A[row][colum]='X';
 	turn='O';
 }
 else if (turn == 'O'&& A[row][colum]!='X'&&A[row][colum]!='O')
 {
 	A[row][colum]='O';
 	turn='X';
 }
 else
 {
 	cout<<"\nBOX Already Filled! \n  Try Agian !!\n\n";
 	palyerturn();
 }
 display();
}
bool gameover()
{
	for(int i=0;i<3;i++){
		if(A[i][0]==A[i][1]&&A[i][0]==A[i][2]){
			return false;		
		}
	for(int i=0;i<3;i++){
		if(A[0][i]==A[1][i]&&A[0][i]==A[2][i]){
			return false;		
		}
	if(A[0][0]==A[1][1]&&A[0][0]==A[2][2]){
		return false;
	}	
	if(A[0][2]==A[1][1]&&A[0][2]==A[2][0]){
		return false;
	}
		}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			if(A[i][j]!='X' && A[i][j]!='O')
			return true;
		}
	}
	draw=true;
	return false;	
	}
}
int main()
{	
	while(gameover()){
	display();
	palyerturn();	
	}
if(turn=='X'&& draw==false)
cout<<"Player 2 [O] Wins!! Congratulation \n\n ";	
if(turn=='O'&& draw==false)
cout<<"Player 1 [X] Wins!! Congratulation \n\n ";
else 
cout<<"Game Draw !!";
}

