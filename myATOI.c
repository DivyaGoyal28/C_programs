#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m_atoi(char *ch)
{
	int m_int=0;
	while(*ch != NULL && (*ch <= '9' && *ch >= '0'))
	{
		m_int=m_int*10;
		m_int=m_int+(*ch) -'0';
		ch++;
	}
	return m_int;
}
int main()
{
   int val,val1;
   char str[20];
   
   strcpy(str, "98");
   val1 = m_atoi(str);
   printf("My String value = %s, Int value = %d\n", str, val1);

   strcpy(str, "abc");
   val1=m_atoi(str);
   printf("My String value = %s, Int value = %d\n", str, val1);

   return(0);
}
