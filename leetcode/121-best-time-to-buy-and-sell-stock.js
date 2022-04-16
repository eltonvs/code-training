/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let bestProfit = 0;
  let bestBuyIdx = 0;
  let bestSellIdx = -1;

  for (let i = 1; i < prices.length; i++) {
    if (bestSellIdx === -1) {
      bestSellIdx = i;
    }

    const currVal = prices[i];
    if (currVal > prices[bestSellIdx]) {
      bestSellIdx = i;
    } else if (currVal < prices[bestBuyIdx]) {
      bestBuyIdx = i;
      bestSellIdx = -1;
      continue;
    }
    const currProfit = prices[bestSellIdx] - prices[bestBuyIdx];
    if (currProfit > bestProfit) {
      bestProfit = currProfit;
    }
  }

  return bestProfit;
};
