/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char* word;
	int i = 0,firstIndex=-1,lastIndex=-1;
	while (str[i]!='\0')
	{
		for (; str[i] == ' '; i++);
		if (str[i] == '\0') break;
		firstIndex = i;
		for (; str[i] != ' '&&str[i]!='\0'; i++);
		lastIndex = i-1;
	}
	if (firstIndex == -1)
		return "";
	word = (char*)malloc(sizeof(char)*(lastIndex - firstIndex + 2));
	for (i = 0; firstIndex <= lastIndex; firstIndex++)
		word[i++] = str[firstIndex];
	word[i] = '\0';
	return word;
}
