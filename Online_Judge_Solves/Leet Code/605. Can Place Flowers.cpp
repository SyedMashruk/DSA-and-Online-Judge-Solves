class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int size = flowerbed.size(), count = 0;
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 1) {
              //  cout<<"if 1"<<endl;
                continue;
            } else if (flowerbed[i] == 0 && i == 0 && size == 1) {
             //   cout<<"If 2"<<endl;
                count++;
            } else if (flowerbed[i] == 0 && i == 0 && flowerbed[i + 1] == 0 &&
                       size > 1) {
                       // cout<<"If 3"<<endl;
                flowerbed[i] = 1;
                count++;
            } else if (flowerbed[i] == 0 && i == size - 1 &&
                       flowerbed[i - 1] == 0) {
                    //    cout<<"If 4"<<endl;
                flowerbed[i] = 1;
                count++;
            } else if (i < size - 1 && i > 0) {
             //   cout<<"If 5"<<endl;
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                    flowerbed[i + 1] == 0) {
                      //  cout<<"If 5.1"<<endl;
                    flowerbed[i] = 1;
                    count++;
                }else{
                 //   cout<<"If 5"<<endl;
                    continue;
                }
            }

          //  cout<<"One Loop Ends"<<endl;
        }
       // cout<<"Count: "<<count<<endl;
        if (count >= n) {
            return true;
        } else {
            return false;
        }
    }
};
