class Calculator{
public:
	bool isOperator(char character);
	bool isOperand(char character);
	int compareOperators(char op1, char op2);
	double performOperation(double op1, double op2, char op);
	void toPostfix();	
};