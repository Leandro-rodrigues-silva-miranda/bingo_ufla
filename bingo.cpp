#include <iostream>
using namespace std;


int main(){
	int cartela[5][5];
	int j=0,i=0, bingo=-1;
	while (j<5 and i<5){
		cin >> cartela[i][j];
		j++;
		if (j==5){
			i++;
			j=0;
			}
		}
	i=0;
	j=0;
	while (j<5 and i<5){
		if (cartela[i][j]==1){
			j++;
			if (j==5){
				bingo = 1;
				}
			}else{
				j=0;
				i++;
				}
		}
	i=0;
	j=0;
	while (j<5 and i<5){
		if (cartela[i][j]==1){
			i++;
			if (i==5){
				bingo = 2;
				}
			}else{
				i=0;
				j++;
				}
		}
	i=0;
	j=0;
	while (j<5 and i<5){
		if (cartela[i][j]==1){
			i++;
			j++;
			if (i==5 and j==5){
				bingo=3;
				}
			}else{
				break;
				}
		}
	i=4;
	j=0;
	while (j<5 and i>-1){
		if (cartela[i][j]==1){
			i--;
			j++;
			if (i==-1 and j==5){
				bingo=4;
				}
			}else{
				break;
				}
		}
	
	cout << bingo << endl;
		
		
		


	return 0;
	}
