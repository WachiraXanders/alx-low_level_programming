#include <stdio.h>
/**
	*wildcmp - this line defines the function wildcmp with
	*two parameters both of which are pointers to characters
	*this function will compare two strings.
	*@s1: The first pointer to character due to the use
	*of 'char' therefore  meaning that char *s1 represents a
	*string of characters and the pointer points to the
	*first character of the string.
	*@s2 : Another pointer to a character of the second
	*string.
	*If both strings are empty they are considered same.
	*Equate each  string pointer to zero
	*Return one to mean that they are equal.
	*If both characters match or if *S2 has a wild card,return
	*and call back the function incrementing one in each.
	*The wildcmp(s1, s2 + 1) helps the * match with an empty
	*string
	*If they don't match and there is no *s2 then it should
	*return 0.
	*Return: As follows above.
	*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
