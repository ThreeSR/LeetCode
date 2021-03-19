class ParkingSystem { // 模拟法
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small): b(big), m(medium), s(small) {} 
    
    bool addCar(int carType) {
        if (carType == 1) {
            if (b > 0) {
                b--;
                return true;
            }
        } else if (carType == 2) {
            if (m > 0) {
                m--;
                return true;
            }
        } else if (carType == 3) {
            if (s > 0) {
                s--;
                return true;
            }
        }
        return false;
    }
};

// 本题用模拟法就可以求解，是一道使用C++ class的模板题