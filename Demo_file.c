#include<stdio.h>
#define MAX_BOOK 20
//const int MAX_BOOK=20;
struct Book{
    unsigned int price;
    unsigned int pages;
    double year;
    char title[20];
    char author[20];
    char publisher[20];
};

typedef struct Book Book;

void Display(const struct Book*);
void DisplayAll(const struct Book*,int);
Book* FindBookByPrice(const Book*,int,int);
int main(){
     Book b1[MAX_BOOK]={
        {100,250,1991,"My book","Me","you"},
        {200,650,2000,"Her book","Him","Bye"},
        {140,450,2001,"His book","They","We"}
    };
    Display(&b1[0]);
   // DisplayAll(b1,3);
    Book* pre=FindBookByPrice(b1,3,100);
    return 0;
}


void Display(const struct Book* ptr)
{
    printf("Price=%u\nPages=%u\nYear_of_publish=%lf\ntitle=%s\nAuthor_name=%s\nPublisher=%s\n\n\n",ptr->price,ptr->pages,ptr->year,ptr->title,ptr->author,ptr->publisher);
}

void DisplayAll(const struct Book* ptr,int n)
{
    const Book* purr=ptr;
    for(int i=0;i<n;i++){
        Display(purr);
        purr++;
    }
}

Book* FindBookByPrice(const Book* ptr,int n,int keyword)
{
    const Book* purr=ptr;
    for(int i=0;i<n;i++){
    if(purr->title == keyword);
    }
    Display(&purr);
}
