#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
	int server_sock0;
	struct sockaddr_in server_addr;
	struct sockaddr_in client_addr;
	int len;
	int sock;
	int n;

	server_sock0=socket(AF_INET,SOCK_STREAM,0);
	if(server_sock0<0){
		perror("socket");
		return 1;
	}

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(12345);
	server_addr.sin_addr.s_addr = INADDR_ANY;

	if(bind(server_sock0,(struct sockaddr *)&server_addr,sizeof(server_addr)) != 0){
		perror("bind");
		return 1;
	}

	if(listen(server_sock0,20) != 0){
		perror("listen");
		return 1;
	}


	while(1){
		len = sizeof(client_addr);
		sock = accept(server_sock0,(struct sockaddr *)&client_addr,&len);
		if(sock < 0){
			perror("accept");
			break;
		}
		n = write(sock,"HELLooooooO",20);
		if(n<1){
			perror("write");
			break;
		}
		close(sock);
	}
	close(server_sock0);
	return 0;
}


