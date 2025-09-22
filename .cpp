#include <iostream> 
void n_1() {
    int a = 7; // Целая переменная
    int b = 2; // Целая переменная

    // Целочисленное деление
    int result_int = a / b;
    std::cout << "celochislenni result: " << result_int << std::endl; // Выведет: 3
	double result_double = static_cast<double>(a) / b; 
    std::cout << "drobni result: " << result_double << std::endl; // Выведет: 3.5

}

void n_2() {
	double a = 7;
	 std::cout << "enter integer number:";
	 std::cin >> a;
	 
	 std::cout <<"a =" << a;

}

void n_3() {
	const double GRAVITY = 9.8;
}


void n_4() {
	int grade;
	std::cout << " YOUR OCENKA ( celoe chislo ot 4 do 5): ";
	std::cin >> grade ;

	char gradeChar = '0' + grade;

	std::cout << "YOUR OCENKA: " << gradeChar << std::endl;
}


void n_5() {
		int num1, num2;

	std::cout << "paste first celoe chislo: ";
	std::cin >> num1;

	std::cout << "paste second celoe chislo: ";
	std::cin >> num2;

	double average = static_cast<double>(num1 + num2) / 2;

	std::cout << "srednee arifmet : " << average << std::endl;


}

void n_6(){
	const int MAX_SCORE = 1000;
	std::cout << "MAX OCENKA: " << MAX_SCORE << std::endl;
	//MAX_SCORE = 3000;
	std::cout << "POPITKA IZMENENIA MAX_SCORE na 3000." << std::endl;
}

 void n_7() {
   char symbol = 'A';
   int index = symbol;
   std::cout << "index A in ASCII: " << index << std::endl;
    }


void n_8(){
    double num;
    std::cout << "Paste drobnoe number: ";
    std::cin >> num;
    int intNum = static_cast<int>(num);
    std::cout << "celaya chasth: " << intNum << std::endl;
}


void n_9(){
    const int numerator = 100;
    const int denominator = 3;

    int intResult = numerator / denominator;
    std::cout << "Rezultat Delenuya 100 na 3 kak int: " << intResult << std::endl;
    double doubleResult = static_cast<double>(numerator) / denominator;
    std::cout << "rezultat Delenuya 100 na 3 kak double: " << doubleResult << std::endl;
}

void n_10(){
    int num;
     std::cout << "VVedite drobnoe chislo: ";
     double inputNum;
     std::cin >> inputNum;
     num = static_cast<int>(inputNum);
     std::cout << "Celaya chast chisla: " << num << std::endl;

}


int main() {
	n_1();
	n_2();
	n_3();
	n_4();
	n_5();
	n_6();
	n_7();
	n_8();
	n_9();
	n_10();
return 0;
}
