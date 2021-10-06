#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"
int main(int argc, char *argv[])
{
	int i;
	struct pstat laTable;
	getpinfo(&laTable);
	for (i = 0; i < 25; i++)
	{
		//if (!laTable.inuse[i])
		// continue;
		printf(1, "Use: %d  Tickets: %d  PID: %d  Ticks: %d\n", laTable.inuse[i], laTable.tickets[i], 
				laTable.pid[i], laTable.ticks[i]);
	}
	exit();
}
