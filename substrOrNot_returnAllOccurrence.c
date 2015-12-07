#include <stdio.h>
#include <string.h>

int main()
{
	char *str="This isis ais boisok.";
	char *ptr;
	char *substr="is";
	int length=strlen(str);
	int count =0;
	int index;
	char *tempstr=str;
	
	
while(*str !=NULL )
	{
		
	printf("actual string=%s\n",str);
	
	ptr = strstr(str,substr);
	if( ptr != NULL)
	{
		index = (ptr - str);
	    printf("index where %s exists = %d \n ",substr,index+count); 
	}
	else
	break;
	tempstr = &str[index+(strlen(substr)-1)];

    if(*tempstr++ != NULL)
    {
		str=tempstr;
	    length=strlen(str);
	    count=index+(strlen(substr))+count;
	}
	else
	break;
	printf("\n");
}
	return 0;
}
