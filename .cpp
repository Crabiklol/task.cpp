#include <iostream> 
void n_1() {
    int a = 7; // Целая переменная
    int b = 2; // Целая переменная

    // Целочисленное деление
    int result_int = a / b;
    std::cout << "Целочисленный результат: " << result_int << std::endl; // Выведет: 3

    double result_double = static_cast<double>(a) / b; 
    std::cout << "Дробный результат: " << result_double << std::endl; // Выведет: 3.5

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
	
}






int main() {
	void n_1();
	void n_2();
	void n_3();

return 0;
}
