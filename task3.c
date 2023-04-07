#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void) {
 pid_t pid;
 int status;
 pid = fork();
 if (pid == -1) {
 perror("fork failed");
 exit(EXIT_FAILURE);
 } else if (pid == 0) {
 // Child process
 char *argv[] = { "ls", "-l", NULL };
 execv("/bin/ls", argv);
 perror("execv failed");
 exit(EXIT_FAILURE);
 } else {
 // Parent process
 wait(&status);
 if (WIFEXITED(status)) {
 printf("Child process exited with status %d\n", WEXITSTATUS(status));
 } else if (WIFSIGNALED(status)) {
 printf("Child process terminated by signal %d\n", WTERMSIG(status));
 } else {
 printf("Child process exited abnormally\n");
 }
 }
 return 0;
}