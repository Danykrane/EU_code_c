#include <iostream>

struct Klass {
	int size;
	double * data;

	Klass() {
		std::cout << "Конструктор по умолчанию" << std::endl;
		size = 100;
		data = new double[size];
	}

	Klass(const Klass & klass) {
		std::cout << "Конструктор копирования" << std::endl;
		size = klass.size;
		data = new double[size];
		for (int i = 0; i < size; i++) {
			data[i] = klass.data[i];
		}

	}

	Klass & operator=(const Klass & klass) {
		if (this != &klass) {
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			delete[] data;
			size = klass.size;
			data = new double[size];
			for (int i = 0; i < size; i++) {
				data[i] = klass.data[i];
			}
		}
		else {
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
	}

	~Klass() {
		std::cout << "Деструктор" << std::endl;
		delete[] data;
	}
};

int main() {
	
	Klass k1;
	Klass k2(k1);
	Klass k3 = k2;
	Klass k4 = Klass(k3);
	Klass * pKlass = new Klass(k4);
	k1 = k2;
	k2 = k2;
}