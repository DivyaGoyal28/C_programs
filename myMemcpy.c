#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* m_memcpy(void *dest, const void *src, int len)
{
	const char *m_src = (char*) src;
	char *m_dest = (char*) dest;

	/*int count=0;
	int blocks=sizeof(m_src)/sizeof(int);
	int one_by_one=sizeof(m_src)%sizeof(int);
	//copying by block
	while(block > 0)
	{
		*m_dest = *m_src;
		m_dest++;
		m_src++;
		block--;
		count++;
	}*/
	//copying bit by bit
	while(len > 0 )
	{
	    *m_dest = *m_src;
		m_dest++;
		m_src++;
		len--;
	}
}

void* m_memmov(void *dest, const void *src, int len)
{
	char *temp = (char*)malloc(sizeof(src));
	m_memcpy(temp,src,len);
	m_memcpy(dest,temp,len);
}
int main()
{
  char *ch_src="divya";
  char ch_dest[10];
  char ch_dest1[10];
  int len=6;
  m_memcpy(ch_dest,ch_src,len);
  printf("m_dest=%s\n",ch_dest);
  m_memmov(ch_dest1,ch_src,len);
  printf("m_dest1=%s\n",ch_dest1);
  return(0);
}
