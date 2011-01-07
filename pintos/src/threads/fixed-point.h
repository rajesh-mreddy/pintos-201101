// created by //albert 
/* This file states the methods by which pintos deal with fixed-point arithmetic 
   Tips: 17.14 fixed-point number representation (Type int32)
   1. When a fixed-point number is bing arithmeticed, we right-shift it's demical 
      point 14 bits. 
   2. All the arithmetics are between long integers. 
   3. When Multiplying & Dividing, the process variable should cast to int64 in 
      case of overflow.  */
      
/* Below, "N" represents integer number, "X" & "Y"  represent float numbers. */  
   
/* Define the parameter(2^14) in 17.14 fixed-point number representation */
#define PARA 16384

/* int to float */
#define INT2FLOAT(N) ((N)*PARA)

/* float to int rounding to zero */
#define FLOAT2INTZ(X) ((X)/PARA)

/* float to int rounding to nerest */
#define FLOAT2INTN(X) (((X)>=0)?(((X)+PARA/2)/PARA):(((X)-PARA/2)/PARA))

/* float add float */
#define FADDF(X,Y) ((X)+(Y))

/* float substruct float */
#define FSUBF(X,Y) ((X)-(Y))

/* float add int */
#define FADDI(X,N) ((X)+(N)*PARA)

/* float substruct int */
#define FSUBI(X,N) ((X)-(N)*PARA)

/* float multiply float */
#define FMULF(X,Y) (((int64_t)X)*(Y)/PARA)

/* float multiply int */
#define FMULI(X,N) ((X)*(N))

/* float divide float */
#define FDIVF(X,Y) (((int64_t)X)*PARA/(Y))

/* float divide int */
#define FDIVI(X,Y) ((X)/(Y))

