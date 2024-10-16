class NameLengthException(Exception):
    pass
class EmployeeIdException(Exception):
    pass
class Employee:
    __trials=0
    def __init__(self,emp_id,emp_name):
        self.__emp_name=emp_name
        self.__emp_id=emp_id
        self.__trials+=1
    def __validate(self):
        try:
            if(len(self.__emp_name)<5):
                Employee.__trials=Employee.__trials+1
                raise NameLengthException
                print(Employee.__trials,end=' ')
            if (not(self.__emp_id.startswith('K'))):
                raise EmployeeIdException
                print(Employee.__trials,end=' ')
        except NameLengthException:
            Employee.__trials=Employee.__trials+1
            print(Employee.__trials,end=' ')
        except EmployeeIdException:
            Employee.__trials=Employee.__trials+1
            print(Employee.__trials,end=' ')
    def validate_employee(self,employee_id):
        try:
            if employee_id not in self.__employee_list:
                raise Exception
                print("1",end=' ')
        except Exception:
            print("5",end=' ')

emp1=Employee('e1001','tom')
emp1._Employee__validate_name()
emp2=Employee('k1002','tomy')
emp2._Employee__validate_name()