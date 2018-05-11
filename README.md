class PreferredCustomerTest
{
	public static void main(String[] args)
	{
		PreferredCustomer a = new PreferredCustomer("Mwansa Skanyika", "903 Garnet St", "Redondo Beach", "CA", true, 592.00);
		System.out.println("Whats you name: " + a.getName());
		System.out.println("Whats your Add: " + a.getAddress());
		System.out.println("Phone number: " + a.getPhone());
		System.out.println("What is your Mailing List: " + a.getList());
		System.out.printf("Purchases made: $%.2f\n", a.getPurchases());
		System.out.println("Discount: " + a.getDiscount() * 100 + "%");
	}
		System.out.println("Number of customer: " + a.getNumber());		
}
ublic class PreferredCustomer extends Customer
{
	private double purchases;
	private double discount;
	public PreferredCustomer()
	{
		super();
		purchases = 0;
		discount = 0;
	}
	public PreferredCustomer(String n, String a, String p, String c, boolean m, double amt)
	{
		super(n, a, p, c, m);
		setDiscount(amt);
	}
	public void setDiscount(double p)
	{
		purchases = p;
		if (purchases >= 2000)
			discount = 0.1;
		else if (purchases >= 1500)
			discount = 0.07;
		else if (purchases >= 1000)
			discount = 0.06;
		else if (purchases >= 500)
			discount = 0.05;
		else
			discount = 0;
	}
	public double getPurchases()
	{
		return purchases;
	}
	public double getDiscount()
	{
		return discount;
	}
}
