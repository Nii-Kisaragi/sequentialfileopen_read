//�V�[�P���V�����t�@�C���ǂݍ���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fin;
	char buf[256];
	
	if((fin=fopen("xxxx.txt", "r"))==NULL){
		printf("�t�@�C�����J���܂���ł���\n");
		exit(1);
	}
	printf("�������o�͂��܂��B\n");
	while(fgets(buf,256,fin)!=NULL)
		printf("%s", buf);
	
	fclose(fin);
	return 0;
}
