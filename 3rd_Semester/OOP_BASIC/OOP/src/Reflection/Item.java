package Reflection;

import java.util.Date;

public class Item {
    public String name;
    public int price;
    public int quantity;
    public Date ExpireDate;

    public Item(String name, int price, int quantity, Date expireDate){
        this.name = name;
        this.price = price;
        this.quantity = quantity;
        this.ExpireDate = expireDate;
    }


}
