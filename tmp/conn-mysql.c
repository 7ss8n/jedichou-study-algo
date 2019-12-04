// example file hello.c

#include <stdio.h>
#include <mysql.h>

int main(int argc, char *argv[])
{
	int i;
	MYSQL *conn;		// connection
	MYSQL_RES *result;	// result of the SELECT query
	MYSQL_ROW row;		// a record of the SELECT query
	
	// create connection to MySQL
	conn = mysql_init(NULL);
	if(mysql_real_connect(
		conn, "localhost", "root", "xxx",
		"mylibrary", 0, NULL, 0) == NULL) {
		fprintf(stderr, "sorry, no database connection ...\n");
		return 1;
	}
	
	// only if Unicode output (utf8) is desired
	mysql_query(conn, "SET NAMES 'utf8'");
	
	// create list of all publisher and number of titles published for each publisher
	const char *sql = "SELECT COUNT(titleID), publName \
                       FROM publishers, titles \
                       WHERE publishers.publID = titles.publID \
                       GROUP BY publishers.publID \
                       ORDER BY publName";
    if(mysql_query(conn, sql)) {
        fprint(stderr, "%s\n", mysql_error(conn));
        fprint(stderr, "%s\n", sql);
        return 1;
    }
    
    // process result
    result = mysql_store_result(conn);
    if(result==NULL) {
        if(mysql_error(conn))
            fprintf(stderr, "%s\n", mysql_error(conn));
        else
            fprintf(stderr, "%s\n", "unkown error\n");
        return 1;
    }
    printf("%i records found \n", (int)mysql_num_rows(result));
    
    // loop over all records
    while((row = mysql_fetch_row(result)) != NULL) {
        for(i=0; i<mysql_num_fields(result); i++) {
            if(row[i]) == NULL)
                printf("[NULL]\t");
            else
                printf("%s\t", row[i]);
        }
        printf("\n");
    }
    
    // release memory, server connection
    mysql_free_result(result);
    mysql_close(conn);
    
    return 0;
}
