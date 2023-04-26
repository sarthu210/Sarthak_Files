import java.util.*;

class Examination
{
	int year;
	int total_students_appeared;

	Scanner sc = new Scanner(System.in);

	void getData()
	{
		System.out.println("Enter the year: ");
		year = sc.nextInt();

		System.out.println("Enter the number of students to appeard: ");
		total_students_appeared = sc.nextInt();
	}

	void disPlay()
	{
		System.out.println("Year is, "+year);
		System.out.println("Total number of students appeard is, "+total_students_appeared);
	}
}