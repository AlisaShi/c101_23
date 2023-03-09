#include <stdio.h>
#include<string.h>
typedef struct employee{
  int em_id;//=0,1,2,3,4,5
  char em_name[10];//IU Lee
  int em_age;//18
  char em_phone[12];//0937123456
  float em_salary;//1000.30

}employee_t;

void employee_info(employee_t my_employee){
  printf("%d\n",my_employee.em_id);
  printf("%s\n",my_employee.em_name);
  printf("%d\n",my_employee.em_age);
  printf("%s\n",my_employee.em_phone);
  printf("%f\n",my_employee.em_salary);
  
}

int main(void) {
employee_t my_employee;
  my_employee.em_id=5;
  strcpy(my_employee.em_name, "IU Lee");
  my_employee.em_age=18;
  strcpy(my_employee.em_phone, "0937123456");
  my_employee.em_salary=1000.30;
  printf("%d\n",(int)sizeof(employee_t));
  employee_info(my_employee);

  return 0;
}
