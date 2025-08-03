//main structure
.model small
.stack 100h
.data
.code
main proc
    // your code goes here

    // Exit program
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main

