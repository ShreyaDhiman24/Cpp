/*c) Write a program which takes string as an input and counts numbers of occurrences of each vowel and total number of vowels in the string. (Use strings as arrays and to access array elements using pointers).*/

// C++ program to count vowels in a string
#include <iostream>
using namespace std;


// Function to count total number of vowels in the string
int vowelCount(char *sptr)
{
	int count = 0;			// Creating a counter
	while ((*sptr) != '\0') // Iterate the loop until null character encounter
	{
		// Check whether character pointer finds any vowels
		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i' || *sptr == 'o' || *sptr == 'u')
		{
			count++; // If vowel found increment the count
		}
		sptr++; // Increment the pointer to next location of address
	}

	return count; // Return count
}

// Function to count total number of vowel 'a' in the string
int vowel_a(char *sptr)
{
	int a = 0;
	while ((*sptr) != '\0')
	{
		if (*sptr == 'a' || *sptr == 'A')
		{
			a++;
		}
		sptr++;
	}
	return a;
}

// Function to count total number of vowel 'e' in the string
int vowel_e(char *sptr)
{
	int e = 0;
	while ((*sptr) != '\0')
	{
		if (*sptr == 'e' || *sptr == 'E')
		{
			e++;
		}
		sptr++;
	}
	return e;
}

// Function to count total number of vowel 'i' in the string
int vowel_i(char *sptr)
{
	int i = 0;
	while ((*sptr) != '\0')
	{
		if (*sptr == 'i' || *sptr == 'I')
		{
			i++;
		}
		sptr++;
	}
	return i;
}

// Function to count total number of vowel 'o' in the string
int vowel_o(char *sptr)
{
	int o = 0;
	while ((*sptr) != '\0')
	{
		if (*sptr == 'o' || *sptr == 'O')
		{
			o++;
		}
		sptr++;
	}
	return o;
}

// Function to count total number of vowel 'u' in the string
int vowel_u(char *sptr)
{
	int u = 0;
	while ((*sptr) != '\0')
	{
		if (*sptr == 'u' || *sptr == 'U')
		{
			u++;
		}
		sptr++;
	}
	return u;
}
//int vowel_all(char *sptr)
// {
// 	int arr[]={0,0,0,0,0};



// 	while ((*sptr) != '\0')
// 	{
// 		if (*sptr == 'e' || *sptr == 'E')
// 		{
// 			arr++;
// 		}
// 		sptr++;
// 		if (*sptr == 'u' || *sptr == 'U')
// 		{
// 			u++;
// 		}
// 		sptr++;
// 	}
// 	return u;
// }

// Driver Code
int main()
{
	// Initialize the string
	char str[] = "beautifulflowerinagarden";

	// Display the count
	cout << "Vowel 'a' in above string: " << vowel_a(str) << endl;
	cout << "Vowel 'e' in above string: " << vowel_e(str) << endl;
	cout << "Vowel 'i' in above string: " << vowel_i(str) << endl;
	cout << "Vowel 'o' in above string: " << vowel_o(str) << endl;
	cout << "Vowel 'u' in above string: " << vowel_u(str) << endl;
	cout << "Total number of vowels in above string: " << vowelCount(str) << endl;

	return 0;
}