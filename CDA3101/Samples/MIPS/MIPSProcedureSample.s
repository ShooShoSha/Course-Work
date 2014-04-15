##############################################
#  CDA 3101
#  MIPS Procedure Sample
##############################################

   .text
   .globl main
main:
      li      $v0, 4         # print_string
      la      $a0, prompt
      syscall


      # put address of num into the $a0 register
      la      $a0, num
      jal     getInt         # call the procedure

      # after procedure, value should be in num

      lw      $a0, num       # put value parameter into $a0
      jal     printInt       # call procedure to print int

      li      $v0, 10        # terminate, return to OS
      syscall

########################################################
#
# Procedure to get one integer
# One parameter passed by address (reference)
# Address of integer is passed in the $a0 register
# No return value
#
########################################################
getInt:
      li      $v0, 5      # service number 5 to read an int
      syscall             # OS leaves int in $v0
      sw      $v0, ($a0)  # $a0 holds address of num, store the value there
      jr      $ra         # return

########################################################
#
# Procedure to print one integer
# One parameter passed by value
# Value to be printed must be in $a0
#
########################################################
printInt:
      li      $v0, 1      # service number 1 is print int
      syscall             # call OS to print the int in $a0
      jr      $ra         # return
 
########################################################
#
# Data segment
#
########################################################
      .data
prompt:  .asciiz "Enter an integer -- "  
num:     .word 0
newline: .asciiz "\n"
