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
//				// ���������� ������������� ����� � ������ �������
//				int line_for_max_num[2] = { 0 };
//				for (int f = i; f < w; f++) {
//					if (mtr[f][j] <= mtr[f - 1][j - 1]) {
//						int num_1 = mtr[f][j];
//						mtr[f - 1][j - 1] = mtr[f][j];
//						mtr[f - 1][j - 1] = num_1;
//					}
//					// ���������� ������������� ����� �� ������ �������
//					for (int g = i; g < w; g++) {
//						if (mtr[f][g] <= mtr[f - 1][g - 1]) {
//							int num_2 = mtr[f][g];
//							mtr[f - 1][g - 1] = mtr[f][g];
//							mtr[f - 1][g - 1] = num_2;
//						}
//					}
//					// ���� �� ��������� �����
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
//	int max_meaning(0),				//������������ ��������� ��������
//		stert_position_X(0),		//��������� ������� �� �(������ = 0)
//		stert_position_Y(0),		//��������� ������� �� y
//		range_meaning_FROM(0),		//�������� ��������, �� ���������� �� Y
//		range_meaning_TO(0);		//�������� ��������, �� ���������� �� Y
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