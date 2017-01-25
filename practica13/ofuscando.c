#include <stdio.h>
#define BEGIN main(){
#define INTEGER int
#define IF if
#define [ (
#define ] )
#define THEN {
#define ELSE }else{
#define ENDIF }
#define END }
#define PRINT printf

BEGIN
  INTEGER x=0;
  IF [x>=10]
  THEN 
    PRINT("TENGO DIEZ \n");
  ELSE
    PRINT("REPROBARE\n");
  ENDIF
END
