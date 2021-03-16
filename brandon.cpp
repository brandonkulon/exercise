#include <iostream>

using namespace std;
int main (int argc, char const*argv[])
{
	int nilai, nilaiAkhir,AB,BC,T,UT,UA,UE;
	
	cout << "\nGrading System V1.0\n";
	cout << "===============================\n";
	cout << "Enter Grade for Student 3 \n\n";
	cout << "Enter Grade for Student 1 : ", cin >> AB;
	cout << "Attendance : ", cin >> BC;
	cout << "Quiz : ", cin >> T;
	cout << "Assignment : ", cin >> UT;
	cout << "Mid Exam : ", cin >> UA;
	cout << "Final Exam : ", cin >> UE;
	cout << "//------------------------------//\n";
	
	nilai = ((BC*10)+(T*10)+(UA*20)+(UT*30)+(UE*30))/100;
	
	cout << "\n//=================Hasil===============//\n";
	cout << "Enter Grade for Student\t : " << AB << endl;
	cout << "Attendance : " << BC << endl;
	cout << "Quiz\t : " << T << end…
    cout << "\n//----------------------------------//\n";
	cout << " \nThank You \n";
	return 0;
}
