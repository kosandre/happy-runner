/* 
 * File:   main.c
 * Author: asu10
 *
 * Created on 28 Февраль 2013 г., 15:01
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char** argv) {

int a,b,c,i;
float start, end, time;
//***********************************
        printf ("Integer a=1,b=3:\n");
a=1;b=3;
start =  clock();
for (i=0;i<1000000000;i++){
a=a+b;
}
end = clock();
        time = (end - start);
printf ("a+b time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************    
a=1;b=3;
start =  clock();
for (i=0;i<1000000000;i++){
a=a-b;
}
end = clock();
        time = (end - start);
printf ("a-b time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************
a=1;b=3;
start =  clock();
for (i=0;i<1000000000;i++){
a=a*b;
}
end = clock();
        time = (end - start);
printf ("a*b time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//*********************************** 
double d,e,f;
//***********************************
        printf ("\nFloat d=0.01, e=2.3:\n");
d=0.01;e=2.3;
start =  clock();
for (i=0;i<1000000000;i++){
d=d+e;
}
end = clock();
        time = (end - start);
printf ("d+e time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************    	
d=0.01;e=2.3;
start =  clock();
    for (i=0;i<1000000000;i++){
d=d-e;
    }
end = clock();
        time = (end - start);
                 printf ("d-e time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
             //***********************************	
            	d=0.01;e=2.3;
                start =  clock();
            	    for (i=0;i<1000000000;i++){
    	d=d*e;
    		    }
	end = clock();
        time = (end - start);
    	printf ("d*e time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
    	//***********************************
    	d=0.01;e=2.3;
        start =  clock();
    for (i=0;i<1000000000;i++){
	d=d/e;
    }
		end = clock();
    time = (end - start);
    	printf ("d/e time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
    	//***********************************
	//test
	//***********************************
        printf ("\nVerification:\n");
        printf ("\nInteger a=1, b=1:\n");
        	a=1; b=3;
            	start =  clock();
            	for (i=0;i<1000000000;i++){
	    a=a+b;
		}
    end = clock();
        time = (end - start);
	printf ("a+3           time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
    	//***********************************
    a=1; b=3;
    start =  clock();
    for (i=0;i<1000000000;i++){
	a=a+b;
        a=a+b;
	}
    end = clock();
    time = (end - start);
	printf ("a+3 a+3       time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
    	//***********************************
    a=1;c=1; b=1;
    start =  clock();
    for (i=0;i<1000000000;i++){
	a=a+b;
        c=c+b;
    	}
        end = clock();
        time = (end - start);
    	printf ("a+3 c+3       time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************
    	//test2	
//***********************************
printf ("\nFloat d=0.01, e=0.01:\n");
        d=0.01;e=2.03;
    start =  clock();
    for (i=0;i<1000000000;i++){
		d=d+e;
	    }
    end = clock();
        time = (end - start);
    	printf ("d+2.03        time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************
    d=0.01; e=2.03;
	start =  clock();
    for (i=0;i<1000000000;i++){
	d=d+e;
        d=d+e;
	}
    end = clock();
    time = (end - start);
    printf ("d+2.03 d+2.03 time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);
//***********************************
    d=0.01;f=0.01;e=2.03;
    start =  clock();
    for (i=0;i<1000000000;i++){
	d=d+e;
        f=f+e;
    }
    end = clock();
    time = (end - start);
    printf ("d+2.03 f+2.03 time=%.2f sec\n",((float)time)/CLOCKS_PER_SEC);

    return (EXIT_SUCCESS);
}
