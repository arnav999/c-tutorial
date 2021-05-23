# Selective statments

A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.

## types of selective statments

1. switch statment.

2. nested switch statment.

### 1) switch statment :
    
      switch(expression) {

      case constant-expression  :
      statement(s);
      break; /* optional */
	  
     case constant-expression  :
      statement(s);
      break; /* optional */
  
      /* you can have any number of case statements */
      default : /* Optional */
      statement(s);
    } 

or more resources 👉🏻 : https://www.tutorialspoint.com/cprogramming/switch_statement_in_c.htm

### 2) nested switch :

Nested-Switch statements refers to Switch statements inside of another Switch Statements.

     switch(n)
     {
      // code to be executed if n = 1;
     case 1: 
    
     // Nested switch
     switch(num) 
     {
     // code to be executed if num = 10
     case 10: 
      statement 1;
      break;
      
     // code to be executed if num = 20
     case 20: 
      statement 2;
      break;
      
     // code to be executed if num = 30
     case 30: 
     statement 3;
     break;
      
     // code to be executed if num 
     // doesn't match any cases
     default: 
    }
  
  
     break;
    
     // code to be executed if n = 2;
     case 2:
     statement 2;
     break;
  
     // code to be executed if n = 3;
     case 3: 
     statement 3;
     break;
  
     // code to be executed if n doesn't match any cases
     default: 
    }

  for more resources 👉🏻 : https://www.geeksforgeeks.org/nested-switch-case/

