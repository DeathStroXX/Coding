#include<iostream>
using namespace std;

int  main() {
  static char *s[]={"josh", "technology","group"};
  char **ptr[]= {s+2,s+1,s}, **p
  p = ptr;
  ++p;
  printf("%s, **p+1")
  return 0;
}
