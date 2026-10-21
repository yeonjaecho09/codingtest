function solution(prices) {
    var price = prices;
    var length = prices.length;
    var answer = [];
    var count = 0;
    for(var i = 0; i < length; i++){
        for(var j = i + 1; j < length; j++){
            count++;
            if(price[i] > price[j]){
                break;
            }
        }
        answer[i] = count;
        count = 0;
    }
    return answer;
}