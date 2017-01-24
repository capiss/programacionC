#!/bin/bash
##Autor:
#  Armando Hernández Hernández
#  Practica 0


for i in {1..30}
  do
    if (($i % 5 == 0 && $i % 3 == 0));
      then
	echo 'Fizz Bizz';
    else if ((`expr $i % 3` == 0));
        then
          echo 'Fizz'
        else if (($i % 5 == 0));
	   then
             echo 'Bizz'
	   else
              echo $i 
           fi
        fi
   fi
#    echo $i;
  done 
