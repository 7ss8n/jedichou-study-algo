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
    /* Define file size unit */
    const int size_kb = 1024;
    const int size_mb = 1048576;
    const int size_gb = 1073741824;
    char  filelist[100][1024];

    /* Define counter */
    int counter = 0;
    strcpy(filelist[0], "test1.txt");
    strcpy(filelist[1], "test2.txt");
    strcpy(filelist[2], "test3.txt");
    strcpy(filelist[4], "test4.txt");

    printf("%d\n", size_kb);
    printf("%d\n", size_mb);
    printf("%d\n", size_gb);

    for(counter = 0; counter < 10; counter++)
    {
        if(sizeof(filelist[counter]))
            printf("output - %s\n", filelist[counter]);
    }

    return 0;
}

/* create a file list */
char** createFileList(int size, int number)
{
    int number_fr = 0;
    int number_to = number;
    int ListSize  = size;
    char filelist[number][size];

    return filelist;
}
