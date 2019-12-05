/*
 * Program 3.11 A calculator
 * Student: Jedi Chou
 * Create : 2012-9-19
 */

#include <stdio.h>


/*
    import os
    import time
    import random
    from hashlib import md5

    def createFileList(num):
        curpath = os.getcwd()
        filelist = []
        for item in range(0, num):
            filelist.append(curpath + '\\' + str(item) + '.txt')
        return filelist

    def createFile(filelist, length):
        for item in filelist:
            fp = open(item, 'w')
            fp.seek(length - 1)
            fp.write(chr(random.randrange(65,90)))
            fp.close()
        pass

    def getFileMD5(file):
        m = md5()
        fd = open(file, 'rb')
        m.update(fd.read())
        fd.close()
        return m.hexdigest()

    if __name__ == '__main__':
        KB = 1024
        MB = 1048576
        GB = 1073741824

        filelist = createFileList(100)

        start_time = time.time()
        createFile(filelist, KB*2)
        end_time = time.time()

        for file in filelist:
            print getFileMD5(file)
        print end_time - start_time
*/
int main(void)
{
    double number1 = 0.0;   /* First operand value a decimal number */
    double number2 = 0.0;   /* Second operand value a decimal number */
    char operation = 0;     /* Operation - must be +, -, *, /, or % */

    printf("\nEnter the calculation\n");
    scanf("%lf %c %lf", &number1, &operation, &number2);

    /* Plus the rest of the code for the program */
    return 0;
}
