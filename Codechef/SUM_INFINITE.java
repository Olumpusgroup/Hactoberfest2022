abstract class Train {
    protected static String name;
    protected static int capacity;

    public Train(String name, int capacity){
        this.name = this.name;
        this.capacity = this.capacity;
    }

    public String getDetails(){
        return "";
    }
}

//Make necessary changes in the classes given below
class CargoTrain extends Train {
    protected String name;
    protected int capacity;
    public CargoTrain(String name, int capacity){
        super(name,capacity);
        this.name = Train.name;
        this.capacity = Train.capacity;
    }

    public String getDetails(){
        return name+" is a passenger train having a capacity of "+capacity+" passengers.";
    }
}

class PassengerTrain extends Train {
    protected String name;
    protected int capacity;
    public PassengerTrain(String name, int capacity){
        super(name, capacity);
        this.name = Train.name;
        this.capacity = Train.capacity;
    }

    public String getDetails(){
        return name+" is a cargo train having a capacity of "+capacity+" tons.";
    }
}
