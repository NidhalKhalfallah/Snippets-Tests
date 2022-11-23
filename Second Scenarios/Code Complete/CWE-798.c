#include<stdio.h>
#include<SQLAPI.h>
int main(int argc, char* argv[])
{
    //connect a user to a database
    SQLAPI::Connection conn("db.ini");

    //execute a query and get the result set
    SQLAPI::ResultSet rs = conn.ExecuteQuery("select * from user_tbl");
    
    //get the number of rows in the result set
    int rowCount = rs.GetRowCount();

    //iterate through all rows in the result set and print them out
	for(int i=0;i<rowCount;i++) {

        printf("%s %s
