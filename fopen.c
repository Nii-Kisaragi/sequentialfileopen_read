//�V�[�P���V�����t�@�C����������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fout;
	char buf[256];
	
	if((fout=fopen("xxxx.txt", "w"))==NULL){
		printf("�t�@�C�����J���܂���ł���\n");
		exit(1);
	}
	printf("��������͂��Ă��������B�I���Ƃ���Ctrl+Z\n");
	while(gets(buf)!=NULL){
		fputs(buf, fout);
		fputc('\n', fout);
		}
	fclose(fout);
	return 0;
}
