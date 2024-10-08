#pragma once
/*
#include <iostream>
#include <libpq-fe.h>
using namespace std;

class Psql
{
public:
    void Select(PGconn* conn, const char* query) {
        PGresult* res = PQexec(conn, query);

        if (PQresultStatus(res) != PGRES_TUPLES_OK) {
            std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
        }
        else {
            int rows = PQntuples(res);
            int cols = PQnfields(res);

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    std::cout << PQgetvalue(res, i, j) << "\t";
                }
                std::cout << std::endl;
            }
        }

        PQclear(res);
    }

    void insertData() 
    {
        PGconn* conn = PQconnectdb("dbname=Auto_Park user=postgres password=1");

        if (PQstatus(conn) != CONNECTION_OK) {
            std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
            PQfinish(conn);
            return;
        }

        PGresult* res = PQexec(conn, "INSERT INTO mytable (column1, column2) VALUES ('value1', 'value2')");

        if (PQresultStatus(res) != PGRES_COMMAND_OK) {
            std::cerr << "Insert failed: " << PQerrorMessage(conn) << std::endl;
        }
        else {
            std::cout << "Data inserted successfully" << std::endl;
        }

        PQclear(res);
        PQfinish(conn);
    }

    void deleteData() 
    {
        PGconn* conn = PQconnectdb("dbname=Auto_Park user=postgres password=1");

        if (PQstatus(conn) != CONNECTION_OK) {
            std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
            PQfinish(conn);
            return;
        }

        PGresult* res = PQexec(conn, "DELETE FROM mytable WHERE column1 = 'value1'");

        if (PQresultStatus(res) != PGRES_COMMAND_OK) {
            std::cerr << "Delete failed: " << PQerrorMessage(conn) << std::endl;
        }
        else {
            std::cout << "Data deleted successfully" << std::endl;
        }

        PQclear(res);
        PQfinish(conn);
    }

    void updateData() 
    {
        PGconn* conn = PQconnectdb("dbname=Auto_Park user=postgres password=1");

        if (PQstatus(conn) != CONNECTION_OK) {
            std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
            PQfinish(conn);
            return;
        }

        PGresult* res = PQexec(conn, "UPDATE mytable SET column1 = 'newvalue1' WHERE column2 = 'value2'");

        if (PQresultStatus(res) != PGRES_COMMAND_OK) {
            std::cerr << "Update failed: " << PQerrorMessage(conn) << std::endl;
        }
        else {
            std::cout << "Data updated successfully" << std::endl;
        }

        PQclear(res);
        PQfinish(conn);
    }
};
*/


