#include <stdio.h>
#define MAXLINE 100
/*Gorszy od kr19, bo o10-party na zmiennych zewnętrznych, które nie są czyszczone po zakończeniu działania programu.*/
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main(){
	int len;
	extern int max;
	extern char longest[];
	
	max=0;
	while((len=getline()) > 0)
		if(len>max){
			max=len;
			copy();
		}
	if(max>0)
		printf("%s", longest);
	return 0;
}

int getline(void){
	int c, i;
	extern char line[];
	
	for(i=0;i<MAXLINE-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i]=c;
	if(c=='\n'){
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return i;
}

void copy(void){
	int i;
	extern char line[], longest[];
	
	i=0;
	while ((longest[i]=line[i])!='\0')
		++i;
}