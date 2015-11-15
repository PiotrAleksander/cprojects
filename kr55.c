void strcpy(char *s, char *t){
	int i;
	
	i=0;
	while((s[i] = t[i]) != '\0')
		i++;
}

void strcpy(char *s, char *t){
	while((*s = *t) != '\0'){
		s++;
		t++;
	}
}

void strcpy(char *s, char *t){
	while((*s++ = *t++) != '\0')
		;
}

void strcpy(char *s, char *t){
	while(*s++ = *t++)
		;
}

/*Następne funkcje zwracaja <0 jeżeli s<t; 0, jeżeli s == t; >0, jeżeli s>t*/
int strcmp(char *s, char *t){
	int i;
	
	for(i=0; s[i] == t[i]; i++)
		if(s[i]=='\0')
			return 0;
	return s[i] - t[i];
}

int strcmp(char *s, char *t){
		for( ; *s==*t; s++, t++)
			if(*s == '\0')
				return 0;
		return *s - *t;
}