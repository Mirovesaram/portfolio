#include <string.h>
int n = 0;
int sys();
i = 0, 
do
{
	i = sys();
}
while(i != 0 && i != 1);
for(i; i < 1; ++i)
{
}
do
{
	i = sys();
}
while(i != 0 && i != 1);
for(i; i < 1; ++i)
{
}
int sys()
{
	int i = 0, f = 0, t = 1;
	char ans;
	printf("\nEx%d", n = n + 1);
	printf("\n\nDeseja pular?\n");
	printf("S/s ou N/n\n");
	scanf("%c", &ans);
	switch(ans)
	{
		case 'n':
			i = f;
			break;
		case 's':
			i = t;
			break;
		case 'N':
			i = f;
			break;
		case 'S':
			i = t;
			break;
		default:
			printf("\nResposta não identificada. Tente novamente.");
			i = 2;
			break;
	}
	if(i == 2)
	{
		n = n - 1;
	}
	else
	{
		n = n;
	}
	return i;
}
