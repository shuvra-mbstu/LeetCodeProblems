class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
      bigCar = big;
	    mediumCar = medium;
	    smallCar = small;
    }
    
    bool addCar(int carType) {
      if(carType == 1 && bigCar>0){
        bigCar --;
        return true;
    	}

 if(carType == 2 && mediumCar>0){
	  mediumCar --;
	  return true;
	}

 if(carType == 3 && smallCar>0){
	  smallCar --;
	  return true;
	}

	return false;
    }
private:
int bigCar, mediumCar, smallCar;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */