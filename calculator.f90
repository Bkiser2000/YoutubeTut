program calculator

   implicit none
   real :: num1, num2, result
   character(len=1) :: operator

   print '(A)', 'Simple Fortran Calculator'

   print '(A)', 'Input the first number:'
   read *, num1
 
   print '(A)', 'Input the second number:'
   read *, num2

   print '(A)', 'Input the operator:'
   read '(A)', operator

   select case (operator)
       case ('+')
           result = num1 + num2
           print '(A, F10.2)', "The result is: ", result
       case ('-')
           result = num1 - num2
           print '(A, F10.2)', "The result is: ", result
       case ('*')
           result = num1 * num2
           print '(A, F10.2)', "The result is: ", result
       case ('/')
           if (num2 /= 0) then
               result = num1 / num2
               print '(A, F10.2)', "The result is: ", result
           else
              print '(A)', "Division by zero not allowed"
           end if
 
   end select

end program calculator
