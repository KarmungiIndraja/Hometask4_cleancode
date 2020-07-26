#include<stdio.h>
int main() {
int n;
scanf("%d",&n);
if(n%3 == 0) {
printf("1");
}
else if(n%5 == 0) {
printf("2");A
}
else if(n%3==0 && n%5==0){
printf("3");

else {
printf("0");
}
return 0;
}