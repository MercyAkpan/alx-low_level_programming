#include "main.h"
/**
  *
  *
  *
  *
  */
void print_buffer(char *b, int size)
{
	int bi = 0, j = 0, u = 0;
	
	while (bi < size)
	{
		printf ("%08x:", b[bi]);
		j = 0;
		while ((j < 10 && u % 10 != 0) || u = 0)
		{
			u = bi + j;
			printf (" %02x", b[u]);
			/*j++;*/
			u += 1;
			printf ("%02x", b[u]); 
			j = j + 2;/* can I add j++ here, and make it a while loop*/
		}
		printf {" "};
		/*charcter code*/
		prinf("\n");
		bi = bi + 10;
	}


}
