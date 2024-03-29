#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
  int i = 0;

  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return dest;
}

int main(void)
{
  char src[40] = "hello 123";
  char dest[40];

  ft_strcpy(dest, src);
  printf("%s\n", dest);
  return 0;
}
