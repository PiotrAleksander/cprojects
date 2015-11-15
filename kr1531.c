#include <stdio.h>

main(){
	int c, s, t, nl;
	s = t = nl = 0;
	
	while((c=getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c=='\t')
			++t;
		if(c==' ')
			++s;
	printf("Spacje: %d, Tabulatory: %d, Wiersze: %d", s, t, nl);
}