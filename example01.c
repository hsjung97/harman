#include <stdio.h>

void number_to_word(int c){
	switch (c) {
	case '0':                         //label integer��
		printf("%c: Zero\n", c);
		break;
	case '1':
		printf("%c: One\n", c);
		break;
	case '2':
		printf("%c: Two\n", c);
		break;
	case '3':
		printf("%c: Three\n", c);
		break;
	case '4':
		printf("%c: Four\n", c);
		break;
	case '5':
		printf("%c: Five\n", c);
		break;
	case '6':
		printf("%c: Six\n", c);
		break;
	case '7':
		printf("%c: Seven\n", c);
		break;
	case '8':
		printf("%c: Eight\n", c);
		break;
	case '9':
		printf("%c: Nine\n", c);
		break;
/*	case'q':
	case'Q': running = 0; break;
*/	
	
	default:
		printf("���ڸ� �Է��ϼ���.\n");
	
	}
}

int main()
{
	int running = 1;     //int running; runnung=1;
	
	while(running){
	printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�. \n");
	printf("Program�� �����÷��� q�� �Է��Ͻÿ�.. \n\n");
	printf(">");                            //<- echo
	char c = getch();                       //no echo : Ű���� ������� �ʰ� ��ȯ  <- Ű���忡�� ���ڴ����� �ܼ�â�� ���ڰ� �ȶ�
	//char c1 = getchar();                  // [enter]�ʿ�.
	
	if(c == 'q'){
		running = 0;
	}

	else {
		number_to_word(c);
	}
   
  }
  return 0;
 }

	/*
	if (c == '1')
	{
		printf("%c: One\n", c);
	}
	else if (c == '2')
	{
		printf("%c: Two\n", c);
	}
	else if (c == '3')
	{
		printf("%c: Three\n", c);
	}
	else if (c == '4')
	{
		printf("%c: Four\n", c);
	}
	else if (c == '5')
    {
	printf("%c: Five\n", c);
	}
    else if (c == '6')
    {
	printf("%c: Six\n", c);
	}
	else if (c == '7')
    {
	printf("%c: Seven\n", c);
	}
	else if (c == '8')
	{
		printf("%c: Eight\n", c);
	}
	else if (c == '9')
	{
		printf("%c: Nine\n", c);
	}
	else
	{
		printf("%c: One\n", c);
	}

}*/