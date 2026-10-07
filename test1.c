#include<stdio.h>
struct book{
char title[100];
char author[100];
int year;
};

int main(){

struct book books[50];
int n,i;
printf("Etner the number of books:");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter the details of book%d:",i+1);
printf("Enter the title:");
scanf("%s",books[i].title);
printf("Enter the author:");
scanf("%s",books[i].author);
printf("Enter the year of publication:");
scanf("%d",&books[i].year);
}

printf("===Library book details===");
for(i=0;i<n;i++){
printf("\nBook%d:",i+1);
printf("Title:",books[i].title);
printf("Author:",books[i].author);
printf("Year:",books[i].year);
}
return 0;
}

