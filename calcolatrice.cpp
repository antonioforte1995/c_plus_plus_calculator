#include <iostream>

using namespace std;

void sum(float firstOperand, float secondOperand){
	float sum = firstOperand + secondOperand;
	cout << "The sum is: " << sum <<"\n";
}

void difference(float firstOperand, float secondOperand){
	float difference = firstOperand - secondOperand;
	cout << "The difference is: " << difference <<"\n";
}

void multiplication(float firstOperand, float secondOperand){
	float product = firstOperand * secondOperand;
	cout << "The product is: " << product <<"\n";
}

void division(int firstOperand, int secondOperand){
	if(secondOperand == 0){
		cout << "Il divisore non puo' essere nullo: \n";
	}else{
		float quotient = (float) firstOperand / secondOperand;
		int remainder = firstOperand % secondOperand;
		cout << "The quotient is: " << quotient <<"\n";
		cout << "The remainder is: " << remainder <<"\n";
	}
}


//this function asks for user if he want to do a new calculation
bool again()
{
	char scelta = '0';
	cout<< "Do you want to make a new calculation? Type 0 for no, type 1 for yes.\n";
	cin >> scelta;
	if (scelta == '1'){
		return true;
	}
	else if (scelta == '0'){
		return false;
	}
	else{
		cout<< "Please choose a valid symbol.\n";
		return again();
	}
}

//this function does the calculation requested by user
void calculate(){
	char operation = ' ';
	float firstOperand = 0;
	float secondOperand = 0;
	
	cout<< "Give me the first operand:\n";
	scanf("%f", &firstOperand);

	cout<< "Give me the second operand:\n";
	scanf("%f", &secondOperand);
	
	cout<< "What action do you want to do? \ n Type: \n + for a sum \n - for a subtraction \n * or a multiplication \n / for a division\n";
	cin >> operation;
	
	if (operation == '+'){
		sum(firstOperand, secondOperand);
	}
	else if (operation == '-'){
		difference(firstOperand, secondOperand);
	}
	else if (operation == '*'){
		multiplication(firstOperand, secondOperand);
	}
	else if (operation == '/'){
		division(firstOperand, secondOperand);
	}
	else{
		cout<< "Please choose a valid symbol.\n";
		calculate();
	}
}


int main(int argc, char** argv) {
	calculate();
	while (again()){
		calculate();
	}
	cout <<"Thanks for using my calculator, see you soon!!\n";
	
	return 0;
}



