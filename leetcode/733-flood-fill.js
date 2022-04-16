const fillPattern = [
  [-1, 0],
  [0, -1],
  [1, 0],
  [0, 1],
];

/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} newColor
 * @return {number[][]}
 */
var floodFill = function (image, sr, sc, newColor) {
  const visited = {};
  const originalColor = image[sr][sc];
  const maxI = image.length - 1;
  const maxJ = image[0].length - 1;
  const toVisit = [[sr, sc]];
  while (toVisit.length !== 0) {
    const [i, j] = toVisit.pop();
    visited[`${i}.${j}`] = true;
    image[i][j] = newColor;

    for (let [vI, vJ] of fillPattern) {
      const nI = i + vI;
      const nJ = j + vJ;
      const key = `${nI}.${nJ}`;
      if (nI < 0 || nJ < 0 || nI > maxI || nJ > maxJ || key in visited) {
        continue;
      }
      const c = image[nI][nJ];
      if (c == originalColor) {
        toVisit.push([nI, nJ]);
      }
    }
  }
  return image;
};
