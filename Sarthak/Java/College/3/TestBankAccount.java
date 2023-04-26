class TestBankAccount
{
	public static void main(String args[])
	{
		BankAccount sbi = new BankAccount();
		sbi.userData();
		sbi.disPlay();

		BankAccount axis = new BankAccount();
		axis.userData();
		axis.disPlay();

		if(sbi.balance>axis.balance)
		{
			System.out.println("SBI has jasta amount of blance, "+sbi.balance);
		}

		else
		{
			System.out.println("AXIS has jasta amount of blance, "+axis.balance);
		}



	}
}