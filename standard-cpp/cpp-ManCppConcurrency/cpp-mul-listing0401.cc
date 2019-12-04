// Listing 4-1 Program (guess_it) used to launch find_code.

#include <iostream>
#include <string>
#include <spawn.h>
#include <sys/wait.h>

using namespace std;

int main(int argc, char* argv[], char* envp[]) {
	pid_t ChildProcess;
	int Value;
	posix_spawn(&ChildProcess, "echo a b c", NULL, NULL, argv, envp);
	wait(&Value);
	return 0;
}
