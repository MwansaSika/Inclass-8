public class PreferredCustomerTest
{
   public static void main(String[] args)
   { PreferredCustomer a=new PreferredCustomer("Mwansa SIkanyika","903 Garnet St","Redondo Beach","90277",true,592.00);
     System.out.println("Name: "+a.getName());
     System.out.println("Address: "+a.getAddress());
     System.out.println("Phone: "+a.getPhone());
     System.out.println("Customer Number: "+a.getNumber());
     System.out.println("Mailing List: "+a.getList());
     System.out.printf("Purchases: $%.2f\n",a.getPurchases());
     System.out.println("Discount: "+a.getDiscount()*100+"%");
   }
}


public class PreferredCustomer extends Customer
{ private double purchases;           
private double discount;   
    public PreferredCustomer()
    {super();
        purchases=0;
        discount=0;
    }
    public PreferredCustomer(String n,String a,String p,String c, boolean m, double amt)
    {super(n,a,p,c,m);
    setDiscount(amt);
    }
   public void setDiscount(double p)
   { purchases = p;
        if (purchases>=2000)
            discount=0.1;       
        else if(purchases>= 1500)
            discount=0.07;   
        else if(purchases>=1000)
            discount=0.06;
        else if(purchases>=500)
            discount=0.05;   
        else
            discount=0;       
   }
   public double getPurchases()
   {return purchases;
   }
   public double getDiscount()
   {return discount;
   }
}

