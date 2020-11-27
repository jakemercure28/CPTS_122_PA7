
class Savings:public Bank {
private:
	bool status;

public:

	// constructor 1
	Savings():Bank() {
		status = false;
	}

	// constructor 2
	Savings(double b, double r) :Bank(b, r) {
		balance = b;
		APR = r;
	}

	void withdraw(double w) {
		if (balance < 25)
			status = false;

		if (status) {

			// call base class version of withdraw()
			Bank::withdraw(w);
		}
	}

	void deposit(double d) {

		// if account is inactive and the deposit bring the acct above $25
		if (status == false && (balance + d > 25)) {

			status = true;
			// call base class version of deposit()
			Bank::deposit(d);
		}
		else {
			Bank::deposit(d);
		}
	}

	void monthlyProc() {

		if (withdrawlCount > 4) {
			// add 1 for each withdrawl count above 4
			for(int i = 4;i < withdrawlCount; i++)
			monthlyServiceCharges += 1;
		}
		// if balance is below 25 status is inactive
		if (balance < 25)
			status = false;
		else
			Bank::monthlyProc(); // call base class monthly procedure function
	}
};