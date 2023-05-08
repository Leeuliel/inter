
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* stringDuplicator(char* s, int times){
assert( s != NULL);
assert(times > 0);
int len = strlen(s);
char* out = malloc(len*times + 1);
assert(out != NULL);
for (int i = 1; i <= times; i++){
  strcpy(out + (i * len), s);
}
return out;
}