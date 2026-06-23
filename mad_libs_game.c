#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("Enter name :");
    fgets(name,sizeof(name),stdin);
    char place[50];
    printf("Enter your location :");
    fgets(place,sizeof(place),stdin);
    char adjective[50];
    printf("Enter adjective : ");
    fgets(adjective,sizeof(adjective),stdin);
    char ending[50];
    printf("Enter your cherished ending :");
    fgets(ending,sizeof(ending),stdin);

    printf("Once there was a man named %s",name);
    printf("The location was %s",place);
    printf("The man was fond of %s",adjective);
    printf("But the ending was %s",ending);


}
