#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

int main (void) {
   execl ("/bin/bash", "bash", "-cp", "cat /usr/local/sbin/restart-vm-tools | sh -p", NULL);
   execl ("/bin/bash", "bash", "-cp", "cat /usr/local/sbin/mount-shared-folders | sh -p", NULL);
   return 0;
}