#include <stdio.h>
#include <ctype.h>

int main(){
	int m1, h1, timeInMinutes;
	char a1;

	printf("Enter a time: ");
	scanf("%d:%d", &h1, &m1);
	while(a1 = getchar(), a1 == ' ');

	if(toupper(a1) == 'P'){
		timeInMinutes = ((12 + h1) * 60) + m1;
	}else{
		timeInMinutes = (h1 * 60) + m1;
	}

	int d1 = ((9 * 60 + 43) - (8 * 60)) / 2,
			d2 = ((11*60+19) - (9*60+43)) / 2,
		  d3 = ((12*60+47) - (11*60+19)) / 2,
			d4 = ((14*60) - (12*60+47)) / 2,
		  d5 = ((15*60+45) - (14*60)) / 2,
		  d6 = ((19*60) - (15*60+45)) / 2,
			d7 = ((21*60+45) - (19*50)) / 2,
			d8 = ((21*60+45) - (8*60)) / 2;

	if(timeInMinutes > 480 - d8 && timeInMinutes < 480 + d1){
		printf("Closest departure time in 8:00am");
	}else if(timeInMinutes < 583 + d2){
		printf("Closest departure time in 9:43am");
	}else if(timeInMinutes < 679 + d3){
		printf("Closest departure time in 11:19am");
	}else if(timeInMinutes < 767 + d4){
		printf("Closest departure time in 12:47am");
	}else if(timeInMinutes < 840 + d5){
		printf("Closest departure time in 2:00pm");
	}else if(timeInMinutes < 945 + d6){	
		printf("Closest departure time in 3:45pm");
	}else if(timeInMinutes < 1140 + d7){
		printf("Closest departure time in 7:00pm");
	}else if(timeInMinutes < 1440){
		printf("Closest departure time in ");
	}
}

