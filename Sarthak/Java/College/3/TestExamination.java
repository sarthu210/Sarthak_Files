import java.util.*;

class TestExamination
{
	public static void main(String args[])
	{
		Examination stud1 = new Examination();
		stud1.getData();
		stud1.disPlay();

		Examination stud2 = new Examination();
		stud2.getData();
		stud2.disPlay();

		Examination stud3 = new Examination();
		stud3.getData();
		stud3.disPlay();

		if(stud1.total_students_appeared>stud2.total_students_appeared && stud1.total_students_appeared>stud3.total_students_appeared)
		{
			System.out.println("In year "+stud1.year+" there was largest number students are appeared i.e. "+stud1.total_students_appeared);
		}

		else if(stud2.total_students_appeared>stud1.total_students_appeared && stud2.total_students_appeared>stud3.total_students_appeared)
		{
			System.out.println("In year "+stud2.year+" there was largest number students are appeared i.e. "+stud2.total_students_appeared);
		}

		else
		{
			System.out.println("In year "+stud3.year+" there was largest number students are appeared i.e. "+stud3.total_students_appeared);
		}

	}
}