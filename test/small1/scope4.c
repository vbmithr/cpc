/* Generated by Frontc */

extern void* malloc(unsigned int size);

char *  *  pm_allocarray(int cols , int rows , int size )
{
  char *  *  its ;
  int i ;
  its = (char *  *  )malloc(rows * sizeof(char *  ));
  its[0] = (char *  )malloc(rows * cols * size);
  return its;
}



int ppm_parsecolor(char *  colorname , int maxval )
{
  int hexit[256] , i ;
  int p ;
  return p;
}

static char colorname[200] ;
