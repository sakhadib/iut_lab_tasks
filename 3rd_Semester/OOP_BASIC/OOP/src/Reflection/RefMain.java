package Reflection;

import annotation.custom.multi.info;

import java.lang.reflect.Method;

public class RefMain {
    public static void main(String[] args) {
        Shop myShop = new Shop("myShop", "100 Bonani, Dhaka", "100", "abc@gmail.com");


        System.out.println("Class Name: " + myShop.getClass().getName());
        System.out.println("Methods.........................");
        for(Method m : myShop.getClass().getMethods()){
            System.out.println("Name : " + m.getName());
            System.out.println("Return Type : " + m.getReturnType());
            System.out.println("Parameter Count : " + m.getParameterCount());
            System.out.println("Parameter Types : ");
            for(Class c : m.getParameterTypes()){
                System.out.println(c.getName());
            }

            System.out.println("\n----------------------------------\n");

        }

        //Invoking ShopInfo Method
        System.out.println("Invoking ShopInfo Method............");
        for(Method m : myShop.getClass().getMethods()){
            if(m.getName().equals("ShopInfo")){
                try {
                    m.invoke(myShop);
                } catch (Exception e) {
                    System.out.println(e.getMessage());
                }
            }
        }

    }
}
