READ x
COPY z x
LOAD x
SUB 12
BRPOS Valid
BR OUT
Valid:LOAD z
SUB 19
BRPOS OUT
WRITE y
OUT:STOP

z 0
x 0
y 1
