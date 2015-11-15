#include <ctype.h>

int getint(int *pn){
	int c, sign;
	
	while(isspace(c = getch()))
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
		ungetch(c); /*funkcja jest w ćwiczeniu 4.3*/
		return 0;
	}
	sign = (c== '-') ? -1 : 1;
	if(c=='+' || c == '-')
		c=getch();
	for(*pn=0; isdigit(c), c =getch())
		*pn = 10 * *pn + (c- '0');
	*pn *= sign;
	if(c!=EOF)
		ungetch(c);
	return c;
}