#include <stdio.h>

def hello1()
{
}

def hello() {
 int i = 0
 int i11 = 11;
 int i1 = 0;
 int y = 3;
}

size_t my_strlen(cons char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
