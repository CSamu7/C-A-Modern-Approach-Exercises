#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1], hours_str[3], minutes_str[3], month_str[3];
	int day, month, i, hours, minutes, num_remind = 0;

	while(1){
		if(num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}

		printf("Enter month/day, time and reminder: ");
		scanf("%2d/%2d", &month, &day);

		if(month == 0) break;

		if(day < 0 || day > 31 || month < 0 || month > 12){
			while(getchar() != '\n');
			printf("ERROR: bad day\n");
			continue;
		}

		scanf("%2d:%2d", &hours, &minutes);

		if(hours < 1 || hours > 23 || minutes < 1 || minutes > 59){
			while(getchar() != '\n');
			printf("ERROR: bad time\n");
			continue;
		}

		sprintf(month_str, "%2d", month);
		sprintf(day_str, "%2d", day);	
		sprintf(hours_str, "%2d", hours);
		sprintf(minutes_str, "%2d", minutes);

		read_line(msg_str, MSG_LEN);

		for(i = 0; i<num_remind; i++){
			int months = strcmp(month_str, reminders[i]) <= 0;
			int days = strcmp(day_str, reminders[i] + 3) <= 0;  
			int hours = strcmp(hours_str, reminders[i] + 6) < 0;
			int minutes = strcmp(minutes_str, reminders[i] + 9) < 0;

			if((months || days) && (hours || minutes)){
				break;
			}
		}

		for(int j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j-1]);
		}

		strcpy(reminders[i], month_str);
		strcat(reminders[i], "/");
		strcat(reminders[i], day_str);
		strcat(reminders[i], " ");
		strcat(reminders[i], hours_str);
		strcat(reminders[i], ":");
		strcat(reminders[i], minutes_str);
		strcat(reminders[i], msg_str);	

		num_remind++;
	}

	printf("\nDate Time Reminder\n");
	for(int i = 0; i< num_remind; i++){
		printf("%s\n", reminders[i]);
	}

	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar()) != '\n'){
		if(i < n){
			str[i++] = ch;
		}
	}

	str[i] = '\0';
	return i;
}

