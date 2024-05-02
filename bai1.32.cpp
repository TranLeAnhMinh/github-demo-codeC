#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* my_strcat(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char* result = (char*)malloc(len1 + len2 + 1);

    if (result == NULL) {
        fprintf(stderr, "Loi cap phat bo nho dong!\n");
        exit(1);
    }
    strcpy(result, s1); 
	int i;
	for(int i = 0; i< len2 ; i++){
		result[len1 + i] = s2[i];
	} 
	result[len1 + len2] = '\0';
    return result;
}

int main(){
	const char* s1 = "hello_";
	const char* s2 = "world!";
	
	char* result = my_strcat(s1,s2);
	printf("Ket qua:  %s\n", result);
	
	free(result);
	return 0;
}
