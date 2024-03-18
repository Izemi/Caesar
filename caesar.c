#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        // Don't allow the user to continue and remind them how you work
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Accept the user to continue
    else
        printf("Success!\n");
    // Give definition of the key
    string key = argv[1];

    // Should check is the input from the user is actually a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Give space for the user to put a text
    string text = get_string("plaintext: ");
    // Convert the key into an integer
    int k = atoi(key);
    printf("ciphertext: ");
    // get the ciphertext
    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            printf("%c", (((text[i] - 65) + k) % 26) + 65);
        }
        else if (islower(text[i]))
        {
            printf("%c", (((text[i] - 97) + k) % 26) + 97);
        }
        else
        {

            printf("%c", text[i]);
        }
    }
    printf("\n");
}
