int strcmp(char *s, char *t);

int main(){

}


int strcmp(char *s, char *t){
	for(; *s == *t; t++, s++){
		if(*s == '\0'){
			return 0;
		}
	}

	return *s - *t;
}

