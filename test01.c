#include <stdio.h>

main()
{
	//char   vchar = 'f';
	//int    vint  = 10;
	//long   vlong = 4000000000;
	//float  vfloat= 3.4;
	double vdou  = 3141289.0501345;

	printf("\n\n\n\n\n�ȳ��ϼ���?\n\n\n\n\n");
	printf("���� ��� �׽�Ʈ : %d\n",10);                          //4btype  = 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G =40��
	printf("�Ǽ� ��� �׽�Ʈ : %4.2f\n", 3.141592651234);          //4 
	printf("�� ���� ��� �׽�Ʈ : %d\n", 10);                      //4
	printf("�� �Ǽ� ��� �׽�Ʈ : %12.8lf\n\n\n", 3.141592651234515);  //8



	printf("���� ��� �׽�Ʈ   : [%12d]\n",10);
	printf("�Ǽ� ��� �׽�Ʈ   : [%12.8f]\n",3.141592651234);  
	printf("���� ��� �׽�Ʈ   : [%12e]\n",1234567890.12121);
	printf("8���� ��� �׽�Ʈ  : [%12o]\n",1234567890);
	printf("16���� ��� �׽�Ʈ : [%12x]\n",1234567890);
	printf("���� ��� �׽�Ʈ   : [%c]\n", 50);
	printf("���ڿ� ��� �׽�Ʈ : [%s]\n", "\n�ȳ�\n");


	//4.2f -> 4�������ε� �Ҽ��� 2°�ڸ�����
	// �ȳ��ϼ���?            debug  mode  ->  compile & link �� ���� .exe  file����(debug���� ����)
    //                       release mode  ->  debug �������� execution��
	// 2^10 =1024 =  100_0000_0000 -> 1k 
	
	printf("\n�ȳ��ϼ���?\n");
	printf("%8x\n %8x\n %8x\n %8x\n\n", &vchar, &vint, &vlong, &vfloat, &vdou);   // -> 0x20��ŭ memory�Ҵ�
	scanf("%c %d %d %f", &vchar, &vint, &vlong, &vfloat, &vdou);   //scanf -> format(8x),\n �� ������ �ȵ�



	printf("���� ��� �׽�Ʈ   : [%12d]\n",   vint);
	printf("�Ǽ� ��� �׽�Ʈ   : [%12.8f]\n", vdou);
	printf("���� ��� �׽�Ʈ   : [%12e]\n",   vdou);
	printf("8���� ��� �׽�Ʈ  : [%12o]\n",   vlong);
	printf("16���� ��� �׽�Ʈ : [%12x]\n",   vlong);
	printf("���� ��� �׽�Ʈ   : [%c]\n", vchar);
	printf("���ڿ� ��� �׽�Ʈ : [%s]\n","\n�ȳ��ϼ���\n");


}                        