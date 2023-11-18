#include <stdio.h>
#include <ctype.h> // for isspace and toupper

int main()
{
    char c;
    int new_sentence = 1; // Flag to track the start of a new sentence

    // Read characters until EOF
    while ((c = getchar()) != EOF)
    {
        // If it's the beginning of a new sentence and it's a lowercase letter
        if (new_sentence && islower(c))
        {
            c = toupper(c);   // Capitalize the character
            new_sentence = 0; // Reset the flag as we're no longer at the start
        }

        // Print the possibly modified character
        putchar(c);

        // If the character is a period, exclamation mark, or question mark
        if (c == '.' || c == '!' || c == '?')
        {
            // Skip any whitespace after a sentence ender before capitalizing again
            do
            {
                c = getchar();
                putchar(c);
            } while (isspace(c) && c != EOF);

            // If we've not reached EOF, put back the last read character
            if (c != EOF)
            {
                ungetc(c, stdin);
            }

            new_sentence = 1; // The next non-space character should be capitalized
        }
    }

    return 0;
}
