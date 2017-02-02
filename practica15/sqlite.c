
#include<sqlite3.h>
#include<stdio.h>

int main(void)
{
	sqlite3 *db;
	char *err_msg = 0;

	int rc = sqlite3_open("base.db",&db);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"error al abrir: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);

		return 1;
	}

	char *sql = 	"DROP TABLE IF EXISTS becarios;"
			"CREATE TABLE becarios(ID INT, Nombre TEXT, Edad INT, procedencia TEXT, generacion INT, proyecto TEXT);"
			"INSERT INTO becarios VALUES(1,'tachi',23,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(2,'La saine',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(3,'Fernando',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(4,'Yeudiel',27,'FAC',11,'SI');"
			"INSERT INTO becarios VALUES(5,'Jenn',23,'FAC',11,'SI');"
			"INSERT INTO becarios VALUES(6,'Diana',25,'FC',11,'SI');"
			"INSERT INTO becarios VALUES(7,'Jonathan',23,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(8,'Armando',23,'FI',11,'SI');";


	rc = sqlite3_exec(db,sql,0,0,&err_msg);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error: %s\n",err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);

		return 1;

	}
	sqlite3_close(db);

	return 0 ;

}
