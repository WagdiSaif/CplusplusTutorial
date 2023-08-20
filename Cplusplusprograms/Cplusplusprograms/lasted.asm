     .data 0x10000100

msg: .asciiz "hello"
      .text

main:li $v0,4
     la $a0,msg
     syscall
     li $v0,10
     syscall