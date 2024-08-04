//NAME:M-ALI-IRTZA
//REGISTRATION NUMBER:L1F22BSCS0860
//SEMESTER FINAL PROJECT
#include<iostream>
using namespace std;
int main()
{
	//INITIALIZING ARRAYS
	int roll_num[15] = { 860, 830, 899, 893, 812, 867, 882, 831, 839, 842 };
	float mid_marks[15] = { 35, 40, 45, 30, 20, 44, 50, 47, 32, 10 };
	float final_marks[15] = { 40, 35, 50, 37, 26, 20, 49, 23, 46, 21 };
	int classes[15] = { 7, 8, 9, 1, 5, 8,6,2,8, 4 };
	char grade[5] = {'A','B','C','D','F'};
	float per[15] = {};
	char gr[15] = {};
	char arr[3];
	float final_mark;
	char gradee;
	int i;
	int lim = 10;
	for (i = 0; i <lim; i++)
	{
		//FINDING PERCENTAGE TO COMPARE GRADES
		per[i] = (((mid_marks[i] + final_marks[i]) / 100) * 100);
		if (per[i] >= 86)
		{
			gr[i] = grade[0];
		}
		else if (per[i] >= 73 && per[i] <= 85)
		{
			gr[i] = grade[1];
		}
		else if (per[i] >= 60 && per[i] <= 72)
		{
			gr[i] = grade[2];
		}
		else if (per[i] >= 50 && per[i] <= 59)
		{
			gr[i] = grade[3];
		}
		else if (per[i] < 50)
		{
			gr[i] = grade[4];
		}
	}
	cout << "_______________________________________________________________" << endl;
	cout << " " << "Roll_no" << " |  " << "Mid_Marks" << " |  " << "Final_Marks" << " |  " << "Grade" << "    |  " << "class" << endl;
	cout << "_______________________________________________________________" << endl;
	//USING FOR LOOP TO DISPLAY THE ARRAYS
	for (i = 0; i <lim; i++)
	{
			cout << "_______________________________________________________________" << endl;
			cout << "  " << roll_num[i] << "     |     " << mid_marks[i] << "     |      " << final_marks[i] << "      |      " << gr[i] << "    |    " << classes[i] << endl;
	}
	cout << "_______________________________________________________________" << endl;
	cout << endl;
	cout << endl;
	//DISPLAYING MENU FOR THE OPERATIONS WHICH USER WANT TO PERFORM
	cout << "                                 <---------->                                      " << endl;
	cout << endl;
	cout << "-->  Press 1 to Sort and display all the records roll number wise in ascending order" << endl;
	cout << endl;
	cout << "-->  Press 2 to Sort and display all the records roll number wise in descending order" << endl;
	cout << endl;
	cout << "-->  Press 3 to Sort and display all records in ascending order based on marks in Midterm" << endl;
	cout << endl;
	cout << "-->  Press 4 to Sort and display all records in descending order based on marks in Midterm" << endl;
	cout << endl;
	cout << "-->  Press 5 to Sort and display all records in ascending order based on marks in Final" << endl;
	cout << endl;
	cout << "-->  Press 6 to Sort and display all records in descending order based on marks in Final" << endl;
	cout << endl;
	cout << "-->  Press 7 to Sort and display all records in ascending order based on Grade" << endl;
	cout << endl;
	cout << "-->  Press 8 to Sort and display all records in descending order based on Grade" << endl;
	cout << endl;
	cout << "-->  Press 9 to Add a new entry of a student" << endl;
	cout << endl;
	cout << "-->  Press 10 to Delete a student record based on his roll number" << endl;
	cout << endl;
	cout << "-->  Press 11 to Display record of all the students greater than X marks in final exam" << endl;
	cout << endl;
	cout << "-->  Press 12 to Display record of all the students greater than X marks in final exam" << endl;
	cout << endl;
	cout << "-->  Press 13 to Display record of all the students less than or equal to X marks in final exam" << endl;
	cout << endl;
	cout << "-->  Press 14 to Display record of all the students less than or equal to X marks in final exam" << endl;
	cout << endl;
	cout << "-->  Press 15 to Display record of all the students greater than X grade" << endl;
	cout << endl;
	cout << "-->  Press 16 to Display record of all the students greater than X grade" << endl;
	cout << endl;
	cout << "-->  Press 17 to Display record of all the students less than or equal to X grade" << endl;
	cout << endl;
	cout << "-->  Press 18 to Display record of all the students less than or equal to X grade" << endl;
	cout << endl;
	cout << "                                 <---------->                                       " << endl;
	cout << endl;
	//USING DO WHILE LOOP AS INFINITE LOOP
	do
	{
		cout << endl;
		cout << "  PLEASE ENTER THE NUMBER FROM THE GIVEN OPTIONS ACCORDING TO THE OPERATIONS YOU WANT TO PERFORM" << endl;
		cout << "                                           OR\n                                    PRESS E TO EXIT" << endl;
		cout << "                                           OR\n              IF YOU WANT TO PERFORM OPERATION AGAIN ENTER THE GIVEN OPTIONS" << endl;
		cout << "  ENTER NUMBER:";
		//GETTING INPUT BY THE USER WHICH TASKS HE WANT TO PERFORM
		cin >> arr;
		int temp = 0;
		//USING IF ELSE TO PEROFRM MULTIPLE OPERATIONS
		//USING THE CONDITION IN WHICH THE USER INPUT E THE PROGRAM WILL END AUTOMATICALLY
		if ((arr[0] == 'e') || (arr[0] == 'E') || arr[2] == 'e' || arr[2] == 'E')
		{
			//USING BRAKE TO END THE PROGRAM IF USER ENTER E
			break;
		}
		//WRITING TASK NO 1
		//ARRANGING THE RECORD ROLL NO WISE IN ASCENDING ORDER
		//IF USER WILL ENTER 1 TASK 1 WILL PRINT
		else if (arr[0] == '1' && arr[1] == 0)
		{
			//SORTING THE ARRAY IN ASCENDING ORDER
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				//ASCENDING ORDER 
				if (roll_num[i] > roll_num[j])
				{
					//FOR SORTING ROLL_NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MID_MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL_MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN ASCENDING ORDER ACCORDING TO ROLL NUMBER ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY ARRAYS SORTED IN ASCENDING ORDER ACCORDING TO ROLL-NUMBER
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << "ROLL_NUMBER: " << roll_num[i] << "  MID_MARKS:  " << mid_marks[i] << " FINAL_MARKS: " << final_marks[i] << "  GRADE:  " << gr[i] << "  CLASS:  " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 2
		//ARRANGING THE RECORD IN DECENDING ORDER ACCORDING TO ROLL NUMBER
		//IF USER WILL INPUT 2 TASK NO 2 WILL DISPLAY
		else if (arr[0] == '2' && arr[1] == 0)
		{
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				//DECENDING ORDER
				if (roll_num[i] < roll_num[j])
				{
					//FOR SORTING ROLL NUMBERS
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MID_TERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN DESCENDING ORDER ACCORDING TO ROLL NUMBER ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//DISPLAYING THE SORTED RECORDES IN DECENDING ORDER ACCORDING TO ROLL NUMBER
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << "ROLL_NUMBER: " << roll_num[i] << "  MID_MARKS:  " << mid_marks[i] << " FINAL_MARKS: " << final_marks[i] << "  GRADE:  " << gr[i] << "  CLASS:  " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 3
		//ARRANGING THE RECORDS IN ASCENDING ORDER ACCORDING TO MID TERM MARKS
		//IF USER WILL INPUT THREE TASK 3 WILL BE DISPLAYED
		else if (arr[0] == '3' && arr[1] == 0)
		{
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (mid_marks[i] > mid_marks[j])
				{
					//FOR SORING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MID-TERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL-MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASSES
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADES
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}

			cout << "                                                           " << "-------------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN ASCENDING ORDER ACCORDING TO MID-TERM MARKS ARE " << endl;
			cout << "                                                           " << "-------------------------------------------------------------" << endl;
			//DISPLAYING THE SORTED RECORDES IN ASCENDING ORDER ACCORDING TO MID-TERM MARKS
			for (i = 0; i<lim; i++)
			{
					cout << "                                                        " << "MID_MARKS: " << mid_marks[i] << "  ROLL_NUMBER: " << roll_num[i] << " FINAL_MARKS: " << final_marks[i] << "  GRADE:  " << gr[i] << "  CLASS:  " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 4
		//IF THE USER ENTER 4 THIS TASK WILL BE DISPLAYED
		//ARANGING THE RECORDS ACCORDING TO MID_TERM MARKS IN DECENDING ORDER
		else if (arr[0] == '4' && arr[1] == 0)
		{
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (mid_marks[i] < mid_marks[j])
				{

					//FOR SORTING ROLL NUMBERS
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MID-TERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-------------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN DESCENDING ORDER ACCORDING TO MID-TERM MARKS ARE " << endl;
			cout << "                                                           " << "-------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY SORTED RECORD IN DECENDING ORDER ACCORDING TO MID MARKS
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << "MID_MARKS: " << mid_marks[i] << "  ROLL_NUMBER: " << roll_num[i] << " FINAL_MARKS: " << final_marks[i] << "  GRADE:  " << gr[i] << "  CLASS:  " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 5
		//IF THE USER ENTER 5 THIS TASK WILL DISPLAYED
		//ARRANGING THE RECORD IN ASCENDING ORDER ACCORDING TO FINAL MARKS
		else if (arr[0] == '5' && arr[1] == 0)
		{
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (final_marks[i] > final_marks[j])
				{

					//FOR SORTING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MIDTERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL-MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN ASCENDING ORDER ACCORDING TO FINAL-MARKS ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE RECORD IN ASCENDING ORDER ACCORDING TO FINAL MARKS
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << " FINAL_MARKS: " << final_marks[i] << "  MID_MARKS: " << mid_marks[i] << "  GRADE: " << gr[i] << "  CLASS: " << classes[i] << "  ROLL_NUMBER: " << roll_num[i] << endl;
			}
		}
		//WRITING TASK NO 6
		//ARRANGING THE RECORD IN DESCENDING ORDER ACCORDING TO FINAL MARKS
		//IF THE USER WILL INPUT 6 THIS TASK WILL DISPLAYED
		else if (arr[0] == '6' && arr[1] == 0)
		{
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (final_marks[i] < final_marks[j])
				{
					//FOR SORTING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FRO SORTING MID-TERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN DESCENDING ORDER ACCORDING TO FINAL-MARKS ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE RECORDS IN DECENDING ORDER ACCORDING TO FINAL MARKS
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << " FINAL_MARKS: " << final_marks[i] << "  MID_MARKS: " << mid_marks[i] << "  GRADE: " << gr[i] << "  CLASS: " << classes[i] << "  ROLL_NUMBER: " << roll_num[i] << endl;
			}
		}
		//WRITING TASK NO 7
		//IF THE USER WILL INPUT 7 SO THIS TASK WILL DISPLAYED
		//ARANGING THE RECORDS IN ASCENDING ORDER ACCORDING TO THE GRADE 
		else if (arr[0] == '7' && arr[1] == 0)
		{
			//ASCENDING ORDER
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (gr[i] < gr[j])
				{
					//FOR SORTING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MIDTERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN ASCENDING ORDER ACCORDING TO GRADES ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY RECORD IN ASCENDING ORDER ACCORDING TO GRADE
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << "  GRADE: " << gr[i] << "  ROLL_NUMBER: " << roll_num[i] << "  MID_MARKS: " << mid_marks[i] << " FINAL_MARKS: " << final_marks[i] << "  CLASS: " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 8
		//IF THE USER WILL ENTER 8 THIS TASK WILL BE DISPLAYED
		//ARRANGING THE RECORD IN DECENDING ORDER ACCORDING TO GRADE
		else if (arr[0] == '8' && arr[1] == 0)
		{
			//DECENDING ORDER
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			{
				if (gr[i] > gr[j])
				{
					//FOR SORTING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MIDTERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;

				}
			}
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORDS IN DESCENDING ORDER ACCORDING TO GRADES ARE " << endl;
			cout << "                                                           " << "-----------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE RECORD IN DECENDING ORDER ACCORDING TO GRADE
			for (i = 0; i <lim; i++)
			{
					cout << "                                                        " << "  GRADE: " << gr[i] << "  ROLL_NUMBER: " << roll_num[i] << "  MID_MARKS: " << mid_marks[i] << " FINAL_MARKS: " << final_marks[i] << "  CLASS: " << classes[i] << endl;
			}
		}
		//WRITING TASK NO 9
		//IF THE USER WILL ENTER 9 THIS TASK WILL DISPLAYED
		//INSERTION OF RECORD
		else if (arr[0] == '9' && arr[1] == 0)
		{
			//INITIALIZING ROLL NO
			int rollno;
			cout << "PLEASE ENTER THE NEW ROLL";
			//GETTING INPUT BY USER
			cin >> rollno;
			for (int j = 0; j < lim; j++)
			{
				if (rollno == roll_num[j])
				{
					//USING THIS SO IF THE USER ENTER SAME ROLL NO AGAIN IT WILL ASK FOR AGAIN INPUT
					while (rollno == roll_num[j])
					{
						cout << " PLEASE ENTER THE A UNIQUE ROLL NO";
						cin >> rollno;
						for (int k = 0; k < lim; k++)
						{
							if (rollno == roll_num[k])
							{
								cout << "PLEASE ENTER THE ROLL NO AGAIN ";
								cin >> rollno;
							}
						}
					}
				}
			}
			roll_num[lim] = rollno;
			cout << "PLEASE ENTER THE MIDTERM MARKS " << endl;
			cin >> mid_marks[lim];
			cout << "PLEASE ENTER THE FINAL TERM MARKS " << endl;
			cin >> final_marks[lim];
			cout << "PLEASE ENTER CLASS"<<endl;
			cin >> classes[lim];
			//USING IF SO THE NEW ENTRY WILL BUILD
			if (arr[0] == '9' && arr[1] == 0)
			{
				lim = lim + 1;
			}
			//UISNG FOR LOOPS FOR GRADING
			for (i = 0; i <lim; i++)
			{
				//FINDING PERCENTAGE TO COMPARE GRADES
				per[i] = (((mid_marks[i] + final_marks[i]) / 100) * 100);
				if (per[i] >= 86)
				{
					gr[i] = grade[0];
				}
				else if (per[i] >= 73 && per[i] <= 85)
				{
					gr[i] = grade[1];
				}
				else if (per[i] >= 60 && per[i] <= 72)
				{
					gr[i] = grade[2];
				}
				else if (per[i] >= 50 && per[i] <= 59)
				{
					gr[i] = grade[3];
				}
				else if (per[i] < 50)
				{
					gr[i] = grade[4];
				}
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                                               " << "THE NEW RECORD AFTER INSERTION IS" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY NEW RECORD OUTPUT
			for (int i = 0; i <lim; i++)
			{
					cout << "                                                              " << "Roll Number:" << roll_num[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "   " << "Final Marks:" << final_marks[i] << "    " << "Class:" << classes[i] << "   " << "Grade:" << gr[i] << endl;
			}
		}

		//WRITING TASK NO 10
		//IF THE USER WILL ENTER 10 THIS TASK WILL DISPLAYED
		else if (arr[0] == '1' && arr[1] == '0'&& arr[2] == 0)
		{
			//INITIALIZING VARIABLE
			int roll;
			cout << "ENTER THE ROLL NUMBER YOU WANT TO DELETE:"<<endl;
		//TAKING INPUT FROM USER
			cin >> roll;
			for (int i = 0; i <lim; i++)
			{
				if (roll == roll_num[i])
				{
					for (int j = i; j < lim; j++)
					{
						roll_num[j] = roll_num[j + 1];
						mid_marks[j] = mid_marks[j + 1];
						final_marks[j] = final_marks[j + 1];
						classes[j] = classes[j + 1];
						gr[j] = gr[j + 1];
					}
				}
			}
			//USING THIS SO THAT ARRAY WILL DELETE
			if (arr[0] == '1' && arr[1] == '0' && arr[2]==0)
			{
				lim = lim - 1;
			}
			//USE FOR LOOP TO DISPLAY THE DELETED RECORD
			for (int i = 0; i <lim; i++)
			{
					cout << "Roll Number:" << roll_num[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "   " << "Final Marks:" << final_marks[i] << "    " << "Class:" << classes[i] << "   " << "Grade" << gr[i] << endl;

			}
		}
		//WRITING TASK NO 11
		//IF THE USER WILL ENTER 11 THIS TASK WILL DISPLAYED
		// WHEN THE USER GIVE INPUT ARRANGING THE RECORD IN DESCENDING ORDER ACCORDING TO FINAL MARKS 
		else if (arr[0] == '1' && arr[1] == '1' && arr[2] == 0)
		{
			cout << "NOTE:FINAL MARKS ARE GIVEN FROM 50 PLEASE ENTER THE MARKS BELOW 50" << endl;
			cout << endl;
			cout << "ENTER THE FINAL MARKS" << endl;
			//USING DO WHILE SO IF THE USER WILL ENTER THE MARKS EQUAL TO 50 IT ASK FOR THE AGAIN INPUT
			do
			{
				//DESCENDING ORDER
				//GETTING INPUT BY THE USER
				cin >> final_mark;
				//USING IF SO IF THE USER ENTER MARKS GREATER OR EQUAL TO 50
				if (final_mark >= 50)
				{
					cout << "MAX MARKS ARE 50 SO NO DATA IS PRINTED PLEASE ENTER THE MARKS BELOW 50" << endl;
				}

				for (i = 0; i <lim; i++)
				for (int j = i + 1; j <lim; j++)
				if (final_marks[i] < final_marks[j])
				{
					//FOR SORTING ROLL NUMBER
					temp = roll_num[i];
					roll_num[i] = roll_num[j];
					roll_num[j] = temp;

					//FOR SORTING MID TERM MARKS
					temp = mid_marks[i];
					mid_marks[i] = mid_marks[j];
					mid_marks[j] = temp;

					//FOR SORTING FINAL MARKS
					temp = final_marks[i];
					final_marks[i] = final_marks[j];
					final_marks[j] = temp;

					//FOR SORTING CLASS
					temp = classes[i];
					classes[i] = classes[j];
					classes[j] = temp;

					//FOR SORTING GRADE
					temp = gr[i];
					gr[i] = gr[j];
					gr[j] = temp;
				}
				//USING FOR TO DISPLAY THE RECORD IN DECENDING ORDER OF FINAL MARKS
				cout << "                                                              " << "------------------------------------------------------------------" << endl;
				cout << "                                                           " << "THE RECORD OF STUDENT GREATER THEN THE INPUT MARKS IN DECENDING ORDER ARE " << endl;
				cout << "                                                              " << "------------------------------------------------------------------" << endl;
				//USING FOR LOOP TO DISPLAY OUTPUT
				for (i = 0; i <lim; i++)
				if (final_mark < final_marks[i])
				{
						cout << "                                                           " << "Final Marks:" << final_marks[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Grade:" << gr[i] << "    " << "Class:" << classes[i] << "   " << endl;	
				}
			} while (final_mark >= 50);
		}
		//WRITING TASK 12
		//IF THE USER WILL ENTER 12 THIS TASK WILL BE DISPLAYED
		// WHEN THE USER GIVE INPUT ARRANGING THE RECORD IN ASCENDING ORDER ACCORDING TO FINAL MARKS 
		else if (arr[0] == '1' && arr[1] == '2' && arr[2] == 0)
		{
			//ASCENDING ORDER
			cout << "ENTER THE FINAL MARKS" << endl;
			//GETING INPUT FROM THE USER
			cin >> final_mark;
			//USING WHILE LOOP
			while (final_mark >= 50)
			{
				cout << "MAX MARKS ARE 50 SO NO DATA IS PRINTED PLEASE ENTER THE MARKS BELOW 50" << endl;
				cin >> final_mark;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (final_marks[i] > final_marks[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MIDTERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}

			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                          " << "THE RECORD OF THE STUDENT GREATER THEN THE INPUT MARKS IN ASCENDING ORDER ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			for (i = 0; i <lim; i++)
			if (final_mark < final_marks[i])
			{
					cout << "                                                              " << "Final Marks:" << final_marks[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Grade:" << gr[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRITING TASK 13
		//IF THE USER WILL INPUT 13 THIS TASK WILL DISPLAYED
		//WHEN THE USER GIVE INPUT ARRANGING THE RECORD IN DESCENDING TILL IT IS NOT EQUAL TO INPUT ORDER ACCORDING TO FINAL MARKS
		else if (arr[0] == '1' && arr[1] == '3' && arr[2] == 0)
		{
			//DESCENDING ORDER
			cout << "ENTER THE FINAL MARKS" << endl;
			//GETTING INPUT 
			cin >> final_mark;
			//USING WHILE LOOP
			while (final_mark > 50)
			{
				cout << "MAX MARKS ARE 50 SO NO DATA IS PRINTED PLEASE ENTER THE MARKS EQUAL OR BELOW THEN 50" << endl;
				cin >> final_mark;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (final_marks[i] <= final_marks[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MIDTERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                                 " << "THE RECORD ARRANGE IN DECENDING ORDER EQUAL TO USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//FOR DSIPLAYING OUTPUT USING FOR LOOP 
			for (i = 0; i <lim; i++)
			if (final_mark >= final_marks[i])
			{
					cout << "                                                              " << "Final Marks:" << final_marks[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Grade:" << gr[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRIRING TASK NO 14
		//WHEN THE USER ENTER 14 THIS TASK WILL DISPLAYED
		//ARRANGING THE RECORD IN ASCENDING ORDER EQUAL TO THE USER INPUT
		else if (arr[0] == '1' && arr[1] == '4' && arr[2] == 0)
		{
			//ASCENDING ORDER 
			cout << "ENTER THE FINAL MARKS " << endl;
			//GETTING INPUT FROM USER
			cin >> final_mark;
			//USING WHILE LOOP
			while (final_mark > 50)
			{
				cout << "MAX MARKS ARE 50 SO NO DATA IS PRINTED PLEASE ENTER THE MARKS EQUAL OR BELOW THEN 50" << endl;
				cin >> final_mark;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (final_marks[i] >= final_marks[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MID TERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                            " << "THE RECORD ARRANGE IN ASCENDING ORDER GREATER OR EQUAL TO USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE OUTPUT OF FINAL MARK ARRANG IN ASCENDING ORDER EQUAL TO USER INPUT 
			for (i = 0; i <lim; i++)
			if (final_mark >= final_marks[i])
			{
					cout << "                                                              " << "Final Marks:" << final_marks[i] << "    " << "Mid Term Marks:" << mid_marks[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Grade:" << gr[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRITING TASK NO 15
		//IF THE USER ENTER 15 THIS TASK WILL DISPLAYED
		//ARRANGING THE RECORD IN DECENDING ORDER ACCORDING TO GRADE INPUT BY THE USER
		else if (arr[0] == '1' && arr[1] == '5' && arr[2] == 0)
		{
			//DESCENDING ORDER
			cout << "ENTER THE GRADE" << endl;
			cout << "NOTE: ENTER GRADE IN CAPITAL LETTER ONLY" << endl;
			//GETTING INPUT BY THE USER
			cin >> gradee;
			//USING WHILE LOOP
			while (gradee != 'A' && gradee != 'B' && gradee != 'C' && gradee != 'D' && gradee != 'F')
			{
				cout << "INVALID GRADE PLEASE ENTER CORRECT GRADE" << endl;
				cout << "NOTE: ENTER GRADE IN CAPITAL LETTER ONLY" << endl;
				cin >> gradee;
			}
			for (int i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (gr[i] > gr[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MID TERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                             " << "THE RECORD ARRANGE IN DECENDING ORDER GREATER THEN THE USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY OUTPUT
			for (i = 0; i <lim; i++)
			if (gradee > gr[i])
			{
					cout << "                                                              " << "Grade:" << gr[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Final_Marks:" << final_marks[i] << "    " << "Mid_Term Marks:" << mid_marks[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRITING TASK 16
		//IF THE USER WILL ENTER 16 THIS PROGRAM WILL DISPLAYED
		//ARRANGING THE RECORD IN ASCENDING ORDER ACCORDING TO THE GRADE INPUTED BY THE USER
		else if (arr[0] == '1' && arr[1] == '6' && arr[2] == 0)
		{
			//ASCENDING ORDER 
			cout << "ENTER THE GRADE" << endl;
			//GETTING INPUT FROM USER
			cin >> gradee;
			//USING WHILE LOOP
			while (gradee != 'A' && gradee != 'B' && gradee != 'C' && gradee != 'D' && gradee != 'F')
			{
				cout << "INVALID GRADE PLEASE ENTER CORRECT GRADE" << endl;
				cout << "NOTE: ENTER GRADE IN CAPITAL LETTER ONLY" << endl;
				cin >> gradee;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (gr[i] < gr[j])
			{
				//FOR SOTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR MID_TERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR FINAL_MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                              " << "THE RECORD ARRANGE IN ASCENDING ORDER GREATER THEN USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY OUTPUT 
			for (i = 0; i <lim; i++)
			if (gradee > gr[i])
			{
					cout << "                                                              " << "Grade:" << gr[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Final_Marks:" << final_marks[i] << "    " << "Mid_Term Marks:" << mid_marks[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRITING TASK 17
		//IF THE USER WILL ENTER 17 THIS TASK WILL DISPLAYED
		//ARRAGING THE RECORDS IN DESCENDING ORDER ACCORDING TO GRADE TILL GRADE IS NOT EQUAL TO THE INPUT BY THE USER
		else if (arr[0] == '1' && arr[1] == '7' && arr[2] == 0)
		{
			//DESCENDING ORDER AND EQUAL GRADE 
			cout << "ENTER THE GRADE" << endl;
			//GETTING INPUT BY THE USER
			cin >> gradee;
			while (gradee != 'A' && gradee != 'B' && gradee != 'C' && gradee != 'D' && gradee != 'F')
			{
				cout << "INVALID GRADE PLEASE ENTER CORRECT GRADE" << endl;
				cout << "NOTE: ENTER GRADE IN CAPITAL LETTER ONLY" << endl;
				cin >> gradee;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (gr[i] >= gr[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MIDTERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                           " << "THE RECORD ARRANGE IN DECENDING ORDER LESS THEN EQUAL TO USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE RECORD IN DESCENDING ORDER ACCORDING TO GRADE TILL IT IS NOT EQUAL TO USER INPUT 
			for (i = 0; i <lim; i++)
			if (gradee <= gr[i])
			{
					cout << "                                                              " << "Grade:" << gr[i] << "    " << "Roll Number:" << roll_num[i] << "   " << "Final_Marks:" << final_marks[i] << "    " << "Mid_Term Marks:" << mid_marks[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//WRITING TASK 18
		//IF THE USER WILL ENTER 18 THIS TASK WILL DISPLAYED
		//ARRAGING THE RECORDS IN ACENDING ORDER ACCORDING TO GRADE TILL GRADE IS NOT EQUAL TO THE INPUT BY THE USER 
		else if (arr[0] == '1' && arr[1] == '8' && arr[2] == 0)
		{
			//ASCENDING ORDER AND EQUAL
			cout << "PLEASE ENTER THE GRADE" << endl;
			//GETTING GRADE BY THE USER 
			cin >> gradee;
			while (gradee != 'A' && gradee != 'B' && gradee != 'C' && gradee != 'D' && gradee != 'F')
			{
				cout << "INVALID GRADE PLEASE ENTER CORRECT GRADE" << endl;
				cout << "NOTE: ENTER GRADE IN CAPITAL LETTER ONLY" << endl;
				cin >> gradee;
			}
			for (i = 0; i <lim; i++)
			for (int j = i + 1; j <lim; j++)
			if (gr[i] <= gr[j])
			{
				//FOR SORTING ROLL NUMBER
				temp = roll_num[i];
				roll_num[i] = roll_num[j];
				roll_num[j] = temp;

				//FOR SORTING MIDTERM MARKS
				temp = mid_marks[i];
				mid_marks[i] = mid_marks[j];
				mid_marks[j] = temp;

				//FOR SORTING FINAL-MARKS
				temp = final_marks[i];
				final_marks[i] = final_marks[j];
				final_marks[j] = temp;

				//FOR SORTING CLASS
				temp = classes[i];
				classes[i] = classes[j];
				classes[j] = temp;

				//FOR SORTING GRADE
				temp = gr[i];
				gr[i] = gr[j];
				gr[j] = temp;
			}
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			cout << "                                                            " << "THE RECORD ARRANGE IN ASCENDING ORDER LESS THEN AND EQUAL TO USER INPUT ARE" << endl;
			cout << "                                                              " << "------------------------------------------------------------------" << endl;
			//USING FOR LOOP TO DISPLAY THE RECORD ACCORDING TO GRADE ARRANGE IN DESCENDING ORDER
			for (i = 0; i <lim; i++)
			if (gradee <= gr[i])
			{
					cout << "                                                              " << "Grade:" << gr[i] << "   " << "Final_Marks:" << final_marks[i] << "    " << "Mid_Term Marks:" << mid_marks[i] << "    " << "Roll Number:" << roll_num[i] << "    " << "Class:" << classes[i] << "   " << endl;
			}
		}
		//USING ELSE SO IF THE USER WILL INPUT THE OPTION OTHER THEN THE GIVEN THEN THIS WILL DISPLAYED AND THE USER WILL ASK FOR INPUT AGAIN
		else
		{
			cout << "invalid option!" << endl;
			cout << endl;
			cout << endl;
		}
	} while (1);
	return 0;
}
