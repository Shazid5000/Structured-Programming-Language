
#include<stdio.h>
int main()
{
    int num_papers;
    int num_papers_onebook;
    int number_book;

    printf("Enter the number of papers for books\n");
    scanf("%d",&num_papers);

    printf("Enter the numbers of papers for one book\n");
    scanf("%d",&num_papers_onebook);

    number_book=num_papers/num_papers_onebook;
    printf("%d books can be made",number_book);

    return 0;
}
