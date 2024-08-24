#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

void read_cards(int hand[NUM_CARDS][2]);
void analyze_hand(int hand[NUM_CARDS][2]);
void print_result(void);

bool straight, flush, four, three, royal_flush, ace_straight;
int pairs;

int main(void){
	int hand[5][2];

	while(true){
		read_cards(hand);
		analyze_hand(hand);
		for(int i = 0; i<NUM_CARDS; i++){
			printf(" RANK: %d, SUIT: %d, \n", hand[i][0], hand[i][1]);
		}

	print_result();
	
	}
}

/*read_cards: 
  Reads the cards into extermal variables; checks for badd cards and duplicate cards*/


void read_cards(int hand[NUM_CARDS][2]){
	char ch, rank_ch, suit_ch;
	bool bad_card, repeated_card;
	int cards_read = 0;
	int rank = 0, suit = 0;

	/*Reading cards*/
	while(cards_read < NUM_CARDS){
		bad_card = false;
		repeated_card = false;
		printf("Enter a card: ");

		/*Assignment of value*/
		rank_ch = getchar();
		switch(rank_ch){
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4':	rank = 2; break;	
			case '5': rank = 3;	break;	
			case '6': rank = 4; break;
		 	case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
				default: bad_card = true;
		}

		suit_ch = getchar();
		switch(suit_ch){
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default: bad_card = true;
		}

		while((ch = getchar()) != '\n'){
			if(ch != ' ') bad_card = true;
		}

		for(int i = 0; i<cards_read; i++){
			if(hand[i][0] == rank && hand[i][1] == suit){
				repeated_card = true;
				break;
			}
		}

		if(bad_card){
			printf("Bad card: ignored \n");
		}else if(repeated_card){
			printf("Duplicate card; ignored. \n");
		}else{
			hand[cards_read][0] = rank;
		 	hand[cards_read][1] = suit;
			cards_read++;
		}
	}
}


/*analyze_hands:
 	Determines what a hand contains. Stores the results into external variables
 */

void analyze_hand(int hand[NUM_CARDS][2]){
	int num_consec = 0;
	int repeated_ranks[NUM_RANKS] = {0};

	ace_straight = false;
	royal_flush = false;
	straight = false;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	/*Check for flush*/
	for(int card = 0; card < NUM_CARDS - 1; card++){
		if(hand[card][1] != hand[card+1][1]){
			flush = false;
			break;
		}
	}

	/*Check for straight*/
	for(int card = 0; card < NUM_CARDS - 1 ; card++){
		if(hand[card][0] < hand[card+1][0]){
			int tempSuit = hand[card+1][1];
			int tempRank = hand[card+1][0];			
		
			hand[card+1][0] = hand[card][0];
			hand[card+1][1] = hand[card][1];

			hand[card][0] = tempRank;
			hand[card][1] = tempSuit;

			card = -1;
		}
	}

	for(int card = 0; card < NUM_CARDS - 1; card++){
		if(hand[card][0] - hand[card+1][0] == 1){
			num_consec++;
		}
	}

	if(num_consec == NUM_CARDS - 1){
		straight = true;
		return;
	}

	/*Check for royal flush*/
	if(flush && hand[0][0] == 12 && hand[4][0] == 8){
		royal_flush = true;
	}

	/*Check for ace-low straights*/
	if(num_consec == 3 && hand[0][0] == 12){
		ace_straight = true;
	}

	/*check for 4-of-a-kind, 3-of-a-kind, and pairs*/
	for(int card = 0; card < NUM_CARDS; card++){
		repeated_ranks[hand[card][0]]++;
	}

	for(int rank = 0; rank < NUM_RANKS; rank++){
		if(repeated_ranks[rank] == 4) four = true;
		if(repeated_ranks[rank] == 3) three = true;
		if(repeated_ranks[rank] == 2) pairs++;
	}
}

/*
	print_result:
 	Notifies the user of the result, using the external variables set by analize hand.	
*/

void print_result(void){
	if(royal_flush){
		printf("Royal Flush");
	}else	if(straight && flush){
		printf("Straight flush");
	}else if(four){
		printf("Four of a kind");
	}else if(three && pairs == 1){
		printf("Full house");
	}else if(flush){
		printf("Flush");
	}else if(straight){
		printf("Straight");
	}else if(ace_straight){
		printf("Ace low straight");
	}else if(three){
		printf("Three of a kind");
	}else if(pairs == 2){
		printf("Two pairs");
	}else if(pairs == 1){
		printf("Pair");
	}else{
		printf("High card");
	}

	printf("\n\n");
}

