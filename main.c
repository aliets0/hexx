#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double hex(double place, int num);
int pwr(int num1, int pwrn);

int main(){

  char *p, str[10], i ;
  int pp;
  double r;
  p = &str[i];
  
  printf("\033[1;31m> ");

  strtok(str, "\n");
  
  fgets(str, 10, stdin);

  pp = strlen(str) - 2;
  
  while(*p){
      
    if(*p == '1'){
      r += hex(pp, 1);
      
    }
    else if(*p == '2'){
      r += hex(pp, 2);
      
    }
    else if(*p == '3'){
      r += hex(pp, 3);
      
    }
    else if(*p == '4'){
      r += hex(pp, 4);
      
    }
    else if(*p == '5'){
      r += hex(pp, 5);
      
    }
    else if(*p == '6'){
      r += hex(pp, 6);
      
    }
    else if(*p == '7'){
      r += hex(pp, 7);
      
    }
    else if(*p == '8'){
      r += hex(pp, 8);
      
    }
    else if(*p == '9'){
				r += hex(pp, 9);
        
			      }
			      else if(*p == 'A'){
				r += hex(pp, 10);
        
			      } 
			      else if(*p == 'B'){
				r += hex(pp, 11);
        
			      }
			      else if(*p == 'C'){
				r += hex(pp, 12);
        
    }
    else if(*p == 'D'){
      r += hex(pp, 13);
              
    }
    else if(*p == 'E'){
      r += hex(pp, 14);
        
    }
    else if(*p == 'F'){
      r += hex(pp, 15);
        
    }
    
    *p++;
    pp--;  
  }
  printf("\033[1;34m hex is\033[1;35m %lf \n", r);
  
  return 0;
}

double hex(double place, int num)
{
  double result;
  
  result = num * pow(16.0, place);

  return result;
 
 }
