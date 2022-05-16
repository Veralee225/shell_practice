#include <stdio.h>
#include <unistd.h>

/**
 * get the process ID and Parent process ID of the current process
 * There are two functions getpid() to get process ID and
 * getpid() to get Parent Process ID of the current process.
 * this functions are declared in <unistd.h> header file 
 * 
 * Output: Process ID: 1298
 * Parent Process ID: 897
 */
int main ()
{
    int p_id, p_pid;

    p_id = getpid();
    p_pid = getpid();

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}
