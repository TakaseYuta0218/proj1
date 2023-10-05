#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main(){
	char buff[5];
	int fd;
	fd = open("test.txt",O_RDONLY);
	
	if(fd < 0){
	perror("error open");
	exit(1);
	}
	
	
	
	val = read(fd,buff,10);
	if(val < 0){
	perror("error read");
	exit(1);
	}
	
	
	
	val = write(1,buff,10);
	if(val < 0){
	perror("error write");
	exit(1);
	}
	
	val = close(fd);
	if(val < 0){
	perror("error close");
	exit(1);
	}
}
