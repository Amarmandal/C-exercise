#include <stdio.h>
int main(){
	char name[10];
	printf("Enter the name: ");
	scanf("%s", name);
	switch (name){
	case 'amar':{
		printf("My name is amar\n");
		break;	
	}
	default:{
		printf("You are not amar\n");
	}
	}
}
