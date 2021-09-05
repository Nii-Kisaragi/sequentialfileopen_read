//シーケンシャルファイル読み込み
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fin;
	char buf[256];
	
	if((fin=fopen("xxxx.txt", "r"))==NULL){
		printf("ファイルを開けませんでした\n");
		exit(1);
	}
	printf("文字を出力します。\n");
	while(fgets(buf,256,fin)!=NULL)
		printf("%s", buf);
	
	fclose(fin);
	return 0;
}
