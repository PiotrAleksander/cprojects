#define ALLOCSIZE 10000 /*wielkość dostępnego obszaru pamięci*/

static char allocbuf[ALLOCSIZE]; /*pamięć dla alloc*/
static char *allocp = allocbuf; /*pierwsza wolna pozycja*/

char *alloc(int n){ /*zwraca wskaźnik do n znaków*/
	if(allocbuf + ALLOCSIZE - allocp >= n){ /*mieści się*/
		allocp += n;
		return allocp - n; /*stare p*/
	} else
		return 0; /*brak miejsca*/
}

void afree(char *p){
	if(p>=allocbuf && p<allocbuf + ALLOCSIZE)
		allocp = p;
}