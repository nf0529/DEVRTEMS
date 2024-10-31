#include <rtems.h>
#include <stdlib.h>
#include <stdio.h>

rtems_task taehan1(rtems_task_argument ignored){
	printf("\nTaehan1\n");
	rtems_shutdown_executive(0);
}

rtems_task taehan2(rtems_task_argument ignored){
	printf("\nTaehan2\n");
	rtems_shutdown_executive(0);
}


rtems_task taehan3(rtems_task_argument ignored){
	printf("\nTaehan3\n");
	rtems_shutdown_executive(0);
}

rtems_task taehan2(rtems_task_argument ignored){
	printf("\nTaehan3\n");
	rtems_shutdown_executive(0);

}



