//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//class knight
//{
//private:
//	int width,
//		height;
//public:
//	knight() : width(0), height(0) {};
//	void steps(int** mtr, int w, int h) {
//		for (int i = 1; i < w; i++) {
//			for (int j = 0; j < h; j++) {
//				// Нахождение максимального числа в первой строчке
//				int line_for_max_num[2] = { 0 };
//				for (int f = i; f < w; f++) {
//					if (mtr[f][j] <= mtr[f - 1][j - 1]) {
//						int num_1 = mtr[f][j];
//						mtr[f - 1][j - 1] = mtr[f][j];
//						mtr[f - 1][j - 1] = num_1;
//					}
//					// Нахождение максимального числа во второй строчке
//					for (int g = i; g < w; g++) {
//						if (mtr[f][g] <= mtr[f - 1][g - 1]) {
//							int num_2 = mtr[f][g];
//							mtr[f - 1][g - 1] = mtr[f][g];
//							mtr[f - 1][g - 1] = num_2;
//						}
//					}
//					// Если мы находимся скраю
//					if (i == 0) {
//
//					}
//				}
//				cout << endl;
//			}
//		}
//	}
//};
//
//void check_warring(int number) {
//	if (!cin){
//		cout << "Input Error!" << endl;
//		cin.clear();
//	}
//}
//void enter_matrix(int** mtr, int w, int h) {
//	for (int i = 0; i < w; i++) {
//		mtr[i] = new int[h];
//		for (int j = 0; j < h; j++) {
//			mtr[i][j] = rand() % 30;
//			cout << setw(3) << mtr[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void delete_matrix(int** mtr, int w) {
//	for (int i = 0; i < w; i++) {
//		delete[] mtr[i];
//	}
//	delete[] mtr;
//}
//
//int main_1_13() {
//	cout << "Hello World!\n";
//	int width(0),
//		height(0);
//	cout << "Enter width matrix: ";
//	cin >> width; check_warring(width);
//	cout << "Enter height matrix: ";
//	cin >> height; check_warring(height);
//
//	int** matrix = new int* [width];
//	enter_matrix(matrix, width, height);
//
//	int max_meaning(0),				//Максимальное набранное значение
//		stert_position_X(0),		//Стартовая позиция по х(всегда = 0)
//		stert_position_Y(0),		//Стартовая позиция по y
//		range_meaning_FROM(0),		//Диапозон значений, от координаты по Y
//		range_meaning_TO(0);		//Диапозон значений, до координаты по Y
//	for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			/*for (int f = 0; f < height; f++)
//			{
//				matrix[i][f]
//			}*/
//		}
//		
//	}
//	cout << endl;
//
//	/*knight man;
//	man.steps(matrix, width, height);*/
//
//	delete_matrix(matrix, width);
//	return 0;
//}

#include <iostream>
#include <iomanip>
#define n 5
#include <time.h>

using namespace std;

int max_number(int* mtr, int& max_i, int min = 1, int max = n) {
	int number(0);
	max_i = 0;
	for (int i = min; i < max - 1; i++)
	{
		if (mtr[i] < mtr[i + 1]) {
			number = mtr[i + 1];
			max_i = i + 1;
		}
		else {
			number = mtr[i];
			max_i = i;
		}
	}
	return number;
}

int main_1_13() {
	//Для случайных чисел
	//srand((unsigned)time(NULL));

	int** mtr = new int* [n + 2];
	int starting_point(0),
		summa(0);
	
	cout << "Enter starting point (1 - " << n << "): ";
	cin >> starting_point;
	//Создание
	for (int i = 0; i < n + 2; i++)
	{
		mtr[i] = new int[n + 2];
		for (int j = 0; j < n + 2; j++)
		{
			if (i == 0 || i == n + 1 ||
				j == 0 || j == n + 1){
				mtr[i][j] = 0;
			}
			else {
				mtr[i][j] = 1 + rand() % 20;
			}
		}
	}

	//Шаги
	for (int i = 1; i < n + 1; i++)
	{
		int max_i(starting_point);
		starting_point += max_number(mtr[i], max_i, starting_point - 1, starting_point + 1);
		continue;
	}

	//Ввывод и удаление
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			cout << setw(3) << mtr[i][j];
		}
		cout << endl;
	}
	cout << endl << endl << endl << starting_point;
	for (int i = 0; i < n + 2; i++)
	{
		delete[] mtr[i];
	}
	delete[] mtr;

	return 0;
}