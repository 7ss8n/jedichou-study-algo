/*******************************************************************************
 * File name    : Program6_09a.c
 * Create time  : 2008-2-15 09:52
 * Description  :
 *   Finding occurrences of one wide character string in another
 *   TODO : 該文件可單獨編譯, 但放在Project中就無法編譯.
 *          系統提示找不到fgetws()函數
 ******************************************************************************/

#include <stdio.h>
#include <wchar.h>

//int program6_9a(void){
//    wchar_t text[100];          /* Input buffer for string to be searched */
//    wchar_t substring[40];      /* Input buffer for string sought */
//    int i = 0;                  /* Loop counter */
    
//    printf("\nEnter the string to be searched(less than 100 characters):\n");
//    fgetws(text, 100, stdin);
//    printf("\nEnter the string sought (less than 40 characters ):\n");
//    fgetws(substring, 40, stdin);
    
    /* overwrite the newline character in each string */
//    text[wcslen(text)-1] = L'\0';
//    substring[wcslen(substring)-1] = L'\0';
   
//    printf("\nFirst string entered:\n%S\n", text);
//    printf("\nSecond string entered:\n%S\n", substring);
    
    /* Convert both strings to uppercase. */
//    for(i = 0 ; (text[i] = towupper(text[i])) ; i++);
//    for(i = 0 ; (substring[i] = towupper(substring[i])) ; i++);
    
//    printf("\nThe second string %s found in the first.",
//            ((wcsstr(text, substring) == NULL) ? "was not" : "was"));
    
//    return 0;
//}
