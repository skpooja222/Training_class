#include <stdio.h>
  
int main()
{
  
    char str1[100] = "Geeks", str2[100] = "World";
  
 
        char str3[100];
  
    int i = 0, j = 0;
  
    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);
  
  
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
  
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
  
    // Print the concatenated string
    printf("\nConcatenated string: %s", str3);
  
    return 0;
}