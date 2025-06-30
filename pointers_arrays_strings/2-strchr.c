#include "main.h"

/**
  *
  *
  *
  *
  *
  *
  *
  **/

char *_strchr(char *s, char c)

{
	int i = 0;
	char *p;

	for (; s[i] != c && s[i] != '\0' ; i++)
	{
	}
	if (s[i] == c)
	{
		p = &s[i];

		return (p);
	}
	else
	{
		return (0);
	}
}
