#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(){
  //char timeout[1000] = "timeout 15 ";
  char command[1000] = "./refcountScript";
  //char command[1000] = "(sleep 4 ; timeout 4 perl script.pl 127.0.0.1:11211) & (sleep 8 ; ./killScript ) & sudo ./memcached -p 11211 -U 11211 -u root -d -vv 1";
  //strcat(timeout, command);
  //printf("timeout is %s\n", timeout);
  //int ret_val = system(timeout);
  int ret_val = system(command);
  if(WIFEXITED(ret_val)){
    printf("WEXITSTATUS OS %d\n", WEXITSTATUS(ret_val));
    if (WEXITSTATUS(ret_val) < 0 || WEXITSTATUS(ret_val) > 1) {
      printf("return value was not 0 or 1, it was %d\n", ret_val);
    }
  }
  else{
    printf("W did not exit\n");
  }
}
