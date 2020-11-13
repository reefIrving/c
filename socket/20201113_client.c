#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
	struct sockaddr_in server_addr;
	int client_sock;
	char buf[32];
	int n;

	//ソケットの生成
	client_sock = socket(AF_INET,SOCK_STREAM,0);
	
	//接続先の構造体を準備
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(12345);
	server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	
	//connectでサーバに接続し、サーバの待ち行列に入る
	connect(client_sock,(struct sockaddr *)&server_addr,sizeof(server_addr));
	
	//サーバからの処理を受け取る
	memset(buf,0,sizeof(buf));
	n = read(client_sock,buf,sizeof(buf));
	printf("%d,%s\n",n,buf);

	close(client_sock);

	return 0;
}
