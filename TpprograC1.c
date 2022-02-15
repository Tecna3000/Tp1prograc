#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdio.h>
///Documents/Tpprograc$  clang  -std=c99 -W -Wall -pedantic  TpprograC1.c -o TpprograC1
// pour executer ./TpprograC1
//Exercice1

size_t MyString_strlen(char const string[]){
   size_t i = 0;
   while(string[i] != '\0'){
       i = i + 1;
   }
   return i;
}

void MyStringTest_strlen(void){
    assert (MyString_strlen("banana") == 6);
    assert (MyString_strlen("x") == 1);
    assert (MyString_strlen("banana") == 6);
}

//Exercice2
const char* MyString_strchr(char const string[], int character ){
   int i = 0;
   while(string[i] != '\0'){
       if(string[i]  == character){
           return &(string[i]);
       }
         i++;
   }
   return NULL;
}


void MyStringTest_strchr(void){
    printf("%s\n",MyString_strchr("Pomme",'m'));
}
//part2

const char* MyString_strrchr(char const string[], int character ){
   int i = 0;
   const char* m  = NULL;
   while(string[i] != '\0'){
       if(string[i]  == character){
           m = & (string[i]);
       }
         i++;
   }
   return m;
}


void MyStringTest_strrchr(void){
    printf("%s\n",MyString_strrchr("pomme",'p'));
}



//Exercice3
int MyString_strcmp(char const string1[],char const string2[]){
    int i = 0;
    int j =0; 
 
    while(string1[i] || string2[j]){

        if(string1[i] != string2[j]){

         if(string1[i]< string2[j]){
           return -1;
         }
         if(string1[i]>string2[j]){
           return 1;
        
         }
         }
        if (string1[i] != '\0'){
            i++; 
        }
            
        if (string2[j] != '\0'){
            j++;     
        }          
    }
  
   return 0; 
}




void MyStringTest_strcmp(void){
printf("%d\n",MyString_strcmp("pomme","pomme"));
}

//part2
int MyString_strncmp(char const string1[],char const string2[], size_t n){
    size_t i = 0;
    
 
    while(i<=n){

        if(string1[i] != string2[i]){

         if(string1[i]< string2[i]){
           return -1;
         }
         if(string1[i]>string2[i]){
           return 1;
         }
         }
      
        i++; 
         
    }
  
   return 0;

}

void MyStringTest_strncmp(void){
    printf("%d\n",MyString_strncmp("pomme","polme",3));
}


char * MyString_strstr(char const string[],char const substring[]){

}

void MyStringTest_strstr(void){
    printf("%d\n",MyString_strstr("pomme","pom");

}
int main(void){
    //MyStringTest_strchr();
    //MyStringTest_strlen();
    //MyStringTest_strcmp();
    //MyStringTest_strncmp();
    MyStringTest_strstr();
    return 0;
}