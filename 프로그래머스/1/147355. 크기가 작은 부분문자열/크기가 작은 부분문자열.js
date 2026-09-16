function solution(t, p) {
    let elements = []
    let resulte = 0
    let f = p.length
    let goal = Number(p)

    for(i = 0; i < t.length; i++){
        elements[i] = t.slice(i, i + f)
        if(i + f >= t.length){
            break;
        }
    }

    let numder = elements.map(Number)
    console.log(numder)

    for(i = 0; i < numder.length; i++){
        if(numder[i] <= p){
            resulte++
        }
    }

    return resulte;
}


