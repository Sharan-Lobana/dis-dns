#include<rpc/rpc.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "name.h"

int * nameproc_1_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	static int res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return &res;
}

name * l1n1proc_2_svc(name* NAME, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL; //Contains line read from file
	size_t len = 0; //Buffer Size, Initially set to zero.(Still working. :p)
	ssize_t read; //Contains the number of characters read from a line
	char res[15];  //Contains the ip
	char required[50];  //Contains the domain name
	char *dname;  //Used for locating given substring in line
	bool found = false; //equals true if domain name in text file

	strcpy(required, NAME->content);
	fp = fopen("com.txt", "r");

	//Failed to open file
	if (fp == NULL)
		exit(EXIT_FAILURE);



	while ((read = getline(&line, &len, fp)) != -1)
	{
		char *dname = strstr(line,required);
		if(dname)
		{
			found = true;
			break;
		}
	}

	if(found)
		strcpy(res,line+strlen(required)+1);

	//Close the file
	fclose(fp);
	
	//Create new response struct using malloc
	struct name *response = (struct name*)malloc(sizeof(struct name));
	strcpy(response->content, res);
	
	return response;
}

int * l1n2proc_3_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n1proc_4_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n2proc_5_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n3proc_6_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n4proc_7_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
