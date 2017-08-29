#include <stdio.h>
#include <stdlib.h>

typedef struct
{
 int x;
 int y;
} Foo;
void allocate_node (Foo** f)
{
 *f = (Foo *) malloc ( sizeof(Foo) );
} 
int main ()
{
 Foo * p;
 allocate_node (&p);
 p->x = 2;
 p->y = 3;
 free(p);
 return 0;
} 
