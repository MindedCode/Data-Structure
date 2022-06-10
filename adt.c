#include<stdio.h>
#include<stdlib.h>
struct myarr
{
     int total_size;
     int used_size;
     int *ptr;
};

void createArr(struct myarr *a,int total_s, int used_s)
{
     // (*a).total_size =total_s;
     // (*a).used_size =used_s;
     // int *ptr=(int*)malloc(total_s*sizeof(int));

      a->total_size =total_s;
      a->used_size =used_s;
      a->ptr=(int*)malloc(total_s*sizeof(int));

}
void setVal(struct myarr*a){
     int n;
     for(int i=0; i<a->used_size; i++)
     {
          printf("Enter the  %d number ", i);
          scanf("%d",&n);
          (a->ptr)[i]=n;
     } 
}

void show(struct myarr *a) 
{
     for(int i=0; i<a->used_size; i++)
     {
          printf("%d\n",(a->ptr)[i]);
     }
}

int main()
{
     struct myarr marks;
     createArr(&marks,10,2);
     printf("We are running SetValue now\n");
     setVal(&marks);
     printf("We are running Show now\n");
     show(&marks);
     return 0;
}