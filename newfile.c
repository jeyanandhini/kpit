#include <stdio.h>
#include <stdlib.h>

int main()
{
     unsigned int swapped,x = 0x76543210;
  char *c = (char*) &x;

  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }

  swapped=((x>>24)&0xff)|((x>>8)&0xff00)|((x<<8)&0xff0000)|((x<<24)&0xff000000);

    printf ("swapped: 0x%x\n", swapped);
     printf("muxmaga");
  return 0;
}
