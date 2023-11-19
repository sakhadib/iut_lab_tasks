package Reflection;

import java.util.ArrayList;
import java.util.List;

public class Shop {
    public String Name;
    public String Address;
    public String Phone;
    public String Email;

    public List<Item> items;

    public Shop(String name, String address, String phone, String email){
        this.Name = name;
        this.Address = address;
        this.Phone = phone;
        this.Email = email;
        items = new ArrayList<>();
    }

    public void ShopInfo(){
        System.out.println("Shop Name: " + this.Name);
        System.out.println("Shop Address: " + this.Address);
        System.out.println("Shop Phone: " + this.Phone);
        System.out.println("Shop Email: " + this.Email);
    }

    public void addItem(Item item){
        items.add(item);
    }

    public void removeItem(Item item){
        items.remove(item);
    }

    public void removeExpiredItems(){
        for(Item i : items){
            if(i.ExpireDate.before(new java.util.Date())){
                items.remove(i);
            }
        }
    }

    public List<Item> lowPriceItems(double max){
        List<Item> lowPrice = new ArrayList<>();
        for(Item i : items){
            if(i.price <= max){
                lowPrice.add(i);
            }
        }
        return lowPrice;
    }

    public List<Item> highPriceItems(double min){
        List<Item> highPrice = new ArrayList<>();
        for(Item i : items){
            if(i.price >= min){
                highPrice.add(i);
            }
        }
        return highPrice;
    }

}
