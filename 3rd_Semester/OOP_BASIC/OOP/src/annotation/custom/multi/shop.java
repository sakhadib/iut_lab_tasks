package annotation.custom.multi;

import java.util.ArrayList;
import java.util.List;

@info(author="Shuvro", date="19 Nov, 23", description="This is a shop.")
public class shop {
    List<String> items ;
    public shop(){
        items = new ArrayList<>();
    }

    @info(author="Shuvro", date="19 Nov, 23", description="Add an item to the shop.")
    public void addItem(String item){
        items.add(item);
    }

    @info(author="Shuvro", date="19 Nov, 23", description="Remove an item from the shop.")
    public void removeItem(String item){
        items.remove(item);
    }


}
