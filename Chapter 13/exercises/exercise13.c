#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(){
	char domain[60] = "knking.com";
	char index_url[60];

	build_index_url(domain, index_url);

	printf("%s", index_url);
}

void build_index_url(const char *domain, char *index_url){
	strcat(index_url, "http://www."); 
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}

