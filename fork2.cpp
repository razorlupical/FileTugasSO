#include <iostream>
using namespace std;
#include <sys/types.h>
#include <unistd.h>
	/* getpid() dan fork() adalah system call yg
	dideklarasikan pada unistd.h.
	Menghasilkan suatu nilai dengan type pid_t.
	pid_t adalah type khusus untuk process id yg ekuivalen dg int
	*/
	
int main(void) {
	pid_t childpid;
	int x = 5;
	childpid = fork();
	while (1) {
		cout << "This is process " << getpid() <<
		endl; cout << "x is " << x << endl;
		sleep(1);
		x++;
	}
return 0;
}
