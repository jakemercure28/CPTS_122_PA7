
class Bank {
protected:
	double balance;
	int monthlyDepositCount;
	int withdrawlCount;
	double APR;
	double monthlyServiceCharges;

public:

	// constructor #1
	Bank() {
		balance = 0;
		APR = 0;
		
	}

	// constructor #2
	Bank(double b, double r) {

		balance = b;
		APR = r;

		monthlyDepositCount = 0;
		withdrawlCount = 0;
		monthlyServiceCharges = 0;
	}
	
	
	virtual void deposit(double d) {
		balance += d;
		monthlyDepositCount += 1;
	}

	virtual void withdraw(double w) {
		balance -= w;
		withdrawlCount += 1;
	}

	virtual void calcInt() {
		double monthlyInterestRate = (APR / 12);
		double monthlyInterest = balance * monthlyInterestRate;
		balance += monthlyInterest;
	}

	virtual void monthlyProc() {
		// subtract the monthly charges then calculate the interest
		balance -= monthlyServiceCharges;
		calcInt();

		// set counter variables to 0
		withdrawlCount = 0;
		monthlyDepositCount = 0;
		monthlyServiceCharges = 0;
	}

};