#include "Windows.h"

int main()
{
	char* fileName = new char[MAX_PATH];
	strcpy(fileName, ".\\myTest.ini");
    //WritePrivateProfileString("First", "Name", "Mike", fileName);
    //WritePrivateProfileString("First", "Age", "27", fileName);
    //WritePrivateProfileString("First", "Gender", "Male", fileName);
    //WritePrivateProfileString("Second", "Name", "Lily", fileName);
    //WritePrivateProfileString("Second", "Age", "30", fileName);
    //WritePrivateProfileString("Second", "Gender", "Female", fileName);

	char* firstName = new char[20];
	char* firstAge = new char[20];
	char* firstGender = new char[20];
	char* secondName = new char[20];
	char* secondAge = new char[20];
	char* secondGender = new char[20];
    GetPrivateProfileString("First","Name","NULL",firstName,100,fileName);
    GetPrivateProfileString("First","Age","NULL",firstAge,100,fileName);
    GetPrivateProfileString("First","Gender","NULL",firstGender,100,fileName);
    GetPrivateProfileString("Second","Name","NULL",secondName,100,fileName);
    GetPrivateProfileString("Second","Age","NULL",secondAge,100,fileName);
    GetPrivateProfileString("Second","Gender","NULL",secondGender,100,fileName);

    delete [] fileName;
    delete [] firstName;
    delete [] firstAge;
    delete [] firstGender;
    delete [] secondName;
	delete [] secondAge;
	delete [] secondGender;
	
	system("PAUSE");
    return 0;
}