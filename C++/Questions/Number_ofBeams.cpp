class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int DeviceCount = 0;
        int result = 0;
        for(int i = 0; i < n; i++){
            int currentDevice = 0;
            for(char &ch : bank[i]) {
                if(ch == '1'){
                    currentDevice++;
                }
            }
            result += (currentDevice * DeviceCount);

            if(currentDevice != 0){
                DeviceCount = currentDevice;

            }
        }
        return result;
        
    }
};