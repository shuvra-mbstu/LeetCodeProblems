class RandomizedSet {

    private Map<Integer, Integer> num;
    private List<Integer> list;
    private Random random;
    
    public RandomizedSet() {
         num = new HashMap<>();
        list = new ArrayList<>();
        random = new Random();
    }
    
    public boolean insert(int val) {
        if(num.containsKey(val)) return false;
        
        list.add(val);
        num.put(val, list.size()-1);
        return true;
    }
    
    public boolean remove(int val) {
        if(!num.containsKey(val)){            
            return false;
        }
        
        int index = num.get(val);
        int lastElement = list.get(list.size()-1);
        list.set(index, lastElement);
        
        num.put(lastElement, index);
        num.remove(val);
        list.remove(list.size()-1);
        return true;
    }
    
    public int getRandom() {
        int randomIndex = random.nextInt(list.size());
        
        return list.get(randomIndex);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */