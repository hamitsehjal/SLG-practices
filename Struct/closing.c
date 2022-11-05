/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/10/30
* *********************/

#include <stdio.h>

// structure here

int main()
{
    //complete the code here
    
    /*
    Use the data below for employees array;
    "software developer", "10-10-2022", 5000  &  "web developer", "05-05-2021", 5000
    */

    for (int i = 0; i < 2; i++) {
        printf("position: %s, date started: %s, salary: %d\n",
            employees[i].position, employees[i].dateStarted, employees[i].salary);
    }

    return 0;
}


