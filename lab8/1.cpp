#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int num1, num2;

// Open two files to be merged
/*
    Source1.txt
    1 2 3 4 4 5 6 7 7 7 8 9 10 20
    Source2.txt
    11 12 13 14 14 15 15 15 16 17 18 19 20
*/
ifstream inputFile;
ifstream inputFile2;
inputFile.open ("Source1.txt");
inputFile2.open("Source2.txt");

// Open file to store the result
ofstream outputFile;
outputFile.open("Target.txt");

inputFile >> num1;
inputFile2 >> num2;

// Copy contents of first file and second file to Target.txt
while(inputFile.eof() && inputFile2.eof())
{
    if (num1 < num2)
    {
        outputFile << num1;
        inputFile >> num1;
    }
    else
    {       
        outputFile << num2;
        inputFile2 >> num2;
    }

}

// Merged Source1.txt and Source2.txt into Target.txt
cout<<"Merged Source1.txt and Source2.txt into Target.txt"<<endl;
inputFile.close();
inputFile2.close();
outputFile.close();

return 0;
}