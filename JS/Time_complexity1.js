const username = ['nimitt'];

function findusername(array){
    let t0 = performance.now();
    for(let i = 0; i < array.length; i++){
        if(array[i] == 'nimitt'){
            console.log("Found username " + array[i] + " !");
        }

    }
    let t1 = performance.now()
    console.log("The function took: " + (t1-t0) + 'milliseconds');
    return 0;
}

findusername(username);