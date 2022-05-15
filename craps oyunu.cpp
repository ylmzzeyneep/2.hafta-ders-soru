#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i, y, t=0, z=0;
	int winner, score, sScore;
	srand(time(NULL));
	
	i-1 + (rand()%6);
	y=1+ (rand()%6);
	
	printf("No more bets, GOOD LUCK.");
	
	printf("\n first dice is %d", i);
	printf("\n second dice is %d", y);
	
	if(i+y==7 || i+y==11){
		printf("you win");
	}
	else if(i+y ==2|| i+y==3|| i+y==12){
		printf("\n you lose");
	}
	for(t; t<10;){
		if(i+y==4 || i+y==5 || i+y==6 || i+y==8 || i+y==9 || i+y==10){
			score-i+y;
			for(z; z<10;){
				i-1 + (rand()%6);
	            y=1+ (rand()%6);
	            sScore-i+y;
	            if(score==sScore){
	            	printf("\n you win");
	            	break;
				}
				if(i+y==7){
				printf("\n you lose");
				break;
				}
	
			}
		}
	}
	return 0;
	}
