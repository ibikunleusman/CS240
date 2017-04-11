
#include <stdlib.h>
#include "mystring.h"

// Type "man string" to see what every function expects.

#define CNULL 0

int mystrlen(char * s) {
	int i = 0;

	while (s[i] != '\0') {
		i++;
	}

	return i;
}

char * mystrcpy(char * dest, char * src) {
	int i;

	i = 0;

	while(src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}

char * mystrcat(char * dest, char * src) {
	int destlen = mystrlen(dest);
	int srclen = mystrlen(src);

	mystrcpy(dest + mystrlen(dest), src);
	return dest;
}

int mystrcmp(char * s1, char * s2) {
	if (s1==NULL || s2 == NULL)
	{
		return CNULL;
	}

	int i = 0;
	
	while((s1[i] == s2[i]) && s1[i]) {
		i++
	}

	return (s1[i] - s2[i]);

}

char * mystrstr(char * hay, char * needle) {
	int haylen = mystrlen(hay);
	int needlen = mystrlen(needle);
	int n = haylen - needlen;
	
	int i,temp;

	for (i = 0; i < n; i++)
	{
		temp = i;
		int j;
		for (j = 0; j < needlen; j++)
		{
			if (hay[temp] == needle[j])
			{
				if (j == (needlen - 1))
				{
					return needle;
				}
				temp++;
			}
			else {
				break;
			}
		}
	}

	return NULL;
	
}

char * mystrdup(char * s) {
	int strlen = mystrlen(s) + 1;
	char *copy = malloc(strlen);

	if (copy != NULL)
	{
		mystrcpy(copy,s);
	}

	return copy;

}

char * mymemcpy(char * dest, char * src, int n)
{
	char *newdest = (char *)dest;
	char *newsrc = (char *)src;

	int i;
	for (i = 0; i < n; i++)
	{
		newdest[i] = newsrc[i];
	}
}

