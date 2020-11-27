
class Checking:public Bank {

public:
	// constructor
	Checking(double b, double r) :Bank(b, r) {
		balance = b;
		APR = r;
	}

	void withdraw(double w) {

		// check if balance goes negative from withdrawl
		if (balance - w < 0)
			monthlyServiceCharges += 15;
		else
			Bank::withdraw(w);
		
	}

	void monthlyProc() {
		monthlyServiceCharges += 5;
		monthlyServiceCharges += (withdrawlCount * .1);

	Bank::monthlyProc();
	}


};