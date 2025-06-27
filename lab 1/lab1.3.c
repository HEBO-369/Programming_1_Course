int main (){
int x,y ;
char z ;
printf("inter an integer x : ( 0 <= x <= 15 )\n");
scanf("%d",&x);
printf("inter an integer y : ( 0 <= y <= 15 )\n");
scanf("%d",&y);
if (x<0 || x>15 || y<0 || y>15){
    printf("invalid input : x & y must be between 0 - 15 ");
    return 1 ;}
z = (x<<4)+ y ;
printf("%d\n",z);
printf("%lu",sizeof(z));
return 0;
}
