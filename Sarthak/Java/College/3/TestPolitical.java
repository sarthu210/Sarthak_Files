import java.util.*;

class TestPolitical
{
	public static void main(String args[])
	{
		PoliticalParty leader1 = new PoliticalParty();
		leader1.partDetial();
		leader1.disPlay();

		PoliticalParty leader2 = new PoliticalParty();
		leader2.partDetial();
		leader2.disPlay();

		if(leader1.total_MLAs>leader2.total_MLAs)
		{
			System.out.println("total " + leader1.total_MLAs + " leader of " + leader1.name + " are elected by citizen");
		}

		
		else
		{
			System.out.println("total " + leader2.total_MLAs + " leader of " + leader2.name + " are elected by citizen");
		}
	}
}