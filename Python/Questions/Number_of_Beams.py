def numberOfBeams(bank):
    n = len(bank)
    DeviceCount = 0
    result = 0
    
    for i in range(n):
        currentDevice = 0
        for ch in bank[i]:
            if ch == '1':
                currentDevice += 1
        
        result += currentDevice * DeviceCount
        
        if currentDevice != 0:
            DeviceCount = currentDevice
    
    return result