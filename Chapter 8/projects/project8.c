#include <stdio.h>

int main(){
	int grades[5][5], totalScore, lowScore, highScore;
	double avgScore;

	for(int i = 0; i<5; i++){
		printf("Enter quiz %d: ", i+1);
		for(int j = 0; j<5; j++){
			scanf("%d", &grades[i][j]);
		}
	}

	printf("Students information. \n");

	for(int i = 0; i<5; i++){
		totalScore = 0;

		for(int j = 0; j<5; j++){
			totalScore += grades[j][i];
		}

		avgScore = (double) totalScore / 5;

		printf("\tStudent %d.\n", i+1);
		printf("\t\tTotal Score: %d\n", totalScore);
		printf("\t\tAverage Score: %lf\n", avgScore);
	}

	printf("Quizzes information.\n");

	for(int i = 0; i<5; i++){
		totalScore = 0;
		highScore = grades[i][0];
		lowScore = grades[i][0];

		for(int j = 0; j<5; j++){
			totalScore += grades[i][j];

			if(highScore >= grades[i][j]){
				highScore = grades[i][j];
			}

			if(lowScore <= grades[i][j]){
				lowScore = grades[i][j];
			}
		}

		avgScore = (double) totalScore / 5;
		printf("\tQuiz %d.\n", i+1);
		printf("\t\tAverage score %lf\n", avgScore);
		printf("\t\tHigh score %d\n", lowScore);
		printf("\t\tLow score %d\n", highScore);
	}
}

