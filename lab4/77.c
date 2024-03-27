#include <stdio.h>
int main() {
    char str[100];
    int i,j;
    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);
    // Convert each character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the difference between lowercase and uppercase
            str[i] -= 32;
        }
    }
    // Print the string in uppercase
    printf("String in uppercase: %s\n", str);
    return 0;
}
