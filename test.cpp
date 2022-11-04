#include <iostream>
using namespace std;

int main()
{
    // Open two files to be merged
    FILE *fp1 = fopen("Source1.txt", "r");
    FILE *fp2 = fopen("Source2.txt", "r");

    // Open file to store the result
    FILE *fp3 = fopen("Target.txt", "w");

    char c;
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)

    {
        puts("Could not open files");
        exit(0);
    }

    // Copy contents of first file to Target.txt
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);

    // Copy contents of second file to Target.txt
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);

    printf("Merged Source1.txt and Source2.txt into Target.txt");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}