#include <stdio.h>

int main(){
	char a[] ="Dies ist ein Farbtest";
	printf("\e[44;97;1m %s \e[0m in blau/weiß\n",a);
	printf("\e[42;91;1m %s \e[0m in Grün/Rot\n",a);
	printf("\e[91;9m %s \e[0m in Weiß/Rot/durchgestrichen\n",a);
			           
return 0;
}
