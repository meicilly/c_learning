#include <stdio.h>
/**
#include��������ļ���������ǰ�ļ���
    #include <stdio.h>
    ��stdio.h�ļ���������ǰ���ڵ�λ��
    ��������C���Եĳ��� ����������ļ�
    <stdio.h> ��Ҫ�ô�����ȥLinuxϵͳ·��/usr/includeѰ��stdio.h, �ҵ���ͽ��俽������ǰλ����
stdio.h -> standard input output . header
**/ 
int main(void){
    printf("�ҵĵ�һ��C����\n");
    return 0;
}
/**
 gcc�������Ĳ���
 1.Ԥ����
    ��Դ�ļ��а�����ͷ�ļ���������ǰ��.c�ļ���
    #include <stdio.h> gcc��������һ���ͻὫstdio.h�ļ����ݿ�������
    gcc -E 01_hell0.c -o hello.i
2.����
    ��Ԥ����õ���.i�ļ����б���õ�����ļ�
        ����ļ�: .s / .S - ������
    gcc -S hello.i -o hello.s 
3.���
    �������õ���.s�ļ��������õ����������ʶ��Ļ����ļ� - ������
        ���ļ�����Ŀ���ļ�
        Ŀ���ļ���-o  object
    gcc -c hello.s -o hello.o
4.����
    gcc hello.o -o hello Ҳ��һ����λ��
gccѡ��:
    -E : Ԥ����, ֻ��Ԥ���� 
    -o : ָ��������ļ��� 
    -S : ֻ���б��벽�� 
    -c : ֻ���л�ಽ�� 
 **/