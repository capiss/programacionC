#include <sys/types.h>
#include </usr/include/linux/input.h>
#include <stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
  int fd,nread;
  struct input_event ev;
  char *archivo="/dev/input/event3";
  char *texto;
  fd=open(archivo,O_RDONLY);
  if(fd==-1) //valida que abra correctamente
    fprintf(stderr,"No se pudo abrir el archivo");
  
  while(1){
    read(fd, &ev, sizeof(struct input_event));
//    write(1,ev.value,sizeof(struct input_event));
    if(ev.type==1)
      printf("%d",ev.value);
  }
  close(fd);
}
