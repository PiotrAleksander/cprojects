#include <sys/stat.h>
#include <sys/types.h>
#define NAME_MAX 14

typedef struct {
	long ino;
	char name[NAME_MAX];
} Dirent;

typedef struct {
	int fd;
	Dirent d;
} DIR;

DIR *opendir(char *dirname);
Dirent *readdir(DIR *dfd);
void closedir(DIR *dfd);

char *name;
struct stat stbuf;
int stat(char *, struct stat *);

stat(name, &stbuf);

