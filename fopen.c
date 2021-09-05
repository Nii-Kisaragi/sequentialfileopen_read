//シーケンシャルファイル書き込み
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fout;
	char buf[256];
	
	if((fout=fopen("xxxx.txt", "w"))==NULL){
		printf("ファイルを開けませんでした\n");
		exit(1);
	}
	printf("文字を入力してください。終わるときはCtrl+Z\n");
	while(gets(buf)!=NULL){
		fputs(buf, fout);
		fputc('\n', fout);
		}
	fclose(fout);
	return 0;
}
