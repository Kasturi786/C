#include <stdio.h>
#include<string.h>
int main(void) {

    char str1[7] = "hello";
    char str2[ ] = "world";  /* size 6 */
    char *str = "Murad";
     /* Size of a pointer depends on the System Architecure.
     *For 64-bit sytem it's 8 byte.
     * Length of a string depends on the number of characters in the string.
     * For str[number], size of str is number.
     *But for str[] size of str is strlen(str)+1.
    */
    printf("str1 is: %s, str2 is: %s\n", str1, str2);
    printf("str1 length is: %ld, str2 length is: %ld\n", strlen(str1), strlen(str2));
    printf("str1 size is: %ld, str2 size is: %ld\n", sizeof(str1), sizeof(str2));
    printf("str is: %s, length is %ld and size is %ld\n", str,strlen(str),sizeof(str));

    return 0;
}
