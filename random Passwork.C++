#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    cout << "Enter the length of the Password: " << endl; // Ask the user to enter the lenght of the password

    int length;
    scanf("%d", &length); // to accept the userInput

    if (length <= 0)
    {
        cout << "Password length must be >= 12!" ;
        return 1;
    }

    char *password = malloc(length + 1); //malloc is going to Allocate space for Lenght + 1 (for number of Char)
    char *digits = "0123456789";
    int digits_lenght = strlen(digits); // the function Strlen give me the length of this sting litral 

    char *lowers = "abcdefghijklmopqrstuwxyz";
    int *lowers_lenght = strlen(lowers);

    char *uppers = "ABCDEFGHIJKLMNOPQRUSTUWXYZ";
    int *uppers_lenght = strlen(uppers);


    free(password);

return 0;
}
