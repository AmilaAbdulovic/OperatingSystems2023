#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
 pid_t child_pid;
 child_pid = fork();
 if (child_pid == 0) {

    printf("Child process before rfork: PID=%d, PPID=%d\n", getpid(), getppid());
    vfork();
    printf("Child process after rfork: PID=%d, PPID=%d\n", getpid(), getppid());
    sleep(10);
    printf("Child process exiting...\n");
 _  exit(0);
 } else {
    printf("Parent process: PID=%d, child PID=%d\n", getpid(), child_pid);
    wait(NULL);
    printf("Parent process exiting...\n");
    exit(0);
 }
 printf("Executing ls command...\n");
 execlp("ls", "ls", "-l", NULL);
 perror("execlp");
 return 1;
 return 0;
}