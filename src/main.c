#include <dirent.h>
#include <stdio.h>
#include <string.h>

#define OPTSTR "hv"

extern void die(char*);

int main(int argc, char** argv)
{
  DIR*            dir;
  struct dirent* dirp;
  char*          dir_;
  
  dir_ = ".";

  if ((dir = opendir(argv[1])) == NULL) die("Failed to find dir");
  while ((dirp = readdir(dir)) != NULL) printf("%s\n", dirp->d_name);

  closedir(dir);
  return 0;
}
