# control statments

Control statements enable us to specify the flow of program control; ie, the order in which the instructions in a program must be executed.

# Types of control statments 

1. Decision making statements.

2. Selection statements.

3. Iteration statements.

4. Jump statements.

## Decision making statments.

 ### 1) if statment
 An if statement consists of a Boolean expression followed by one or more statements.

     if(boolean_expression) {
  
      /* statement(s) will execute if the boolean expression is true */
   
    }

    for more info 👉🏻 : https://www.tutorialspoint.com/cprogramming/if_statement_in_c.htm

### 2) if else statment 
 An if statement can be followed by an optional else statement, which executes when the Boolean expression is false.

     if(boolean_expression) {

      /* statement(s) will execute if the boolean expression is true */
    } 
    else 
      {
       /* statement(s) will execute if the boolean expression is false */
      }
   for more info 👉🏻 : https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm

### 3) nested if
It is always legal in C programming to nest if-else statements, which means you can use one if or else if statement inside another if or else if statement(s).

    if( boolean_expression 1) {

     /* Executes when the boolean expression 1 is true */
      if(boolean_expression 2) {
      /* Executes when the boolean expression 2 is true */
      }
    }

   for more info 👉🏻 : https://www.tutorialspoint.com/cprogramming/nested_if_statements_in_c.htm
 

