echo "Menu"
echo "1. create employee record"
echo "2. delete employee record"
echo "3. search employee record"
echo "4. sort details"
echo "5. list all records"
echo "6. Exit"

read -p "Enter yout choice (1-7):" choiceNumber

case $choiceNumber in
	1)
		function createEmployee(){
			echo "enter Name of employee : " 
			read Ename
			echo "enter the IdNumber of employee : "
			read eid
			echo "Enter the salary of employee : "
			read sal
			if [[ ! $eid =~ ^[0-9]+$ ]]; then 
				echo "plese enter the valid employee ID : "
				read eid
			fi
			echo "$eid => $Ename, $sal" >> emp.txt
			echo "Employee Record for $Ename created"
		}
		
		createEmployee
	;;
	2)
		function deleteEmploye(){
			echo "enter the employee id to be deleted"
			read eid
			ed=$(grep "$eid" emp.txt)
			if [ "$ed" ]; then 
				sed -i "/$eid/d" emp.txt
				echo "employee details deleted successfully"
			fi
		}

		deleteEmploye
	;;
	3)
		function searchEmployee(){
			echo "Enter the Employee ID number to be searched"
			read eid
			ed=$(grep "$eid" emp.txt)
			if [ "$ed" ]; then
				echo "$ed"
			else 
				echo "Employee Details are not found"
			fi	

		}
		searchEmployee
	;;
	4)
		function sortData(){
			cat emp.txt | sort
		}
		sortData
	;;
	5)	
		function display(){
		   	if [ -f "$1" ]; then
				cat "$1"
			fi
		}
		display emp.txt
	;;
esac	
