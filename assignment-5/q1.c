//Write a C program to create a Book structure containing book_id, title, author name and price, print the book details.

#include<stdio.h>


struct book
    {
        int book_id;
        char title[50];
        char author[20];
        int price;
    };

    

int main()
{
   struct book ob;
   printf("Enter the book-id: \n");
   scanf("%d", &ob.book_id);
   printf("Enter the book-title: \n");
   scanf("%s", ob.title);
   printf("Enter the book-author: \n");
   scanf("%s", ob.author);
   printf("Enter the book-price: \n");
   scanf("%d", &ob.price);

   

   printf("book_id = %d title = %s author = %s price = %d", ob.book_id, ob.title, ob.author, ob.price);

    return 0;
}