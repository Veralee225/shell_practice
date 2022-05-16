#include <stdio.h>
#include <unistd.h>

/**
 * write a program that prints the parent process
 * 
 */
int main()
{
    int pid, status, status2;
    pid = fork();
    switch (pid)
}