#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#include "colours.h"

void cstyle_list()
{
  DIR*           dir;
  struct dirent* dirp;
  if ((dir = opendir("*")) == NULL)
    { fprintf(stderr, red"Failed to open directory"); exit(-1); }
  while ((dirp = readdir(dir)) != NULL) printf("%s\n", dirp->d_name);

  closedir(dir);
  return;
}
