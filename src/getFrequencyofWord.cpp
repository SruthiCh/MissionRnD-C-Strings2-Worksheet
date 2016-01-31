/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int getLength(char* s)
{
	int l;
	for (l = 0; s[l] != '\0'; l++);
	return l;
}

int count_word_in_str_way_1(char *str, char *word){
	int i, j, sLen, wLen,count=0;
	sLen = getLength(str);
	wLen = getLength(word);
	for(i = 0; i<= (sLen-wLen); i++)
	{
		j = 0;
		while (j < wLen && word[j] == str[i + j])
			j++;
		if (j==wLen) count++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	
	return 0;
}

