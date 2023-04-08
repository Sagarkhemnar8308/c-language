/*char
1.string are use store text characters.
2.snytax:-char varable name related to string.
3.

*/
// #include<stdio.h>
// int main(){
//     char hello[20]={"hello world"};

// for(int b=0;b<=10;b++){
//     printf("%c",hello[b]);
// }

// return 0;
// }

#include<stdio.h>
int main(){
    char hello[7]={"sun","mon","tue","wed","thu","fri","sat"};

for(int b=0;b<=7;b++){
    printf("%c",hello[b]);
}

return 0;
}