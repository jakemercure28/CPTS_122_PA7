#include "bankaccount.h"
#include "savingsaccount.h"
#include "checkingaccount.h"

using namespace std;

int main() {

	// create new bank object
	Bank b(0, .002);

	b.deposit(50);
	b.withdraw(40);

	b.monthlyProc();

	// create new checking account starting at $0 and .188% APR
	Checking chk(0, .00188);

	// month 1
	chk.deposit(500);
	chk.withdraw(20);

	chk.monthlyProc();
	
	// month 2
	chk.deposit(500);
	chk.withdraw(20);
	chk.withdraw(20);
	chk.withdraw(25);
	chk.withdraw(24);
	chk.withdraw(29);
	chk.withdraw(60);
	chk.withdraw(12);

	chk.monthlyProc();

	// create new savings account at $5000 starting and 1% APR
	Savings save(5000, .01);

	// month 1
	save.deposit(500);
	save.withdraw(1000);
	save.withdraw(420);
	save.withdraw(360);
	save.withdraw(400);
	save.deposit(2000);
	save.withdraw(60);

	save.monthlyProc();

	// month 2
	save.deposit(400);
	save.withdraw(1000);

	save.monthlyProc();

	return 0;
}